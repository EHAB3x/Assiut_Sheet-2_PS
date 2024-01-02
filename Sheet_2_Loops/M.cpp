#include <iostream>
#include <string>
using namespace std;


bool isLucky(int num){
    while (num > 0)
    {
        int digit = num % 10;
        if(digit != 4 && digit != 7){
            return false;
        }
        num /= 10;
    }
    
    return true;
}

int main(){
    int numberOne, numberTwo;
    bool found = false;
    cin >> numberOne >> numberTwo;
    for (int i = numberOne; i <= numberTwo; i++)
    {
        if (isLucky(i))
        {
            cout << i << " ";
            found = true;
        }
    }
    if (!found)
    {
        cout << -1 << endl;
    }
    
    
    return 0;
}
