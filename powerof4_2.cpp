#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	unsigned int n = 256;
	double i = log(n)/log(4);

	cout<<i<<endl;

	if(i == trunc(i))
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
