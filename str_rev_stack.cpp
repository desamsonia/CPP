#include <iostream>
#include <stack>
#include <string>
using namespace std;

/* NOTE: this only works for initialized string only, if we give string at runtime, it will reverse the string before space,after space it won't get reversed
*/

int main()
{
	string str = "Rajendra Prasad Reddy";
	stack<int> s;

	cout<<"string is:"<<str<<endl;
	for(char ch: str)
	{
		s.push(ch);
	}

	for(int i=0;i<str.length();i++)
	{
		str[i] = s.top();
		s.pop();
	}

	cout<<"reversed string is:"<<str<<endl;
	return 0;
} 
