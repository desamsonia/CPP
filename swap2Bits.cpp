#include<iostream>
#include<bitset>
using namespace std;

int swapBits(int data,int p1,int p2)
{
	if( ((data & (1<<p1)) >> p1) ^ ((data & (1<<p2)) >> p2))
	{
		data = data ^ (1<<p1);
		data = data ^ (1<<p2);
	}
	return data;
}
		
int main()
{
	int data,p1,p2;
	cout<<"Enter data:"<<endl;
	cin>>data;

	cout<<"Enter p1:"<<endl;
	cin>>p1;
	cout<<"Enter p2:"<<endl;
	cin>>p2;

	cout<<"Binary form is:"<<bitset<8> (data) << endl;
	data = swapBits(data,p1,p2);

	cout<<"Binary from after swap:"<< bitset<8> (data) << endl;
	return 0;
}
