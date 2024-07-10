#include<iostream>
using namespace std;

class B
{
	public:
		virtual void display()
		{
			cout<<"in base class\n"<<endl;
		}
};

class D1 : public B
{
	public:
		void display()
		{
			cout<<"in d1\n"<<endl;
		}
};

class D2 : public B
{
	public:
		void display()
		{
			cout<<"in d2\n"<<endl;
		}
};

int main()
{
	B *base_ptr;
	D1 der1;
        B b1;
	base_ptr = &der1;
	base_ptr -> display();

	D2 der2;
	base_ptr = &der2;
	base_ptr -> display();
        
	//base_ptr->display();
	return 0;
}
