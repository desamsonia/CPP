#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n = 127;

/** M1
	while(n & n-1)
	{
		n = n & n-1;
	}
	cout<<n; **/

/** M2	int k = 1;
	while( n = n >> 1)
	{
		k = k << 1;
	}
	cout<<k; **/

/** M3	cout<< (1U << (int)log2(n)); **/

/** M4  **/
    n = n | (n >> 1);
    n = n | (n >> 2);
    n = n | (n >> 4);
    n = n | (n >> 8);
    n = n | (n >> 16);

    cout<< n - (n >> 1);
	return 0;
}
