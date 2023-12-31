#include <iostream>
using namespace std;

int main(){
    long long number;
    int count = 0;
    cin >> number;
    if (number == 1){
        cout << "NO" << endl;
    }else if(number != 1 ){
        for (int  i = 1; i <= number; i++)
        {
            if(number % i == 0){
                count++;
            }
        }
    }
    if (count == 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}