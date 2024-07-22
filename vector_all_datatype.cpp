#include<iostream>
#include<vector>
#include<string>
using namespace std;

int randomInt(int start, int range)
{
	return ( start + rand()%range);
}

string randomString(int len)
{
	string str;
	for(int i=0;i<len;i++)
	{
		char ch = 'A' + rand()%26;
		str.push_back(ch);
	}
	return str;
}

class Student
{
   int roll;
   string name;
   int age;
   int marks;
   public:
     void getter()
     {
	     roll = randomInt(100,50);
	     name = randomString(10);
	     age = randomInt(10,10);
	     marks = randomInt(200,300);
     }

     void disp()
     {
	     cout<< roll<<"\t"<< name << "\t" << age << "\t" << marks<<"\n";
     }
};

int main()
{
	vector <Student> V;
	Student s;
	for(int i=0;i<10;i++)
	{
		s.getter();
		V.push_back(s);
	}
	for(int i=0;i<10;i++)
	{
		V[i].disp();
	}
	return 0;
}
