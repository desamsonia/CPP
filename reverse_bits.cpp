#include<iostream>
#include<cmath>
#include<bitset>
using namespace std;

int main()
{
	int data,pos;
	cout<<"Enter data:"<<endl;
	cin>>data;
	int rev = 0;

	cout<<"in binary:"<< bitset<32>(data)<<endl;
	while(data)
	{
		 pos = log2(data & (-data)) + 1;// find position of rightmost set bit
		 rev = (rev | (1 << (32 - pos))); // set bit
		 data = data & (data -1);// unset rightmost set bit
	}

       	cout<<"in binary:"<<bitset<32> ( rev)<<endl;
	return 0;
}
