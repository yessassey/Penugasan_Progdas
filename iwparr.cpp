#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float v0, interval;
    const float g = 9.8; // gravitasi tetap

    cout << "Masukkan kecepatan awal (m/s): ";
    cin >> v0;
    cout << "Masukkan interval waktu (detik): ";
    cin >> interval;

    float waktu = 0.0;
    int iterasi = 0;
    float posisi;

    cout << left << setw(10) << "Iterasi"
         << setw(10) << "Waktu(s)"
         << setw(15) << "Posisi(m)" << endl;

    // Loop hingga benda menyentuh tanah
    while (true) {
        posisi = v0 * waktu - 0.5 * g * waktu * waktu;
        if (posisi < 0) break;

        cout << left << setw(10) << iterasi
             << setw(10) << waktu
             << setw(15) << fixed << setprecision(2) << posisi << endl;

        waktu += interval;
        iterasi++;
    }

    return 0;
}