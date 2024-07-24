#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;

	cout<<"Total no of set bit counts:"<<__builtin_popcount(n)<<endl;
	return 0;
}
