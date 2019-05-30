#pragma once

#include "minicv/core.hpp"
	
namespace cv {
	Mat imread(const string& filename, int flags = /*IMREAD_COLOR=*/1);
}