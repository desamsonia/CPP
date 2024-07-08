#include<iostream>
#include<string>
using namespace std;

int main()
{
	char *ch;
	ch = new char;

	cout<<"Enter char:"<<endl;
	cin >> *ch;

	string *str;
	str = new string;

	cout<<"Enter string:"<<endl;
	cin.ignore();
	getline(cin, *str);

	cout<<"char:"<<*ch<<endl;
	cout<<"string:"<<*str<<endl;
	return 0;
}
