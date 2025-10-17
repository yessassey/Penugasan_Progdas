#include <iostream>
#include <cstring>
using namespace std;

struct Mahasiswa {
    int id;
    char nama[30];
    float ipk;
    bool aktif;
};

int main() {
    Mahasiswa data[5];

    // Input data dari pengguna
    for (int i = 0; i < 5; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        cout << "ID: ";
        cin >> data[i].id;
        cin.ignore(); // membersihkan buffer
        cout << "Nama: ";
        cin.getline(data[i].nama, 30);
        cout << "IPK: ";
        cin >> data[i].ipk;
        cout << "Status Aktif (1 = Ya, 0 = Tidak): ";
        cin >> data[i].aktif;
    }

    // Menampilkan data
    cout << "\n=== Data Mahasiswa ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "ID: " << data[i].id
             << ", Nama: " << data[i].nama
             << ", IPK: " << data[i].ipk
             << ", Aktif: " << (data[i].aktif ? "Ya" : "Tidak") << endl;
    }

    // Menampilkan ukuran struct dan masing-masing member
    cout << "\nUkuran struct Mahasiswa: " << sizeof(Mahasiswa) << " byte\n";
    cout << "Ukuran member id: " << sizeof(data[0].id) << " byte\n";
    cout << "Ukuran member nama: " << sizeof(data[0].nama) << " byte\n";
    cout << "Ukuran member ipk: " << sizeof(data[0].ipk) << " byte\n";
    cout << "Ukuran member aktif: " << sizeof(data[0].aktif) << " byte\n";

    return 0;
}