#pragma once



#include "bitstrm.hpp"
#include "../core/core.hpp"

namespace cv {
	class BaseImageDecoder;
	class BaseImageEncoder;

	typedef Ptr<BaseImageEncoder> ImageEncoder;
	typedef Ptr<BaseImageDecoder> ImageDecoder;

	class BaseImageDecoder {
	public:
		BaseImageDecoder();
		virtual ~BaseImageDecoder() {}
		virtual bool readData(Mat& img) = 0;
		virtual ImageDecoder newDecoder() const;
	};

	class BaseImageEncoder {
	public:
		BaseImageEncoder();
		virtual ~BaseImageEncoder() {}

		virtual ImageEncoder newEncoder() const;
	};
}