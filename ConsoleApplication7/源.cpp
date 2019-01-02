#include <iostream>
#include <sstream>
#include <string>
//class InnerConversion
//{
//public:
//
//
//
//	static std::wstring AppendSymbol(const std::wstring & str, const std::wstring & symbol)
//	{
//		std::wstring res = str;
//		res.append(symbol);	
//		return res;
//	}
//	static std::wstring PreAppendSymbol(const std::wstring str, const std::wstring & symbol)
//	{
//		std::wstring res = symbol;
//		res.append(str);
//		return res;
//	}
//};
//class Conversion
//{
//	static std::wstring DoubleToString(double fValue, unsigned int nPrecision)
//	{
//		double ratio = std::pow(10, nPrecision);
//		double value = std::round(fValue*ratio) / ratio;
//		wchar_t str[20];
//		std::swprintf(str, L"%%.%df", nPrecision);
//		wchar_t res[20];
//		std::swprintf(res, str, value);
//		return res;
//	}
//	static std::wstring IntToString(__int64 nValue, unsigned int nPrecision, unsigned int nTimes = 1)
//	{
//		double fValue = nValue * 1.0 / nTimes;
//		return DoubleToString(fValue, nPrecision);
//	}
//};

//
//class Conversion :public InnerConversion
//{
//public:
//	std::wstring
//};

//class StringHelper
//{
//public:
//
//private:
//	std::wstring str;
//};

#include <memory>
#include <vector>
class A
{
public:
	int a;
};
class B
{
public:
	void setA(std::shared_ptr<A> & a)
	{
		x = a;
	}

	std::shared_ptr<A> x;
};
void test()
{
	std::vector<std::shared_ptr<A>> vec;
	B b;
	{
		std::shared_ptr<A> x(new A);
		x->a = 100;
		//vec.push_back(x);
		b.setA(x);
	}
	//std::cout << vec[0]->a << std::endl;
	std::cout << b.x->a << std::endl;
}

void test1()
{
	for (int i = 0; i < 10; i++)
	{
		char c[50] = {};
		//sprintf(c, "xxx");
		std::cout << c << std::endl;
		//std::cout << strlen(c) << std::endl;
	}

	std::cout << "///////////////" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		wchar_t wc[50] = {};
		std::cout << wc << std::endl;
		
	}
	//int a = 1.2e3;
}

//void foo(int pra = 1)
//{
//	std::cout <<1 <<  pra << std::endl;
//}
//void foo(int pra)
//{
//	std::cout << pra << std::endl;
//}
#include <iomanip>
#include <cassert>


void test2()
{
	double t = 789347589325252525252522525878945555555555555555555555744325849038590328423054922384219438794747474747474391.0;
	std::wstringstream ss;
	ss << std::fixed << std::setprecision(2000) << t;

	std::wcout << ss.str() << std::endl;

	//std::cout << std::round(t*100)/100 << std::endl;

	//wchar_t str[50];
	//double x = 4789493278432984671290381.3218318227321;
	//std::cout << sizeof(x) << std::endl;
	//std::swprintf(str, L"%.47f", x);// 4789493278432984671290381.3218318227321);

	////std::swprintf(str, L"%d", x);
	//std::wcout << str << std::endl;

	//int value = 1e8;
	//std::cout << value << std::endl;

	//double value = 1.1e7;
	//wchar_t str[50];
	//std::swprintf(str, L"%f", value/46);
	//std::wcout << str << std::endl;
	//std::cout << value/46 << std::endl;

	//assert(1 == 0);
}

int main()
{

		test2();
	
}