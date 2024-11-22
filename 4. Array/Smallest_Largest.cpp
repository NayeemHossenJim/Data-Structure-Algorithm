#include <iostream>
using namespace std ;

int main ()
{
    int nums[] = {4,8,12,9,-74};
    int size = 5;
    int smallest = INT_MAX ;
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
            smallest = min(nums[i],smallest);
            largest = max(nums[i],largest);
    }
    cout << "Smallest : " << smallest << "\n";
    cout << "Largest : " << largest << "\n";
    return 0 ;
}