
#include <iostream>
#include <vector>
using namespace std ;

int singleNumber(vector<int>& nums) 
{
    int soln = 0 ;
    for(int ans: nums)
    {
        soln ^= ans ;
    }
    return soln ;
}

int main ()
{
    vector<int>nums = {1,2,4,1,4};
    cout << singleNumber(nums);
    return 0;
}