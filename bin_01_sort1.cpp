// count total zero and fill with 0's, remaining pos fill with 1's
#include<iostream>
using namespace std;

int main()
{
	int arr[8] = {1,0,1,0,1,0,1,1};
	int i,cnt,s;
	cnt=0;

	for(i=0;i<8;i++)
	{
		if(arr[i] == 0)
			cnt++;
	}

	s=0;
	while(cnt--)
	{
		arr[s] = 0;
		s++;
	}

	for(i=s;i<8;i++)
		arr[i] = 1;

	for(i=0;i<8;i++)
		printf("%d ",arr[i]);
}

