#include<iostream>
using namespace std;

int main()
{
	int n,c=0;
	cout<<"Enter n:"<<endl;
	cin>>n;

	while(n)
	{
		n = n & (n-1);
		c++;
	}
	cout<<"no of set bits:"<<c<<endl;
	return 0;
}
