#pragma once

#include "../../../core/include/minicv/core.hpp"

namespace cv {

	enum ImreadModes {
		IMREAD_COLOR = 1
	};

	Mat imread(const string& filename, int flags = IMREAD_COLOR);
}
