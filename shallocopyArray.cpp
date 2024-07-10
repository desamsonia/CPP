#include<iostream>
using namespace std;

class Array
{
	int *ptr,size;
	public:

	Array()
	{
		cout<<"Enter size:"<<endl;
		cin>>size;
		ptr = new int[size];
		for(int i=0;i<size;i++)
			cin>>ptr[i];
	}

	Array(int *p,int s)
	{
		size=s;
		ptr = new int[size];
		for(int i=0;i<size;i++)
			ptr[i]=p[i];
	}

	void print()
	{
		for(int i=0;i<size;i++)
			cout<<ptr[i]<<" ";
		cout<<endl;
	}

	void sort()
	{
		int temp;
		for(int i=0;i<size-1;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if(ptr[i]>ptr[j])
				{
					temp=ptr[i];
					ptr[i]=ptr[j];
					ptr[j]=temp;
				}
			}
		}
	}


	void reverse()
	{
		int temp;
		for(int i=0,j=size-1;j>i;i++,j--)
		{
			temp=ptr[i];
			ptr[i]=ptr[j];
			ptr[j]=temp;
		}
	}

/*	~Array()
	{
		delete[] ptr;
		cout<<"destructor:";
	}*/
};

int main()
{
	Array A1;
	A1.print();
	Array A2=A1;
	cout<<"A2:"<<endl;
	A2.print();
	A2.reverse();
	A2.print();
	A2.sort();
	A2.print();
	cout<<"A1:"<<endl;
	A1.print();
}
