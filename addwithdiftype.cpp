#include<iostream>
#include<typeinfo>
using namespace std;

template <class type1,class type2>
type2 add(type1 a,type2 b)
{
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
	return a+b;
}

template <class type1,class type2>
type1 sub(type1 a,type2 b)
{
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;	
	return a-b;
}

template <class type1,class type2>
type2 mul(type1 a,type2 b)
{
	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;
        return a*b;
}

int main()
{
	cout<<add(10,23.54f)<<endl;
	cout<<sub(23.44,44.54)<<endl;
	cout<<mul(3.5f,4.9)<<endl;
	return 0;
}
