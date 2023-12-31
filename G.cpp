#include <iostream>
using namespace std;

int main(){
    long long number , test, total = 1;
    cin >> number;

    for (int i = 1; i <=  number; i++)
    {
        total = 1;
        cin >> test;
        if (test == 0)
        {
            total = 1;
        }else{
            for (int j = 1; j <= test; j++)
            {
                total *= j;
            }
        }
        cout << total << endl;  
    }
    return 0; 
}