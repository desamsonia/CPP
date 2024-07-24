#include<iostream>
using namespace std;

int main()
{
	int data;
	cout<<"Enter data:"<<endl;
	cin>>data;

	if( data & ( data >> 1))
		cout<<"Yes,adjecent pair"<<endl;
	else
		cout<<"No,adjecent pair"<<endl;
	return 0;
}
