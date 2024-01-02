#include <iostream>

using namespace std;

int main(){
    int number;
    cin >> number;
    if(number <= 1){
        cout << -1<<endl;
    }else if(number > 1){
        for (int i = 1; i <= number; i++)
        {
            if(i%2 == 0){
                cout << i << endl;
            }
        }  
    }
    return 0;
}
