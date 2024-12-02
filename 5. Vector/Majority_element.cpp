#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int>nums)
{
    int n = nums.size();
    for (int val : nums)
    {
        int frequen = 0 ;
        for(int el : nums)
        {
            if (el == val)
            {
                frequen++ ;
            }
        }
        if (frequen>n/2)
        {
            return val ;
        }
    }
return -1 ;
}

int main()
{
    vector<int>nums = {3,2,3} ;
    cout << MajorityElement(nums);
    return 0;
}