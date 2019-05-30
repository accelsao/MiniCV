#pragma once

#include "cvdef.h"

#include <string>
#include <memory>  // std::shared_ptr
#include <type_traits>  // std::enable_if

namespace cv {
	using std::nullptr_t;
	template<typename _Tp> using Ptr = std::shared_ptr<_Tp>;
	template<typename _Tp, typename ... A1> static inline
		Ptr<_Tp> makePtr(const A1& ... a1) { return std::make_shared<_Tp>(a1...); }

	namespace sfinae {
		template<typename C, typename Ret, typename... Args>
		struct has_parenthesis_operator {
		private:
			template<typename T>
			static constexpr std::true_type check(typename std::is_same<typename std::decay>)
		};
		
	}
}