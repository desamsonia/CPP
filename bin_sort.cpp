#include<iostream>
using namespace std;

int main()
{
	int arr[8] = {1,0,1,0,1,0,0,1};
	int i,j;
	for(i=0;i<8;i++)
	{
		for(j=i+1;j<8;j++)
		{
			if(arr[i] > arr[j])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}
	}

	for(int i=0;i<8;i++)
		printf("%d ",arr[i]);
	return 0;
}
