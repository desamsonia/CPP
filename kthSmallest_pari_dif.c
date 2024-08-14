/*Input: nums = [1,3,1], k = 1
Output: 0
Explanation: Here are all the pairs:
(1,3) -> 2
(1,1) -> 0
(3,1) -> 2
Then the 1st smallest distance pair is (1,1), and its distance is 0.
*/

class Solution {
public:

bool ok(int mid, vector<int> &a,int &k)
{
    int n = a.size();
    int j=1,total=0;
    for(int i=0;i<n;i++)
    {
        while(j<n && a[j]-a[i]<=mid) 
        j++;
        j--;
        int x = (j-i);
        total +=x;
    }
    return (total>=k);
}
    int smallestDistancePair(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int dif = nums[n-1]-nums[0];
        int l=0,r=dif;
        while(l<r)
        {
            int mid = (l+r)/2;
            if(ok(mid,nums,k))
            r=mid;
            else
            l=mid+1;
        }
        return l;  
    }
};

int main()
{
}
