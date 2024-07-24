#include<iostream>
using namespace std;

int main()
{
	//find alphabet position, letters case not important
	char ch = 'r';
        int pos = ch & 31;
	int pos1 = ch & 0x1F;
	//int pos2 = ch & \x1F;
	cout<<"position:"<<pos<<endl;
	cout<<"position1:"<<pos1<<endl;

	//get letters position for upper case only
	char c2 = 'Z';
	int p= c2 & '?'; /// or c2 & '@'
	cout<<"p:"<<p<<endl;

	//get letters position for lower case only
	char c3 = 'z';
	int p1 = c3 ^ '`';
	cout<<"p1:"<<p1<<endl;

	// upper to lower
	for(char c = 'A' ; c <= 'Z'; c++)
		cout<<char (c | ' ')<<" ";

	cout<<endl;

	//lower to upper
	for(char c1 = 'a'; c1 <= 'z'; c1++)
		cout<<char (c1 & '_')<<" ";// always reutuns upper, even character is upper case ,c1 = A
}
