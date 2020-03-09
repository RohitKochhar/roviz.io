// Includes --------------------------------------------------------------------
#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "../include/main_driver.h"

// Namespaces ------------------------------------------------------------------
using namespace cv;
using namespace std;

// Main function ---------------------------------------------------------------
int main(int argc, char** argv){
  cout << "Starting program " << argv[0] << endl;
  // Check if a scale factor has been provided - - - - - - - - - - - - - - - - -
  int scaleFactor = (argc == 1) ? 1 : atoi(argv[1]);

  // Load raw image in grey and color - - - - - - - - - - - - - - - - - - - - -
  Mat raw_g, raw_c;
  string rawImgSrc = "./InputImages/rawimage.JPG";
  raw_g = imread(rawImgSrc, 0);
  raw_c = imread(rawImgSrc, 1);

  // Store frame metadata - - - - - - - - - - - - - - - -- - - - - - - - - - - -
  int height = raw_g.cols;
  int width = raw_g.rows;

  // Register a window for the raw image - - - - - - - - - - - - - - - - - - - -
  string window_1 = "Raw Color Frame";
  string window_2 = "Raw Gray Frame";
  string window_3 = "Step 0 (Blurred)";
  string window_4 = "Step 1 (Canny Edge)";
  string window_5 = "Step 2 (Outer Radius)";
  string window_6 = "Step 3 (Inner Radius)";
  registerNewWindow(window_1, scaleFactor, height, width);
  registerNewWindow(window_2, scaleFactor, height, width);
  registerNewWindow(window_3, scaleFactor, height, width);
  registerNewWindow(window_4, scaleFactor, height, width);
  registerNewWindow(window_5, scaleFactor, height, width);
  //registerNewWindow(window_6, scaleFactor, height, width);
  // Blur gray image to reduce noise - - - - - - - - - - - - - - - - - - - - - -
  Mat step_0, step_1, step_2, step_3;
  blur(raw_g, step_0, Size(3,3));
  // Define origin point of watch hands - - - - - - - - - - - - - - - - - - - -
  int x_offset = -5;
  int y_offset = 35;
  Point watchOrigin = Point(height/2+x_offset, width/2+y_offset);

  // Draw outer radius - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  step_1 = step_0.clone();
  step_2 = raw_c.clone();
  // Inner radius
  circle( step_2, watchOrigin, 750, Scalar(0,100,100), 3, LINE_AA);
  // Outer radius
  int radius = 500;
  circle( step_2, watchOrigin, 1125, Scalar(255,0,255), 3, LINE_AA);

  // Show windows
  imshow(window_1, raw_c);
  imshow(window_2, raw_g);
  imshow(window_3, step_0);
  imshow(window_4, step_1);
  imshow(window_5, step_2);
  //imshow(window_6, step_3);


  waitKey(0);

  return 0;
}

// Helper functions (ToDo: Maybe make these a library for all of roviz) --------
void registerNewWindow(string WindowName, int sf, int h, int w){
  namedWindow(WindowName, WINDOW_NORMAL);
  resizeWindow(WindowName, h/sf, w/sf);
}
