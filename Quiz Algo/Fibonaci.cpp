#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, next, i = 1;

    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;

    cout << "Deret Fibonacci: ";

    while(i <= n) {
        cout << a << " ";

        next = a + b;
        a = b;
        b = next;

        i++;
    }

    return 0;
}

