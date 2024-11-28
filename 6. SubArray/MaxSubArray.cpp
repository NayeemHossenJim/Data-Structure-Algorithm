#include <iostream>
using namespace std ;
int main ()
{
    int n = 5 ;
    int arr[5]={1,2,3,4,5};

    int maxSum = INT_MIN ;
    for (int start = 0; start < n; start++)
    {
        int curSum = 0 ;
        for (int end = start; end < n; end++)
        {
            curSum += arr[end] ;
            maxSum = max(curSum,maxSum);
        }
    }
    cout << "Maximum : "<< maxSum ;
    return 0;
}