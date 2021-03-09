#include<vector>
#include<initializer_list>

namespace MiniDL {
	class Shape {
	public:
		Shape();
		Shape(const std::initializer_list<int> items);
		~Shape();

	public:
		bool operator==(const Shape& other) const;
	};
}