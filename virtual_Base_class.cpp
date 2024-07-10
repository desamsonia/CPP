#include<iostream>
using namespace std;

class B
{
	protected:
		int b_data;
	public :
		void get_b(int b)
		{
			cout<<"from base class..."<<endl;
			b_data = b;
		}

		void display_b()
		{
			cout<<"base class data:"<<b_data<<endl;
		}
};

class D1 : virtual public B
{
	protected:
		int d1_data;
	public:
		void get_d1(int d1)
		{
			cout<<"from derived class1..."<<endl;
			d1_data = d1;
		}
		void display_d1()
		{
			cout<<"Derived class1 data:"<<d1_data<<endl;
		}
};

class D2 : virtual public B
{
       protected:
                int d2_data;
        public:
                void get_d2(int d2)
                {
                        cout<<"from derived class2..."<<endl;
                        d2_data = d2;
                }
                void display_d2()
                {
                        cout<<"Derived class2 data:"<<d2_data<<endl;
                }
};

class D3 : public D1,public D2
{
	//public:
		int d3_data;
	public:
		void get_d3(int d3)
		{
			cout<<"from derived class3..."<<endl;
			d3_data = d3;
		}
		void display_d3()
		{
			cout<<"Derived class3 data:"<<d3_data<<endl;
		}
};

int main()
{
	D3 der;
	der.get_b(10);
	der.display_b();

	der.get_d1(20);
	der.display_d1();

	der.get_d2(30);
	der.display_d2();

	der.get_d3(40);
	der.display_d3();
}
