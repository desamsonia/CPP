#include<iostream>
using namespace std;

template<class T>
T maxN(T x, T y)
{
	return (x>y) ? x:y;
}

int main()
{
	int n1 = 10, n2 = 20;
	float f1 = 14.67, f2 = 67.10;
	char ch1 = 'R' , ch2 = 'S';
	string s1 = "pandi",s2 = "dunna";

        int r1 = maxN(n1,n2);
        cout<<"max_i ="<<r1<<endl;

	float r2 = maxN(f1,f2);
	cout<<"max_f ="<<r2<<endl;

	char r3 = maxN(ch1,ch2);
	cout<<"max_ch ="<<r3<<endl;

	string r4 = maxN(s1,s2);
	cout<<"max_str ="<<r4<<endl;

}
