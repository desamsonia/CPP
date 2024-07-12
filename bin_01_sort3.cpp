// take pivot as 1 then check if pivot is greater than 0

#include<iostream>
using namespace std;

int main()
{
	int arr[8] = {1,0,1,0,1,0,0,1};
	int i,j=0,t;
	int pivot = 1;

	for(i=0;i<8;i++)
	{
		if(arr[i] < pivot)
		{
		        t = arr[i];
			arr[i] = arr[j];
			arr[j] = t;
			j++;
		}
	}

	for(i=0;i<8;i++)
		cout<<arr[i]<<" ";
	return 0;
}
