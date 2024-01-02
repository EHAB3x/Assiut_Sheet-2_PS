#include <iostream>
using namespace std;

int main(){
    int number , max = 0;
    cin >> number;
    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
        max = arr[0];
    }
    for (int i = 0; i < number; i++)
    {
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}
