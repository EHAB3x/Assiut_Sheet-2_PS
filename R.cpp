#include <iostream>
using namespace std;

int main(){
    int numberOne, numberTwo, sum = 0;
    
    for (; ;)
    {
        sum = 0;
        cin >> numberOne >> numberTwo;
        if (numberOne <= 0 || numberTwo <= 0)
        {
            break;
        }
        if (numberOne >= numberTwo)
        {
            for (int i = numberTwo; i <= numberOne; i++)
            {
                sum += i;
                cout << i << " ";
                if (i == numberOne)
                {
                    cout << "sum =" << sum << endl;
                }   
            }
        }else{
            for (int i = numberOne; i <= numberTwo; i++)
            {
                sum += i;
                cout << i << " ";
                if (i == numberTwo)
                {
                    cout << "sum =" << sum << endl;
                }   
            }
        }
    }
    return 0;
}