#pragma once


#include "cvstd_wrapper.hpp"

namespace cv {

	void* fastMalloc(size_t bufSize);
	void fastFree(void* ptr);

	template<typename _Tp> class Allocator {
	public:

	};
	
}