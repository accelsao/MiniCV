#include "precomp.hpp"
#include "grfmt_bmp.hpp"

namespace cv {
	BmpDecoder::BmpDecoder() {
		m_offset = -1;
	}
	BmpDecoder::~BmpDecoder() {
		
	}

	ImageDecoder BmpDecoder::newDecoder() const{
		return makePtr<BmpDecoder>();
	}

	bool BmpDecoder::readData(Mat& img){
		return 1;
	}


	BmpEncoder::BmpEncoder() {
	}
	BmpEncoder::~BmpEncoder(){
	}
	ImageEncoder BmpEncoder::newEncoder() const{
		return makePtr<BmpEncoder>();
	}
}

