#include<iostream>
using namespace std;

class A
{
	public:
	int var;
	A(int c)
	{
		var = c;
	}

	A(const A &ob)
	{
		var = ob.var;
	}
};

int main()
{
	A ob1(10);
	A ob2 = ob1;

	cout<<"Before value change:"<<endl;
	cout<<"object1:"<<ob1.var<<endl;
	cout<<"object2:"<<ob2.var<<endl;

	ob1.var = 200;
	ob2.var = 300;

	cout<<"After value change:"<<endl;
        cout<<"object1:"<<ob1.var<<endl;
        cout<<"object2:"<<ob2.var<<endl;

}
