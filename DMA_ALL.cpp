#include<iostream>
using namespace std;

int main()
{
    /* integer */
	int *d_int;
	d_int = new int;
	*d_int = 10;
    
    /* character */
	char *d_ch;
	d_ch = new char;
	*d_ch = 'R';
   
   /* string */
	string *d_str;
	d_str = new string;
	*d_str = "raji";

	cout<<"DMA_int:"<< *d_int<<endl;
	cout<<"DMA_char:"<< *d_ch<<endl;
	cout<<"DMA_string:"<< *d_str<<endl;

   /* array of integers */
    int *arr;
   arr = new int[10];

   for(int i=0;i<10;i++)
	  arr[i] = i+1;

   cout<<"DMA_array:" << endl;
   for(int i=0; i< 10;i++)
	   cout<< arr[i] << " ";

   /* DMA array of strings */
    string *str;
    str = new string[10];

    for(int i=0;i<10;i++)
	    str[i] = "Element-" + to_string(i+1);

    cout<<endl;
    cout<<"DMA_array of string"<< endl;
    for(int i=0;i<10;i++)
	    cout<< str[i] << " ";
    
    /* DMA 2D_array */

   float **farr;
    farr = new float *[3];

   for(int i=0;i<3;i++)
	  farr[i] = new float[4];

    float v = 2.3;

   for(int i=0;i<3;i++)
   {
	  for(int j=0;j<4;j++)
	  {
		 farr[i][j] = v;
		 v=v+1.0;
	  }
   }

   cout<<"float of 2D array"<<endl;
   for(int i=0; i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   cout<< farr[i][j]<< " ";
	   }
	   cout<<endl;
   }
 
   /* 2D array of string */

   string **str1;
   str1 = new string *[3];

   for(int i=0;i<3;i++)
	   str1[i] = new string[4];

   string e = "R";
   for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   str1[i][j] = e;
		   e[0] = e[0] +1;
	   }
   }

   cout<<"2D array of string:"<<endl;
   for(int i=0;i<3;i++)
   {
	   for(int j=0;j<4;j++)
	   {
		   cout<<str1[i][j]<< " ";
	   }
	   cout<<endl;
   }
	
}
