#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string number , rev;
    cin >> number;
    rev = number;
    reverse(rev.begin(), rev.end());
    if(number == rev){
        cout << rev << endl;
        cout << "YES" << endl;
    }else{
        rev.erase(0, rev.find_first_not_of('0'));
        cout << rev << endl;
        cout << "NO" << endl;
    }
    return 0;
}
