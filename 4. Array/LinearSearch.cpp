#include <iostream>
using namespace std ;

void LinearSearch(int arr[],int key,int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==key)
        {
            cout << "Key Found" ;
            break;
        }
    }
}

int main ()
{
    int arr[] = {1,8,9,7,6};
    int size = sizeof(arr)/sizeof(int);
    int key = 7 ;
    LinearSearch(arr,key,size) ;
    return 0 ;
}