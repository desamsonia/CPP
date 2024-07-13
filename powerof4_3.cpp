#include<iostream>
using namespace std;

int main()
{
	unsigned int n = 4;

	if(! (n&n-1) && (n%3 == 1))  // 16,15 and 4,3 64,65
	   cout<<"yes"<<endl;
	else 
		cout<<"no"<<endl;
	return 0;
}
