#include <iostream>
#include <vector>
using namespace std;

vector<int> PairSum(vector<int>nums,int target)
{
    vector<int> ans ;
    int n = nums.size();
    int i = 0,j=n-1 ;
    while (i<j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }
        else if (pairsum < target)
        {
            /* code */
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