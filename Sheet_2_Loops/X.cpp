#include <iostream>
#include<cmath>
using namespace std;

int main() {
    long long number, convert, sum=1,inc = 0;
    cin >> number;

    for (int i = 0; i < number; i++) {
        cin >> convert;
        sum = 0;
        inc= 0;
        while (convert > 0) {
            int digit = convert % 2;
            convert /= 2;
            if (digit == 1){
                    digit = pow(2,inc);
                    sum += digit;
                    inc++;
            }  
        }
        cout << sum <<endl;
    }

    return 0;
}
