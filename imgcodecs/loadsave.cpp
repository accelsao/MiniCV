#include "precomp.hpp"
#include "grfmts.hpp"
#include <iostream>
#include <vector>

namespace cv {

	/*
		Container which stores the registered codecs to be used by MiniCV
	*/
	struct ImageCodecInitializer {
		ImageCodecInitializer() {
			/// BMP Support
			/*decoders.push_back(makePtr<BmpDecoder>());
			encoders.push_back(makePtr<BmpEncoder>());*/

#define HAVE_JPEG
#ifdef HAVE_JPEG
			decoders.push_back(makePtr<JpegDecoder>());
			//encoders.push_back(makePtr<JpegEncoder>());
#endif
		}
		std::vector<ImageDecoder> decoders;
		std::vector<ImageEncoder> encoders;
	};

	static ImageCodecInitializer codecs;
	static ImageDecoder findDecoder(const string& filename) {
		
		
	}


	static bool imread_(const string& filename, int flags, Mat& mat) {
		
		cout << "Here\n";
		ImageDecoder decoder;

		decoder = findDecoder(filename);

		return true;
	}
//
//	Mat imread(const string& filename, int flags) {
//		Mat img;
//		imread_(filename, flags, img);
//		cout << "Load Image\n";
//		return img;
//	}
//
}
