#include <iostream>
using namespace std;

int main(){
    int number, testCase;
    cin >> number;
    for (int i = 0; i < number; i++)
    {
        cin >> testCase;
        if (testCase == 0){
            cout << 0;
        }
        while (testCase > 0){
            int digit = testCase % 10;
            testCase /= 10;
            cout << digit << " ";
        }
        cout << "" <<endl;
    } 
    return 0;
}