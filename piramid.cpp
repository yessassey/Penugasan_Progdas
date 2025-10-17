#include <iostream>
using namespace std;

int main() {
    int baris;
    cout << "Masukkan jumlah baris piramida: ";
    cin >> baris;

    int kolom = 2 * baris - 1; // jumlah kolom maksimum
    char piramida[baris][kolom];

    // Inisialisasi array dengan spasi
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            piramida[i][j] = ' ';
        }
    }

    // Mengisi array dengan pola bintang
    for (int i = 0; i < baris; i++) {
        int jumlah_bintang = 2 * i + 1;
        int start = (kolom - jumlah_bintang) / 2;
        for (int j = 0; j < jumlah_bintang; j++) {
            piramida[i][start + j] = '*';
        }
    }

    // Menampilkan piramida
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            cout << piramida[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
