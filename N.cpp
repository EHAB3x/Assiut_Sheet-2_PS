#include <iostream>
#include <string>
using namespace std;
int main(){
    string op;
    int lines;
    cin >> op >> lines;

    int arr[lines];

    for (int i = 0; i < lines; i++)
    {
        cin >>  arr[i];
    }
    
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << op << "";
        }
        cout <<""<<endl;
    }
    
    return 0;
}