#pragma once

#include <string>
using namespace std;

namespace cv {
	class Mat {
	public:
		Mat() {};
		//Mat(int _rows, int _cols, int _type);

		////! destructor - calls release()
		//~Mat();

		//
		//Mat& operator = (const Mat& m);

		//Mat row(int y) const;
		//Mat col(int x) const;

		//void create(int rows, int cols, int type);
		//std::string s = "minicv";
		string s;
		void func();
	};
	
}
