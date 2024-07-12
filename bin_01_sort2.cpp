// if ele is 0 then we can place 0 from starting index of array

#include<iostream>
using namespace std;

int main()
{
   int arr[8] = {1,0,1,0,1,0,0,1};
   int i,j=0;
   
   for(i=0;i<8;i++)
   {
	   if(arr[i] == 0)
	   {
		   arr[j++] = 0;
	   }
   }

   for(i=j;i<8;i++)
	   arr[j++] = 1;

   for(i=0;i<8;i++)
	   cout<<arr[i] << " ";
   return 0;
}
