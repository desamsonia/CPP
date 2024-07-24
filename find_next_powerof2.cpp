#include<iostream>
#include<cmath>
using namespace std;

int main()
{

	int data;
	cout<<"Enter data:"<<endl;
	cin>>data;

/** Method 1 
	data = data - 1;

	while( data & (data - 1))
	{
		data = data - 1;
	}

	data = data << 1;  **/

/*** Method 2   
        data = data - 1;
	int k = 2;

	while(data = data >> 1)
	{
		k = k << 1;
	}
	cout<<"next power of 2 is:"<<k<<endl;  ***/

/***  Method 3
 	int k = 1;
	while(k<data)
	{
		k = k << 1;
	}
	cout<<"next power of 2 is:"<<k<<endl;   ***/


/** Method 4 
         data = data - 1;
	 int l = log2(data);
	 cout<<l<<endl;
	 l = 1U << l + 1;
	 cout<<"next power of 2 is:"<<l<<endl;  ***/

	// Method 5

	--data;

	data |= data >> 1;
	data |= data >> 2;
	data |= data >> 4;
	data |= data >> 8;
	data |= data >> 16;

	cout<<"next power of 2 is:"<<++data<<endl;
		
	return 0;
}
