//determine if two integers equal or not without using relational operators and arithmetic operators
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter a:"<<endl;
	cin>>a;
	cout<<"Enter b:"<<endl;
	cin>>b;

   /* Method 1 -> XOR
	if(!(a ^ b))
		cout<<"Equal !!"<<endl;
	else cout<<"Not Equal !!"<<endl; */
   
	
  /* Method 2 -> -  */
	if(!(a -b)) //using arithmetic and without using relational operators
		cout<<"Equal !!"<<endl;
	else   cout<<"Not Equal !!"<<endl;

	return 0;
}
