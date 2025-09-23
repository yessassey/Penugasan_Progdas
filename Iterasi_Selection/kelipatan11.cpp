// Program 2: Jumlah Bilangan Positif Kelipatan 11 (Iterasi & Seleksi)
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan batas bilangan positif: ";
    cin >> n;

    int sum = 0;
    cout << "Bilangan kelipatan 11 dari 1 sampai " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (i % 11 == 0) {
            cout << i;
            if (i + 11 <= n) cout << ", ";
            sum += i;
        }
    }

    cout << endl << "Jumlah bilangan kelipatan 11: " << sum << endl;
    return 0;
}


