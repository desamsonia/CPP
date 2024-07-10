#include<iostream>
using namespace std;

class Array
{
	int *ptr,s;
	public:
	Array()
	{
	        cout<<"Enter elements:";
		cin>>s;
		ptr = new int[s];
		cout<<"Enter elements:";
		for(int i=0;i<s;i++)
			cin>>ptr[i];
	}

	Array(int *p,int size)
        {
		s = size;
		for(int i=0;i<s;i++)
			ptr[i] = p[i];
	}

	void print()
	{
		for(int i=0;i<s;i++)
			cout<<ptr[i];
	}

	void reverse()
	{
		int t,i,j;
		for(i=0,j=s-1;j>=i;i++,j--)
		{
			t=ptr[i];
			ptr[i]=ptr[j];
			ptr[j] = t;
		}
	}
};

int main()
{
	Array A1;
	A1.print();
	A1.reverse();
	A1.print();
	Array A2 = A1;
	A2.print();
}
