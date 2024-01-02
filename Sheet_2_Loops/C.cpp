#include <iostream>
using namespace std;

int main(){
    int number,Pcount = 0,Ncount = 0,Ecount = 0,Ocount = 0;
    cin >> number;
    int arr[number];
    for (int i = 0; i < number; i++){
        cin >> arr[i];
        if(arr[i] % 2 == 0){
            Ecount++;
            
        }else if(arr[i] % 2 != 0){
            Ocount++;
            
        }
        if(arr[i] > 0){
                Pcount++;
        }else if(arr[i] < 0){
                Ncount++;
        }
    }
    cout << "Even: " << Ecount << endl;
    cout << "Odd: " << Ocount << endl;
    cout << "Positive: " << Pcount << endl;
    cout << "Negative: " << Ncount << endl;
}
