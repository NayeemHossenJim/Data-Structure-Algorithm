#include <iostream>
#include <vector>
using namespace std;

int MajorityElement(vector<int>nums)
{
    sort(nums.begin(),nums.end()) ;
}

int main()
{
    vector<int>nums = {3,2,3} ;
    cout << MajorityElement(nums);
    return 0;
}