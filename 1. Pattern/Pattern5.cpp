#include "iostream"
using namespace std ;
int main ()
{
    int n ;
    cout << "Please Enter How many Line You Want: ";
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j <n; j++)
        {
            if (i>=j)
            {
                cout << char (ch+i-j) ;
            }
        }
        cout << endl ;
    }
    return 0 ;
}