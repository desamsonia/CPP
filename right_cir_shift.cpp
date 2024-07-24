#include<iostream>
#include<bitset>
using namespace std;

int main()
{
    unsigned n = 127;
    int k = 3;

    cout<<"before shift:"<< bitset<32>(n)<<endl;

    n = (n >> k) | (n << (32 - k));
    cout << "right Shift:" << bitset<32>(n)<<endl;
    return 0;
}
