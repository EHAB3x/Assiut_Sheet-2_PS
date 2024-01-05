#include <iostream>
using namespace std;

int main(){
    int number , div1, div2, total = 0 , sum =0;
    cin >> number >> div1 >> div2;
    for (int i = 1; i <= number; i++)
    {
        total = 0;
        int fullNumber = i;
        while(fullNumber > 0){
            int digit = fullNumber % 10; 
            total+= digit;
            fullNumber/=10;
        }
        if(total >= div1 && total <= div2){
            sum += i;
        }
    }
            cout << sum << endl;
    return 0;
}