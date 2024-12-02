#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int MajorityElement(vector<int>nums)
{
    int n =nums.size();
    int freq = 1 ,ans = nums[0];
    sort(nums.begin(),nums.end()) ;
    for (int i = 0; i < n; i++)
    {
        if (nums[i]==nums[i-1])
        {
            freq++;
        }
        else
        {
            freq=1;
            ans = nums[i] ;
        }
        if (freq>n/2)
        {
            return ans ;
        }
        
    }
    return ans ;
}

int main()
{
    vector<int>nums = {3,2,3} ;
    cout << MajorityElement(nums);
    return 0;
}