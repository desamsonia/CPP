#include<iostream>
using namespace std;

template <class any>

any add(any a,any b)
{
	return a+b;
}

int main()
{
	string s1="sonia";
	string s2="reddy";
	cout<<add(10,20)<<endl;
	cout<<add(10.45,12.1)<<endl;
	cout<<add(12.4f,90.12f)<<endl;
	cout<<add(s1,s2)<<endl;
	return 0;
}
