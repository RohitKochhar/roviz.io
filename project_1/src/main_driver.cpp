#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

int main(int argc, char **argv){
  cout << "Starting program " << argv[0] << "..." << endl;
  int scaleFactor = 4;
  string imgSrc = "./images/rev_0.JPEG";
  Mat img = imread(imgSrc, 0);
  int height = img.cols;
  int width = img.rows;
  Mat edges = img.clone();
  blur(img, edges, Size(3,3));
  Canny( edges, edges, 30, 130, 3);
  namedWindow("Picture", WINDOW_NORMAL);
  resizeWindow("Picture", img.cols/scaleFactor, img.rows/scaleFactor);
  imshow("Picture", img);



  namedWindow("Edge Picture", WINDOW_NORMAL);
  resizeWindow("Edge Picture", edges.cols/scaleFactor, edges.rows/scaleFactor);
  imshow("Edge Picture", edges);

  waitKey(0);


  return 0;
 }
