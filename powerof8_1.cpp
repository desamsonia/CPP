#include<iostream>
using namespace std;

int main()
{
	unsigned n = 512;

	if( n && !(n & (n-1)) && !(n & 0xB6DB6DB6))
		cout<<"Yes"<<endl;
	else
		cout<<"NOT"<<endl;
	return 0;
}
