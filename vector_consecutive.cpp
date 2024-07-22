#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool test(vector<int> nums)
{
	sort(nums.begin(),nums.end());

	for(int x :nums)
		cout<<x<<" ";

	cout<<endl;
	for(int i=0;i<nums.size()-1;i++)
	{
		if(nums[i+1] != nums[i] + 1)
			return false;
	}
	return true;
}

int main()
{
	vector<int> nums = {1,2,5,4,3,6,7};
        bool t;
	t = test(nums);

	if(t)	cout<<"Yes,consecutive\n";
	else	cout<<"Not,consecutive\n";

	return 0;
}
