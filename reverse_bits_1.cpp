#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int data;
	cout<<"Enter data:"<<endl;
	cin>>data;

	int rev = 0;
	int pos = 31;

	cout<<"in binary:"<<bitset <32>(data)<<endl;
	while(pos >= 0 && data)
	{
		if(data & 1)
		{
			rev = rev | (1 << pos);
		}

		data = data >> 1; // divide by 2
		pos--;
	}

	cout<<"in binary:"<< bitset<32>(rev)<<endl;

	return 0;
}
