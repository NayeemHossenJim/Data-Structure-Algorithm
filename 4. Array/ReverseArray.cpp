#include <iostream>
using namespace std ;

void ReverseArray(int arr[],int size)
{
    int start = 0,end = size-1;
    while(start < end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main ()
{
    int arr[] = {1,8,9,7,6};
    int size = sizeof(arr)/sizeof(int);
    ReverseArray(arr,size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    
    return 0 ;
}