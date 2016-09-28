// HugeIntDll.h

#ifdef HUGEINTDLL_EXPORTS
#define HUGEINTDLL_API __declspec(dllexport) 
#else
#define HUGEINTDLL_API __declspec(dllimport) 
#endif


#define MAXLEN 1000
#define POSITIVE 1
#define NEGATIVE -1
#define ZERO 0

#include<iostream>
using namespace std;
namespace HugeIntSpace
{
	class HugeInt
	{
		friend HUGEINTDLL_API ostream &operator<<(ostream& output, const HugeInt& n);
	public:
		
		HUGEINTDLL_API HugeInt(int = 0);
		HUGEINTDLL_API HugeInt(char *str);
		HUGEINTDLL_API HugeInt(const HugeInt& other);
		HUGEINTDLL_API HugeInt& operator=(const HugeInt& other);

		HUGEINTDLL_API bool operator==(const HugeInt &other)const;
		HUGEINTDLL_API bool operator==(const int &x)const;
		HUGEINTDLL_API bool operator!=(const HugeInt &other)const;
		HUGEINTDLL_API bool operator!=(const int &x)const;

		HUGEINTDLL_API bool operator>(const HugeInt &other)const;
		HUGEINTDLL_API bool operator>(const int &x)const;
		HUGEINTDLL_API bool operator>=(const HugeInt &other)const;
		HUGEINTDLL_API bool operator>=(const int &x)const;

		HUGEINTDLL_API bool operator<(const HugeInt &other)const;
		HUGEINTDLL_API bool operator<(const int &x)const;
		HUGEINTDLL_API bool operator<=(const HugeInt &other)const;
		HUGEINTDLL_API bool operator<=(const int &x)const;


		HUGEINTDLL_API HugeInt operator+(const HugeInt &other)const;
		HUGEINTDLL_API HugeInt operator+(const int &x)const;
		HUGEINTDLL_API HugeInt operator+=(const HugeInt &other);
		HUGEINTDLL_API HugeInt operator+=(const int &x);
		HUGEINTDLL_API HugeInt& operator++();//前置
		HUGEINTDLL_API HugeInt operator++(int);//后置


		HUGEINTDLL_API HugeInt operator-();//负号
		HUGEINTDLL_API HugeInt operator-(const HugeInt &other)const;
		HUGEINTDLL_API HugeInt operator-(const int &x)const;
		HUGEINTDLL_API HugeInt operator-=(const HugeInt &other);
		HUGEINTDLL_API HugeInt operator-=(const int &x);
		HUGEINTDLL_API HugeInt& operator--();//前置
		HUGEINTDLL_API HugeInt operator--(int);//后置

		HUGEINTDLL_API HugeInt operator*(const HugeInt &other)const;
		HUGEINTDLL_API HugeInt operator*(const int &x)const;
		HUGEINTDLL_API HugeInt operator*=(const HugeInt &other);
		HUGEINTDLL_API HugeInt operator*=(const int &x);

		HUGEINTDLL_API HugeInt operator/(const HugeInt &other)const;
		HUGEINTDLL_API HugeInt operator/(const int &x)const;
		HUGEINTDLL_API HugeInt operator/=(const HugeInt &other);
		HUGEINTDLL_API HugeInt operator/=(const int &x);

		HUGEINTDLL_API HugeInt operator%(const HugeInt &other)const;
		HUGEINTDLL_API int operator%(const int &x)const;
		HUGEINTDLL_API HugeInt operator%=(const HugeInt &other);
		HUGEINTDLL_API int operator%=(const int &x);

		char num[MAXLEN];
		int length;
		int sign;
		HUGEINTDLL_API bool isZero()const;
	};
}
