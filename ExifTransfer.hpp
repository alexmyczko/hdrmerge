/*
 *  HDRMerge - HDR exposure merging software.
 *  Copyright 2012 Javier Celaya
 *  jcelaya@gmail.com
 *
 *  This file is part of HDRMerge.
 *
 *  HDRMerge is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  HDRMerge is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with HDRMerge. If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef _EXIFTRANSFER_HPP_
#define _EXIFTRANSFER_HPP_

#include <string>
#include <exiv2/image.hpp>

namespace hdrmerge {

class ExifTransfer {
public:
    ExifTransfer(const std::string & srcFile, const std::string & dstFile) {
        src = Exiv2::ImageFactory::open(srcFile);
        src->readMetadata();
        dst = Exiv2::ImageFactory::open(dstFile);
        dst->readMetadata();
    }

    void copyMetadata();

private:
    Exiv2::Image::AutoPtr src, dst;

    void copyXMP();
    void copyIPTC();
    void copyEXIF();
};

}

#endif // _EXIFTRANSFER_HPP_
