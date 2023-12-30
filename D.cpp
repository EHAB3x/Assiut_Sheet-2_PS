#include <iostream>
using namespace std;

int main(){
    int match, password = 1999;
    for (;;)
    {
        cin >> match;
        if(match == password){
            cout << "Correct" << endl;
            break;
        }else{
            cout << "Wrong" << endl;
        }
    }
    return 0;
}