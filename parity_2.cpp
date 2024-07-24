#include<iostream>
#include<bitset>
using namespace std;


int findParity(int x)
{
	x = ((x & 0x0000FFFF) ^ ( x >> 16));
	cout<<"x16 in binary:"<< bitset<16>(x) << endl;

	x = ((x & 0x000000FF) ^ ( x >> 8));
	cout<<"x8 in binary:"<< bitset<8>(x) << endl;

	x = ((x & 0x0000000F) ^ ( x >> 4));
	cout<<"x4 in binary:"<< bitset<4>(x) << endl;

	x = ((x & 0x00000003) ^ ( x >> 2));
	cout<<"x2 in binary:"<< bitset<4>(x) << endl;

	x = ((x & 0x00000001) ^ ( x >> 1));
	cout<<"x1 in binary:"<< bitset<4>(x) << endl;

        return x & 1;
}

int main()
{
	int x = 15;
	cout << x << " in binary is " << bitset<8>(x) << endl;

         if(findParity(x)) 
            cout << x << " contains odd bits";
    
        else 
            cout << x << " contains even bits";
    return 0;
}


