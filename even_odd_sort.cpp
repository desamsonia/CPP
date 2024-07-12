#include<iostream>
using namespace std;

int main()
{
	int arr[7] = {12, 34, 45, 9, 8, 90, 3}; 
	int i,j=-1;

	for(i=0;i<7;i++)
	{
		if( arr[i] % 2 == 0)
		{
			j++;
			int t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
		}
	}
	
	for(i=0;i<7;i++)
		cout<<arr[i]<<" ";

	return 0;
}

