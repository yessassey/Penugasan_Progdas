#include <iostream>
#include <cmath>
using namespace std;

// Konstanta π
const double PI = 3.1416;

// Fungsi untuk menghitung jarak antara dua titik
double jarak(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Fungsi untuk menghitung jari-jari lingkaran
double jariJari(double pusatX, double pusatY, double titikX, double titikY) {
    return jarak(pusatX, pusatY, titikX, titikY);
}

// Fungsi untuk menghitung keliling lingkaran
double keliling(double r) {
    return 2 * PI * r;
}

// Fungsi untuk menghitung luas lingkaran
double luas(double r) {
    return PI * r * r;
}

int main() {
    double x1, y1, x2, y2;

    // Input dari pengguna
    cout << "Masukkan koordinat pusat lingkaran (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Masukkan koordinat titik pada lingkaran (x2 y2): ";
    cin >> x2 >> y2;

    // Hitung jari-jari dan properti lainnya
    double r = jariJari(x1, y1, x2, y2);
    double d = 2 * r;
    double k = keliling(r);
    double l = luas(r);

    // Output hasil
    cout << "\nJari-jari: " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Keliling: " << k << endl;
    cout << "Luas: " << l << endl;

    return 0;
}