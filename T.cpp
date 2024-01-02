#include <iostream>
using namespace std;

int main(){
    int number;
    cin >> number;
    int spaces = number;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 0; j < (spaces - 1); j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (i * 2) - 1; k++)
        {
            cout << "*";
        }
        spaces -= 1;
        cout << "" <<endl;
    }
    
    return 0;
}