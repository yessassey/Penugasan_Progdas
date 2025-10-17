#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char kalimat[100], tambahan[50], salinan[100];

    cout << "Masukkan kalimat: ";
    cin.getline(kalimat, 100);

    // Menampilkan panjang kalimat
    cout << "\nPanjang kalimat: " << strlen(kalimat) << " karakter\n";

    // Menyalin kalimat ke variabel lain
    strcpy(salinan, kalimat);
    cout << "Salinan kalimat: " << salinan << endl;

    // Menambahkan kata di akhir
    cout << "Masukkan kata tambahan: ";
    cin.getline(tambahan, 50);
    strcat(kalimat, " ");
    strcat(kalimat, tambahan);
    cout << "Setelah digabung: " << kalimat << endl;

    // Membandingkan kalimat asli dan salinan
    if (strcmp(kalimat, salinan) == 0)
        cout << "Kalimat dan salinan sama.\n";
    else
        cout << "Kalimat dan salinan berbeda.\n";

    // Mencari kata "Dasar" dalam kalimat
    char* posisi = strstr(kalimat, "Dasar");
    if (posisi != nullptr)
        cout << "\"Dasar\" ditemukan di posisi indeks: " << posisi - kalimat << endl;
    else
        cout << "\"Dasar\" tidak ditemukan dalam kalimat.\n";

    return 0;
}
