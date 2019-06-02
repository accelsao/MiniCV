#include "precomp.hpp"
#include "grfmt_jpeg.hpp"


#ifdef HAVE_JPEG

extern "C" {
	// Need to download
	//#include "jpeglib.h"
}
namespace cv {


	JpegDecoder::JpegDecoder() {
	}

	JpegDecoder::~JpegDecoder() {
	}

	ImageDecoder JpegDecoder::newDecoder() const {
		return makePtr<JpegDecoder>();
	}
	bool  JpegDecoder::readData(Mat& img) {
		return 1;
	}


	/////////////////////// JpegEncoder ///////////////////
	JpegEncoder::JpegEncoder() {
		
	}
	JpegEncoder::~JpegEncoder(){

	}
	ImageEncoder JpegEncoder::newEncoder() const{
		return makePtr<JpegEncoder>();
	}


}

#endif // HAVE_JPEG