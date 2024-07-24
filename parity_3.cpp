#include <iostream>
#include <bitset>
using namespace std;
 
// Compute parity of a number `x` using the lookup table
int findParity(int x)
{
    // recursively divide the (32–bit) integer into two equal
    // halves and take their XOR until only 1 bit is left
 
    x ^= x >> 16;
    cout<<"x16 in binary:"<< bitset<16>(x) << endl;
    x ^= x >> 8;
    cout<<"x8 in binary:"<< bitset<16>(x) << endl;
    x ^= x >> 4;
    cout<<"x4 in binary:"<< bitset<16>(x) << endl;
    x ^= x >> 2;
    cout<<"x2 in binary:"<< bitset<16>(x) << endl;
    x ^= x >> 1;
    cout<<"x1 in binary:"<< bitset<16>(x) << endl; 
    // return 1 if the last bit is set; otherwise, return 0
    return x & 1;
}
 
int main()
{
    int x = 15;

    cout << x << " in binary is " << bitset<8>(x) << endl;
    if (findParity(x)) {
        cout << x << " contains odd bits";
    }
    else {
        cout << x << " contains even bits";
    }
 
    return 0;
}
