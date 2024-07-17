#include<iostream>
#include<bitset>
#include<string>
using namespace std;

int main()
{
	int n,i;
	cout<<"Enter range(1 to n):"<<endl;
	cin>>n;

	for(i=1;i<=n;i++)
	{
		cout<<bitset<8>(i)<<endl;
		// bitset<8> bin(i); 
		//cout<< bin.to_string()<<endl; to convert into string
	}
	return 0;
}
