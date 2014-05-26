---
layout: default
image: index.jpg
title: HDRMerge
subtitle: HDR raw exposure merging
---
# What is HDRMerge?

[HDRMerge](https://github.com/jcelaya/hdrmerge) combines two or more raw images into a single raw with an extended dynamic range. It can import any raw image supported by LibRaw, and outputs a DNG 1.4 image with floating point data. The output raw is built from the less noisy pixels of the input, so that shadows maintain as much detail as possible. This tool also offers a GUI to remove 'ghosts' from the resulting image. [Discover more about HDRMerge]({% post_url 2014-05-24-what-is-hdrmerge %})


# Downloads

HDRMerge is currently supported in Linux and Windows, with the Mac version on its way. You can find the archives for [the latest release]({{ site.github }}/releases/latest) in the [GitHub repository]({{ site.github }}). Please, feel free to file bugs/feature requests using GitHub's issues system.


# Getting started

You may want to read the [manual]({% post_url 2014-05-24-using-hdrmerge %}), or jump directly to the command line help with `hdrmerge --help`.


# Feature List

### v0.4.2:

* Improved GUI:
  * A slider to control the brush radius.
  * A slider to control the preview exposure.
  * Movable toolbars.
  * Layer selector with color codes.
  * Improved brush visibility on different backgrounds.
  * Posibility of saving the output options.
* First release with a Windows version, both 32- and 64-bit.

### v0.4.1:

* Bugfixes release

### v0.4:

* Great performance improvements with OpenMP.
* Not depend anymore on DNG & XMP SDK! Windows and Mac version soon...
* More robust MBT alignment.
* More control on the logging output.
* The user may disable alignment and/or cropping. This is most useful to obtain an image of the same size as the inputs. Some programs have this requirement to apply a flat-field image, for instance.

### v0.3: The first public version of HDRMerge

* Supports any raw format supported by LibRaw.
* Automatic alignment of small translations.
* Automatic crop to the optimal size.
* Automatic merge mask creation. The mask identifies the best source image for each pixel of the output.
* Editable merge mask, to manually select pixels from specific source images.
* Writes DNG files with 16, 24 and 32 bits per pixel.
* Writes full, half or no preview to the output image.
* Copies the EXIF data from the least exposed source image.


# License

HDRMerge is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.

HDRMerge is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.


# Acknowledgments

HDRMerge is what it is thanks to all the people that have contributed ideas, critics and samples to improve it. In particular, thanks to the team of [RawTherapee](http://rawtherapee.com/). Also, HDRMerge implements or is based on the techniques described in the following works:

1. Ward, G. (2003). Fast, robust image registration for compositing high dynamic range photographs from hand-held exposures. *Journal of graphics tools*, 8(2), 17-30.
+  Guillermo Luijk, Zero Noise, <http://www.guillermoluijk.com/tutorial/zeronoise/index.html>
+  Jens Mueller, dngconvert, <https://github.com/jmue/dngconvert>
+  Jarosz, W. (2001). Fast image convolutions. In SIGGRAPH Workshop. Code from Ivan Kuckir, <http://blog.ivank.net/fastest-gaussian-blur.html>