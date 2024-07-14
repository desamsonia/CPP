#include<iostream>
using namespace std;

int prime(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int arr[7] = {12, 34, 5, 11, 8, 90, 3}; 
	int i,j=-1;

	for(i=0;i<7;i++)
	{
		if(prime(arr[i]))
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

