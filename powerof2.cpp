#include<iostream>
#include<bitset>
using namespace std;

int isPowOf2(int n)
{
	cout<<"n in binary is:"<<bitset<16>(n) <<endl;
	cout<<"n-1 in binary is:"<<bitset<16>(n-1) << endl;

	return !(n&(n-1));
}

int main()
{
	int n;
	cout<<"Enter data:"<<endl;
	cin>>n;

	if(isPowOf2(n))
		cout<<n<<"is pow of two"<<endl;
	else
		cout<<n<<"is not pow of two"<<endl;
	return 0;
}
