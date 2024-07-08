#include<iostream>
using namespace std;

class king
{
	public: 
		void print()
		{
			cout<<"HII"<<endl;
		}
};

int main()
{
	king *obj_arr;
	obj_arr = new king[5];

	for(int i=0;i<5;i++)
		obj_arr[i].print();

	delete [] obj_arr;
}
