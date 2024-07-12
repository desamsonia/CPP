#include<iostream>
using namespace std;

int main()
{
//	int arr[8] = {12,1,34,6,7,10,22,21};
	int l=0,r=8-1;
        //int arr[7] = {12, 34, 45, 9, 8, 90, 3};
	int arr[8] = { 12, 10, 9, 45, 2, 10, 10, 45 };
	while(l<r)
	{
		while(arr[l] % 2 == 0 && l<r)
			l++;
		while(arr[r] % 2 == 1 && l<r)
			r--;

		int t= arr[l];
		arr[l] = arr[r];
		arr[r] = t;
		l++,r--;
	}

	for(int i=0;i<8;i++)
		cout<<arr[i]<< "  ";
}
