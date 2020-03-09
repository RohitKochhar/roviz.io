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
  registerNewWindow(window_1, scaleFactor, height, width);
  registerNewWindow(window_2, scaleFactor, height, width);

  // Show windows
  imshow(window_1, raw_c);
  imshow(window_2, raw_g);

  waitKey(0);

  return 0;
}

// Helper functions (ToDo: Maybe make these a library for all of roviz) --------
void registerNewWindow(string WindowName, int sf, int h, int w){
  namedWindow(WindowName, WINDOW_NORMAL);
  resizeWindow(WindowName, h/sf, w/sf);
}
