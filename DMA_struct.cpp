#include<iostream>
using namespace std;

struct mystruct
{
	string name;
	string country;
	int id;
};

int main()
{
	mystruct *s1;
	s1 = new mystruct;

	cout<<"EMP_id"<<endl;
	cin >> s1->id;

	cout<<"EMP_name"<<endl;
	cin.ignore();
	getline(cin,s1->name);

	cout<<"EMP_country"<<endl;
	//cin.ignore();not required
	getline(cin,s1->country);


	cout<<"EMP ID:"<<s1->id<<endl;
	cout<<"EMP name:"<<s1->name<<endl;
	cout<<"EMP countru:"<<s1->country<<endl;

	delete s1;
}
