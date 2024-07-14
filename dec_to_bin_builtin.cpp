#include<iostream>
#include<bitset>
using namespace std;

bitset<32> tobin(unsigned int data)
{
	return bitset<32>(data);
}

int main()
{
	int data;
	cout<<"Enter data:"<<endl;
	cin>>data;

	cout<<"Binary representation is:"<<tobin(data)<<endl;
	return 0;
}
