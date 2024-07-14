/*** Input: n = 15 -> 00001111
 * p = 2, q = 5 ->3rd and 6th bit from the right
 * b = 2 (Total number of consecutive bits in each sequence) 
 * Output: 99 -> 01100011
 ***/

#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	int n = 15;
	int p1 = 0,p2 = 5;
	int b = 2;

	int x = (n >> p1) ^ (n >> p2);
	cout<<"x__1:"<<bitset<8> (x)<<endl;

	x = x & (( 1 << b)) - 1;
	cout<<"x__2:"<<bitset<8> (x)<<endl;

	n = n ^ ((x << p1) | (x << p2));

	cout<<"n:after swap:"<<bitset<8>(n)<<endl;
	return 0;
}
