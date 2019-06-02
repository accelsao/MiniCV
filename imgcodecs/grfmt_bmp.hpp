#pragma once
#include "grfmt_base.hpp"
#include "../core/cvdef.h"

namespace cv {
	enum BmpCompression{
		BMP_RGB = 0,
		BMP_RLE8 = 1,
		BMP_RLE4 = 2,
		BMP_BITFIELDS = 3
	};
	class BmpDecoder CV_FINAL : public BaseImageDecoder {
	public:
		BmpDecoder();
		~BmpDecoder() CV_OVERRIDE;
		
		bool readData(Mat& img) CV_OVERRIDE;
		ImageDecoder newDecoder() const CV_OVERRIDE;
	protected:
		int             m_offset;
	};

	class BmpEncoder CV_FINAL : public BaseImageEncoder {
	public:
		BmpEncoder();
		~BmpEncoder() CV_OVERRIDE;
		ImageEncoder newEncoder() const CV_OVERRIDE;
	};
}