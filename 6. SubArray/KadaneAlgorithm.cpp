#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int>& nums) {
        int currSum = 0 , maxSum = INT_MIN ;

        for(int val : nums)
        {
            currSum += val ;
            maxSum = max(currSum , maxSum);

            if(currSum < 0)
            {
                currSum = 0 ;
            }
        }
    return maxSum ;
    }

int main()
{
    vector<int>nums = {1,2,-7,4,8,9} ;
    cout << maxSubArray(nums);
    return 0;
}