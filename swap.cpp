#include<iostream>
using namespace std;

typedef struct student
{
	int roll;
	char name[20];
	float per;
}STU;

template <class type>
void Swap(type &a,type &b)
{
	type temp;
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int n1=10,n2=20;
	float f1=45.32,f2=21.2;
	string s1="sonia",s2="reddy";

	STU v1={12,"raji",99.9};
	STU v2={11,"soni",100};


        cout<<"Before:"<<endl;
	cout<<"n1:"<<n1<<" "<<"n2:"<<n2<<endl;
	Swap(n1,n2);
	cout<<"After:"<<endl;
	cout<<"n1:"<<n1<<" "<<"n2:"<<n2<<endl;

	cout<<"Before:"<<endl;
        cout<<"f1:"<<f1<<" "<<"f2:"<<f2<<endl;
        Swap(f1,f2);
        cout<<"After:"<<endl;
        cout<<"f1:"<<f1<<" "<<"f2:"<<f2<<endl;

	cout<<"Before:"<<endl;
        cout<<"s1:"<<s1<<" "<<"s2:"<<s2<<endl;
        Swap(s1,s2);
        cout<<"After:"<<endl;
        cout<<"s1:"<<s1<<" "<<"s2:"<<s2<<endl;

	Swap(v1,v2);
	cout<<"v1.role"<<v1.role<<endl;
	
return 0;
}
