#pragma once

#include "../core/core.hpp"
	
namespace cv {
	Mat imread(const string& filename, int flags = /*IMREAD_COLOR=*/1);
}