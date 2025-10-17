#include <iostream>
using namespace std;

int main() {
    const int n = 11; // jumlah elemen
    int deret[n];

    // Mengisi array dengan deret ganjil mulai dari 3
    for (int i = 0; i < n; i++) {
        deret[i] = 3 + i * 2;
    }

    // Menampilkan isi array
       for (int i = 0; i < n; i++) {
        cout << deret[i] << " ";
    }

    return 0;
}

