#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        //spaces
        for (int j = number; j > i; j--)
        {
            cout << " ";
        }
        //stars
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }
            cout <<endl;
    }
    
    for (int i = number; i >= 1 ; i--)
    {
        // spaces
        for (int j = number; j > i; j--)
        {
            cout << " ";
        }
        // stars
        for (int k = 1; k <= (i * 2) - 1; k++)
        {
            cout << "*";
        }
            cout <<endl;
    }
    
    return 0;
}