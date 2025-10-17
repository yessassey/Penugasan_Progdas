#include <iostream>
using namespace std;

int main() {
    const int n = 7; // jumlah elemen
    int deret[n];

    // Mengisi array dengan deret menurun dari 3 ke -3
    for (int i = 0; i < n; i++) {
        deret[i] = 3 - i;
    }

    // Menampilkan isi array
    for (int i = 0; i < n; i++) {
        cout << deret[i] << " ";
    }

    return 0;
}