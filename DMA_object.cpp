#include<iostream>
using namespace std;

class A
{
	public:
		void print()
		{
			cout<<"hi , i'm from DMA class_object"<<endl;
		}
};

int main()
{
	A *a;
	a=new A;
	a -> print();
	delete a;
}
