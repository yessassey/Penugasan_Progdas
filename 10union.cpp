#include <iostream>
#include <cstring>
using namespace std;

union Mahasiswa {
    int id;
    char nama[30];
    float ipk;
    bool aktif;
};

int main() {
    Mahasiswa data[5];
    int pilihan;

    cout << "Masukkan 5 data Mahasiswa (satu jenis data per entri):\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nData ke-" << i + 1 << endl;
        cout << "Pilih jenis data yang ingin dimasukkan:\n";
        cout << "1. ID\n2. Nama\n3. IPK\n4. Status Aktif\nPilihan: ";
        cin >> pilihan;
        cin.ignore(); // bersihkan buffer

        switch (pilihan) {
            case 1:
                cout << "Masukkan ID: ";
                cin >> data[i].id;
                break;
            case 2:
                cout << "Masukkan Nama: ";
                cin.getline(data[i].nama, 30);
                break;
            case 3:
                cout << "Masukkan IPK: ";
                cin >> data[i].ipk;
                break;
            case 4:
                cout << "Masukkan Status Aktif (1 = Ya, 0 = Tidak): ";
                cin >> data[i].aktif;
                break;
            default:
                cout << "Pilihan tidak valid.\n";
                i--; // ulangi input
        }
    }

    // Menampilkan data
    cout << "\n=== Data Mahasiswa (union) ===\n";
    for (int i = 0; i < 5; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        // Karena kita tidak menyimpan jenis data, kita tampilkan semua kemungkinan
        cout << "ID: " << data[i].id << ", ";
        cout << "Nama: " << data[i].nama << ", ";
        cout << "IPK: " << data[i].ipk << ", ";
        cout << "Aktif: " << (data[i].aktif ? "Ya" : "Tidak") << endl;
    }

    // Menampilkan ukuran union dan masing-masing member
    cout << "\nUkuran union Mahasiswa: " << sizeof(Mahasiswa) << " byte\n";
    cout << "Ukuran member id: " << sizeof(data[0].id) << " byte\n";
    cout << "Ukuran member nama: " << sizeof(data[0].nama) << " byte\n";
    cout << "Ukuran member ipk: " << sizeof(data[0].ipk) << " byte\n";
    cout << "Ukuran member aktif: " << sizeof(data[0].aktif) << " byte\n";

    return 0;
}
