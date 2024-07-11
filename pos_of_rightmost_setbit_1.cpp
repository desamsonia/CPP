
#include<iostream>
#include<bitset>
#include<math.h>
using namespace std;


int pos(int n)
{
	cout<<"n in binary is:"<<bitset <16>(n) <<endl;
	cout<<"-n in binary is:"<<bitset <16>(-n) <<endl;

	if(n & 1)
		return 1;

	n = n & -n;
	cout<<" n & -n in binary is:"<<bitset <16>(n)<<endl;
	cout<<"n_:"<<n<<endl;
	return log2(n)+1;
}

int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;

	cout<<"position of rightmost set bit is:"<<pos(n)<<endl;
	return 0;
}
