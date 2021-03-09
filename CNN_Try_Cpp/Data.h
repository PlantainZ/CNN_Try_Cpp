#pragma once

#include "Configure.h"
#include "Shape.h"

namespace jlq {
	class Data {
	public:
		Data();
		Data(const Shape& new_shape);
		~Data();
	public:
		bool is_empty() const;
		void clear();
		void reshape(const Shape& new_shape);
	private:
		Shape shape;
		DataType mems;
	};
}