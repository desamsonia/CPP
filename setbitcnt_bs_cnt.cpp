#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;

	bitset<32> bs(n);
	cout<<"set bit count:"<<bs.count()<<endl;
	return 0;
}
