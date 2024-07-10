/* pointer to a base class */

#include<iostream>
using namespace std;

class poly
{
	protected:
		int base,width;
	public:
		void set_values(int b,int w)
		{
			base=b,width=w;
		}
};

class rect : public poly
{
	public:
		int area()
		{
			return (base*width);
		}
};

class tri :public poly
{
	public:
		int area()
		{
			return ((width*base)/2);
		}
};

int main()
{
	rect r;
	tri t;

	poly *p1 = &r;
	poly *p2 = &t;

	p1->set_values(3,4);
	p2->set_values(4,5);

	cout<<r.area()<<endl;
	cout<<t.area()<<endl;
	return 0;
}


