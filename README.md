# roviz.io
Image Processing Portfolio

## Project 1

### Abstract
- Project 1 was a simple project that was just to get started with the portfolio and to become better
at understanding how my camera works, there's nothing crazy here. The goal of this project was to have
a good display picture and to add some meat to my portfolio before changing it to a public account on
instagram.

### Processing Layers

#### Input Pictures
- The only input here is a raw picture that I took of myself in the mirror, it's super high resolution
but there's no pre-processing done and is shot on manual mode.

#### Output Pictures
- I've saved 7 images in the OutputImages folder, each shows another layer of processing that is
added on top of the last photo.

##### color.JPEG (Import)
- Unaltered, raw picture (same as the input photo)

##### gray.JPEG (Color->Grayscale)
- Reduced number of channels from 3 down to 1

##### flipped.JPEG (Complete Y-axis Rotation)
- Flipped the photo to unmirror it

##### step0.JPEG (Blur)
- Applied a slight blur on the original image to reduce noise

##### step1.JPEG (Canny Edge Detection)
- Detected all the edges in the photo which met the threshold of [50,155]

##### step2.JPEG (Dilation)
- Increased the weight of all edges in the photo by applying a kernel over the whole photo

##### step3.JPEG (White->Purple)
- Converted the image back to 3 channels and then switched all white edges to my favorite color, purple
