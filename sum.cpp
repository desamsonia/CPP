#include<iostream>
using namespace std;

template <typename t1, typename t2>

void sum(t1 a, t2 b)
{
	cout<<"sum:"<<a+b<<endl;
}

int main()
{
	int a=30,b=10;
	float f1 = 34.2,f2 = 46.4;
	string s1 = "sonia",s2 ="reddy";
	sum(a,b);
	sum(f1,a);
	sum(f2,b);
	sum(s1,s2);

}
