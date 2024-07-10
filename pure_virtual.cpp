#include<iostream>
using namespace std;

class shape
{
	public: 
		virtual void get_data() = 0;
		virtual void area() = 0;
};

class rect : public shape
{
	private :
		float len;
		float bre;
	public:

		void get_data()
		{
			cout<<"Enter length:"<<endl;
			cin>>len;
			cout<<"Enter breadth:"<<endl;
			cin>>bre;
		}

		void area()
		{
			cout<<"area of rectngle:"<<len*bre<<endl;
		}
};

class cir:public shape
{
	private :
		int r;
	public:
		void get_data()
		{
			cout<<"Enter radius:"<<endl;
			cin>>r;
		}
		
		void area()
		{
			cout<<"radius:"<<3.14*r*r<<endl;
		}
};

int main()
{
	shape *ptr;

	rect r1;
	ptr = &r1;
	cout<<"Rectangle:"<<endl;
	ptr->get_data();
	ptr->area();

	cout<<"circle:"<<endl;
	cir c1;
	ptr = &c1;
	ptr->get_data();
	ptr->area();
}
