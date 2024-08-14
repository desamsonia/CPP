/*Input
["KthLargest", "add", "add", "add", "add", "add"]
[[3, [4, 5, 8, 2]], [3], [5], [10], [9], [4]]
Output
[null, 4, 5, 5, 8, 8]

Explanation
KthLargest kthLargest = new KthLargest(3, [4, 5, 8, 2]);
kthLargest.add(3);   // return 4
kthLargest.add(5);   // return 5
kthLargest.add(10);  // return 5
kthLargest.add(9);   // return 8
kthLargest.add(4);   // return 8
*/

#include <iostream>
#include<vector>
#include<queue>

using namespace std;

class Kthlargest
{
	public:
		priority_queue<int,vector<int>, greater<int>> pq;
		int size;

		Kthlargest(int k, vector<int> nums)
		{

		for(int i=0;i<nums.size();i++)
		{
			pq.push(nums[i]);
			if(pq.size() > k)
			{
				pq.pop();
			}
		}

		}

		int add(int val)
		{
			pq.push(val);

			if(pq.size() > size)
			{
				pq.pop();
			}
                	return pq.top();
		}
};


int main()
{
	vector<int> arr = {4,5,8,2};
	int k=3;
	Kthlargest k1(k,arr);
	int ret = k1.add(10);
	printf("return:%d\n",ret);
	return 0;
}
