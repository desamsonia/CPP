#include<iostream>
using namespace std;

int main()
{
	unsigned n = 4096;

	if( n && !(n & (n-1)) && !(n & 0xEEEEEEEE))
		cout<<"Yes"<<endl;
	else
		cout<<"NOT"<<endl;
	return 0;
}
