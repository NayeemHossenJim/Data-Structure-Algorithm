#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int>nums,int target)
{
    vector<int> ans ;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (nums[i]+nums[j] == target)
            {
                ans.push_back(i);
                ans.push_back(j);
            }
        }
    }
    return ans ;
}

int main()
{
    vector<int>nums = {1,2,4,8,9} ;
    int target = 5 ;
    vector<int>ans = PairSum(nums,target);
    cout << ans[0] << " " << ans[1] ;
    return 0;
}