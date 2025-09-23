// Program 1: Deret Fibonacci dan Jumlahnya (Iterasi & Seleksi)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah suku Fibonacci: ";
    cin >> n;

    int a = 0, b = 1, sum = 0;
    cout << "Deret Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a;
        if (i < n - 1) cout << ", ";
        sum += a;
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl << "Jumlah deret: " << sum << endl;
    return 0;
}

 