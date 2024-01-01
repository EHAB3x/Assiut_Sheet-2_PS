#include <iostream>
using namespace std;

int main(){
    int numberOne, numberTwo, max;
    cin >> numberOne >> numberTwo;

    if (numberOne >= numberTwo)
    {
        for (int i = 1; i <= numberOne; i++)
        {
            if (numberOne % i == 0 && numberTwo % i == 0)
            {
                max = i;
            }     
        }
    }else{
        for (int i = 1; i <= numberTwo; i++)
        {
            if (numberOne % i == 0 && numberTwo % i == 0)
            {
                max = i;
            }     
        }
    }
    
    cout << max << endl;
    
    
    return 0;
}