// Includes --------------------------------------------------------------------
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

// Namespaces ------------------------------------------------------------------
using namespace cv;
using namespace std;

// Main function ---------------------------------------------------------------
int main(int argc, char **argv){
  // Check command line parameters if they're provided - - - - - - - - - - - - -
  cout << "Starting program " << argv[0] << "..." << endl;
  int scaleFactor;
  if (argc == 1)
    scaleFactor = 1;
  else
    scaleFactor = atoi(argv[1]);
  // Load raw images - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  Mat img, img_color, img_flipped, step0, step1, step2, step3;
  string imgSrc = "./images/rev_0.JPEG";
  img = imread(imgSrc, 0);
  img_color = imread(imgSrc, 1);
  int height = img.cols;
  int width = img.rows;
  flip(img, img_flipped, 1);

  // Blur images for edge detection - - - - - - - - - - - - - - - - - - - - - -
  blur(img_flipped, step0, Size(3,3));
  // Perform Canny edge detection - - - - - - - - - - - - - - - - - - - - - - -
  Canny( step0, step1, 50, 155, 3);
  // Make detected edges bigger - - - - - - - - - - - - - - - - - - - - - - - -
  dilate(step1, step2, Mat());

  // Change all white pixels to purples - - - - - - - - - - - - - - - - - - - -
  cvtColor(step2, step3, COLOR_GRAY2RGB);
  for (int i = 0; i < width; i++){
    for (int j = 0; j < height; j++){
      if (step2.at<uchar>(i, j) == 255){
        step3.at<Vec3b>(i, j)[0] = 190;
        step3.at<Vec3b>(i, j)[1] = 3;
        step3.at<Vec3b>(i, j)[2] = 252;
      }
    }
  }

  // Save images
  imwrite("./OutputImages/color.JPEG", img_color);
  imwrite("./OutputImages/gray.JPEG", img);
  imwrite("./OutputImages/flipped.JPEG", img_flipped);
  imwrite("./OutputImages/step0.JPEG", step0);
  imwrite("./OutputImages/step1.JPEG", step1);
  imwrite("./OutputImages/step2.JPEG", step2);
  imwrite("./OutputImages/step3.JPEG", step3);
  // Display windows - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  namedWindow("Raw Gray", WINDOW_NORMAL);
  namedWindow("Raw Color", WINDOW_NORMAL);
  namedWindow("Step 1", WINDOW_NORMAL);
  namedWindow("Step 2", WINDOW_NORMAL);
  namedWindow("Step 3", WINDOW_NORMAL);
  resizeWindow("Raw Gray", height/scaleFactor, width/scaleFactor);
  resizeWindow("Raw Color", height/scaleFactor, width/scaleFactor);
  resizeWindow("Step 1", height/scaleFactor, width/scaleFactor);
  resizeWindow("Step 2", height/scaleFactor, width/scaleFactor);
  resizeWindow("Step 3", height/scaleFactor, width/scaleFactor);
  imshow("Raw Gray", img);
  imshow("Raw Color", img_color);
  imshow("Step 1", step1);
  imshow("Step 2", step2);
  imshow("Step 3", step3);
  waitKey(0);



  return 0;
 }
