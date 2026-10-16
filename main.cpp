#include <iostream>

using namespace std;

// Fungsi untuk menentukan grade berdasarkan nilai
char tentukanGrade(float nilai) {
    if (nilai > 90) {
        return 'A';
    } else if (nilai > 80) {
        return 'B';
    } else if (nilai > 70) {
        return 'C';
    } else {
        return 'D';
    }
}

int main() {
    float nilai;

    cout << "=================================\n";
    cout << "    PROGRAM INPUT & GRADE NILAI  \n";
    cout << "=================================\n";

    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai < 0 || nilai > 100) {
        cout << "Peringatan: Nilai yang dimasukkan di luar jangkauan 0 - 100.\n";
    }

    char grade = tentukanGrade(nilai);

    cout << "\nHasil Penilaian:\n";
    cout << "Nilai : " << nilai << endl;
    cout << "Grade : " << grade << endl;
    cout << "=================================\n";

    return 0;
}
