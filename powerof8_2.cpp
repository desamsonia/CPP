#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	unsigned int n = 512;
	double i = log(n)/log(8);

	cout<<i<<endl;

	if(i - trunc(i) < 0.000001)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	return 0;
}
