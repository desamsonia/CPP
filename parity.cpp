#include<iostream>
#include<bitset>

using namespace std;

bool parity(int n)
{
	bool parity = false;

	while(n)
	{
		if( n & 1)
			parity = !parity;
		n = n >> 1;
	}

	return parity;
}


int main()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin>>n;

        cout<<n<<" binary is:"<<bitset <16>(n)<<endl;
	if(parity(n))
		cout<<n<<" parity of bits is odd:"<<endl;
	else
		cout<<n<<" parity of bits is even:"<<endl;
}
