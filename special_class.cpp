#include<iostream>
using namespace std;

template <class T>
class A
{
	T a;
	public:
	A(T e)
	{
		a=e;
	}

	T inc()
	{
		return ++a;
	}
};

template<>
class A <char>
{
	char ch;
	public:
	A(char ch1)
	{
		ch=ch1;
	}

	char upppercase()
	{
		if(ch>= 'a' && ch <='z')
			ch = ch + 'A'-'a';
		return ch;
	}
};

int main()
{
	A<int> myint(12);
	A<double>dou(30.24);
	A<float>flo(34.14);
//	A<bool>boo(true);error
	A<char> mychar('r');

//	cout<<boo.inc()<<endl;error
	cout<<dou.inc()<<endl;
        cout<<flo.inc()<<endl;
	cout<<mychar.upppercase()<<endl;
	return 0;
}
