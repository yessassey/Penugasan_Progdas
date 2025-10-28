#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 20;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

// Fungsi untuk membaca data mahasiswa
void bacaData(studentType students[], int size) {
    cout << "Masukkan data mahasiswa (Nama Depan Nama Belakang Nilai Ujian):\n";
    for (int i = 0; i < size; i++) {
        cout << "Mahasiswa ke-" << i + 1 << ": ";
        cin >> students[i].studentFName >> students[i].studentLName >> students[i].testScore;
    }
}

// Fungsi untuk menentukan grade
void tentukanGrade(studentType students[], int size) {
    for (int i = 0; i < size; i++) {
        int score = students[i].testScore;
        if (score >= 90)
            students[i].grade = 'A';
        else if (score >= 80)
            students[i].grade = 'B';
        else if (score >= 70)
            students[i].grade = 'C';
        else if (score >= 60)
            students[i].grade = 'D';
        else
            students[i].grade = 'F';
    }
}

// Fungsi untuk mencari nilai tertinggi
int cariNilaiTertinggi(studentType students[], int size) {
    int maxScore = students[0].testScore;
    for (int i = 1; i < size; i++) {
        if (students[i].testScore > maxScore)
            maxScore = students[i].testScore;
    }
    return maxScore;
}

// Fungsi untuk mencetak nama mahasiswa dengan nilai tertinggi
void cetakMahasiswaNilaiTertinggi(studentType students[], int size, int maxScore) {
    cout << "\nMahasiswa dengan nilai tertinggi (" << maxScore << "):\n";
    for (int i = 0; i < size; i++) {
        if (students[i].testScore == maxScore) {
            cout << students[i].studentLName << ", " << students[i].studentFName << endl;
        }
    }
}

// Fungsi untuk mencetak semua data mahasiswa
void cetakData(studentType students[], int size) {
    cout << "\nData Mahasiswa:\n";
    cout << left << setw(20) << "Nama" << setw(10) << "Nilai" << setw(10) << "Grade" << endl;
    cout << "-------------------------------------------\n";
    for (int i = 0; i < size; i++) {
        string namaLengkap = students[i].studentLName + ", " + students[i].studentFName;
        cout << left << setw(20) << namaLengkap
             << setw(10) << students[i].testScore
             << setw(10) << students[i].grade << endl;
    }
}

int main() {
    studentType students[SIZE];

    // Panggil fungsi-fungsi
    bacaData(students, SIZE);
    tentukanGrade(students, SIZE);
    cetakData(students, SIZE);

    int maxScore = cariNilaiTertinggi(students, SIZE);
    cetakMahasiswaNilaiTertinggi(students, SIZE, maxScore);

    return 0;
}