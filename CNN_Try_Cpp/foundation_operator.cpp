
#include <iostream>
using namespace std;
class A
{
public:
	A(int a) :_a(a) {}
	operator bool()
	{
		cout << "operator bool" << endl;
		return _a;
	}

private:
	int _a;
};
int main()
{
	A a(0);
	A b(10);
	if (a)
		cout << "a" << endl;
	if (a == b)
		cout << "asdasddsa" << endl;
	if (b)
		cout << "if (b)!!! b:" << b << endl;
	getchar();
	return 0;
}
// ** ������ **
//operator bool
//operator bool
//operator bool
//operator bool
//if (b)!!! b:1

//Ҳ����˵��ÿ�ε���a / b������ʱ�򣬶�����ִ��һ��operator bool()
// �����ִ�еĺ������ͻ�ѱ��������bool����



// ================================= jlq / ����operator ==() =================================
//#include <iostream>
//using namespace std;
//class A
//{
//public:
//	A(int a) :_a(a) {}
//	operator bool()
//	{
//		cout << "operator bool" << endl;
//		return _a;
//	}
//	bool operator==(const bool& other)
//	{
//		cout << "bool operator==(const bool &rhs)" << endl;
//		return (bool)_a == other;
//	}
//	bool operator==(const A& other)
//	{
//		cout << " bool operator==(const A&other)" << endl;
//		return this->_a == other._a;
//	}
//private:
//	int _a;
//};
//int main()
//{
//	A a(0);
//	A b(10);
//	A c(10);
//	if (a == true)
//		cout << "a == true" << endl;
//	if (b == c)
//		cout << "b == c" << endl;
//	getchar();
//	return 0;
//}