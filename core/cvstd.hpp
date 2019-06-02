#pragma once

#include "cvdef.h"
#include "cvstd_wrapper.hpp"

namespace cv {

	CV_EXPORTS void* fastMalloc(size_t bufSize);
	CV_EXPORTS void fastFree(void* ptr);

	template<typename _Tp> class Allocator {
	public:

	};
	
}