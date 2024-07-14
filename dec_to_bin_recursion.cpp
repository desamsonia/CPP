#include<iostream>
#include<string>
using namespace std;

string tobin(unsigned int data)
{
	if(data == 0)
		return "";

	return tobin(data/2) + to_string(data % 2);
}

int main()
{
	int data;
	cout<<"Enter data:"<<endl;
	cin>>data;

	cout<<"Binary representation is:"<<tobin(data)<<endl;
	return 0;
}
