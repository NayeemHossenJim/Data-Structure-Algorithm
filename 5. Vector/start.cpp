#include <iostream>
#include <vector>
using namespace std ;
int main ()
{
    vector<int>vec ={1,2,3,4};
    vec.push_back(40);
    vec.pop_back();
    vec.at(2)=10;
    for (int val: vec)
    {
        cout << val << endl ;
    }
    
    return 0;
}