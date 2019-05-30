#pragma once
#include "grfmt_base.hpp"
namespace cv {
	enum BmpCompression{
		BMP_RGB = 0,
		BMP_RLE8 = 1,
		BMP_RLE4 = 2,
		BMP_BITFIELDS = 3
	};
	class BmpDecoder CV_FINAL : public BaseImageDecoder {

	};
}