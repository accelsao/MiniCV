#include "grfmt_base.hpp"
#include "precomp.hpp"
#include "bitstrm.hpp"



namespace cv {

	BaseImageDecoder::BaseImageDecoder() {
		
	}

	ImageDecoder BaseImageDecoder::newDecoder() const {
		return ImageDecoder();
	}

	BaseImageEncoder::BaseImageEncoder(){

	}

	ImageEncoder BaseImageEncoder::newEncoder() const{
		return ImageEncoder();
	}
}