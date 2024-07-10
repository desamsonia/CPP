#include<iostream>
using namespace std;

#include"Mother.cpp"
#include"Child1.cpp"
#include"Child2.cpp"
#include"Child3.cpp"

int main()
{
	int choice;
	Mother *ptr=NULL;
	cout<<"1.Child1\n2.Child2\n3.Child3\n4.exit"<<endl;
	cout<<"Enter your choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: ptr = new Child1;
			break;
		case 2: ptr = new Child2;
		        break;
		case 3: ptr = new Child3;
		        break;
		case 4: exit(0);
	}

       if(ptr)
       {
          ptr->whomi();
          ptr->profession();
          ptr->qualification();
          ptr->hobby();
       }
}       
