#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;
    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat); // menerima input kalimat lengkap

    // Menampilkan panjang kalimat
    cout << "\nPanjang kalimat: " << kalimat.length() << " karakter\n";

    // Mencari kata "C++"
    size_t posisi = kalimat.find("C++");
    if (posisi != string::npos) {
        cout << "\"C++\" ditemukan di indeks: " << posisi << endl;
    } else {
        cout << "\"C++\" tidak ditemukan dalam kalimat.\n";
    }

    // Mengambil substring dari awal hingga 10 karakter pertama
    string potongan = kalimat.substr(0, 10);
    cout << "10 karakter pertama: " << potongan << endl;

    // Mengganti kata "Dasar" dengan "Lanjutan" jika ada
    posisi = kalimat.find("Dasar");
    if (posisi != string::npos) {
        kalimat.replace(posisi, 5, "Lanjutan");
        cout << "Setelah replace: " << kalimat << endl;
    }

    // Menambahkan kata di akhir
    kalimat.append(" [diproses]");
    cout << "Setelah append: " << kalimat << endl;

    return 0;
}