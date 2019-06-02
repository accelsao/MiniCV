#pragma once


#include "grfmt_base.hpp"
#include "bitstrm.hpp"
#include "../core/cvdef.h"

#define HAVE_JPEG
#ifdef HAVE_JPEG

namespace cv {
	class JpegDecoder CV_FINAL : public BaseImageDecoder {
	public:
		JpegDecoder();
		virtual ~JpegDecoder();
		bool  readData(Mat& img) CV_OVERRIDE;
		ImageDecoder newDecoder() const CV_OVERRIDE;
	};

	class JpegEncoder CV_FINAL : public BaseImageEncoder {
	public:
		JpegEncoder();
		virtual ~JpegEncoder();
		ImageEncoder newEncoder() const CV_OVERRIDE;
	};

}
#endif // HAVE_JPEG