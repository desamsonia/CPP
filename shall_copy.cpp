#include<iostream>
using namespace std;

class A
{
	int *var;        
	public:
	A(int b)
	{
           var = new int;
	   *var = b;	 
	}

	void setvar(int c)
	{
          *var = c;
	}

	int getvar()
	{
		return *var;
	}
};

int main()
{
	A ob1(10);
	A ob2 = ob1;

	cout<<"Before changing:"<<ob1.getvar()<<endl;
	cout<<ob2.getvar()<<endl;

	ob1.setvar(340);
	cout<<"After changing:"<<ob1.getvar()<<endl;
        cout<<ob2.getvar()<<endl;
}
