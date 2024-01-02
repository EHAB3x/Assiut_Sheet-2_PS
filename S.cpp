#include <iostream>
using namespace std;

int main(){
    int testCases, numberOne, numberTwo,sum = 0;
    cin >> testCases;

    for (int i = 0; i < testCases; i++)
    {
        sum =0;
        cin >> numberOne >> numberTwo;
        if (numberOne > numberTwo)
        {
            for (int j = numberTwo + 1; j < numberOne; j++)
            {
                if(j % 2 != 0){
                    sum += j;
                }
            }
            
        }else{
            for (int j = numberOne + 1; j < numberTwo; j++)
            {
                if(j % 2 != 0){
                    sum += j;
                }
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}