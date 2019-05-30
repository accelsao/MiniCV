#pragma once


namespace cv {
	class BaseImageDecoder;
	class BaseImageEncoder;
	//typedef Ptr<BaseImageEncoder> ImageEncoder;
	//typedef Ptr<BaseImageDecoder> ImageDecoder;
	typedef BaseImageEncoder ImageEncoder;
	typedef BaseImageDecoder ImageDecoder;

	class BaseImageDecoder {
	public:
		BaseImageDecoder();
		virtual ~BaseImageDecoder() {}

	};
	class BaseImageEncoder {
	public:
		BaseImageEncoder();
		virtual ~BaseImageEncoder() {}
	};
}