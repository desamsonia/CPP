#include<iostream>
#include <string>
using namespace std;

/* NOTE: this only works for initialized string only, if we give string at runtime, it will reverse the string before space,after space it won't get reversed
*/

void reverse(string &str,int l,int h)
{
	if(l < h)
	{
		swap(str[l],str[h]);
		reverse(str,l+1,h-1);
	}
}

int main()
{
	string str = "sonia reddy desam";
	
	reverse(str,0,str.length()-1);
	cout<<"reverse string:"<<str<<endl;
}
