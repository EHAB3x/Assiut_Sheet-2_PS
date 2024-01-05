#include <iostream>
using namespace std;

int fib(int n) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    } else {
        int a = 0, b = 1, c;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cout << fib(i) << " ";
    }

    return 0;
}
