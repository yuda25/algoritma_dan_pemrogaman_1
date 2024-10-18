//
// Created by yuda7 on 10/18/2024.
//

#ifndef MASTER_H
#define MASTER_H

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

/*
Soal :
1. Carilah nilai j dan terangkan bagaimana nilai j diperoleh, jika diketahui :
int m=24, k=21;
a. j=m|k
b. j=m%k
c. j=m&k
d. j=m+ ++k
e. j=m- --k
f. j=m- --k
g. j=m>>2
h. j=k+=m
i. j=--m + k++
j. j=--m*5
2. Buatlah program untuk konversi suhu dengan rumus :
Fahrenheit=(9/5)C+32
Reamur=(4/9)C+32
C dalam derajat celcius, Hasilnya disimpan dalam file suhu.dat dengan bentuk
:
C F R
Algoritma dan Pemrograman 32
T-Informatika FT UNPAM
… … …
3. Pak Budi menyimpan uangnya di BCA sebesar M rupiah dengan bunga B% per
tahun selama 5 tahun. Buatlah program dan simpan hasilnya dalam file bank.dat
untuk menghitung uang Pak Buda pada akhir tahun ke 5. (Inputnya M, B)
Rumus :
U=M(1+B)n
U : uang pada akhir tahun ke-n
M : uang pada awal tahun
B : bunga per tahun
*/

class master {
    public:
     void jawaban_no_satu() {
    int m = 24, k = 21, j;

    // a. j = m | k
    j = m | k;
    cout << "a. j = m | k : " << j << endl;

    // b. j = m % k
    j = m % k;
    cout << "b. j = m % k : " << j << endl;

    // c. j = m & k
    j = m & k;
    cout << "c. j = m & k : " << j << endl;

    // d. j = m + ++k
    k = 21;  // reset nilai k
    j = m + ++k;
    cout << "d. j = m + ++k : " << j << endl;

    // e. j = m - --k
    k = 21;  // reset nilai k
    j = m - --k;
    cout << "e. j = m - --k : " << j << endl;

    // f. j = m - --k
    k = 21;  // reset nilai k
    j = m - --k;
    cout << "f. j = m - --k : " << j << endl;

    // g. j = m >> 2
    j = m >> 2;
    cout << "g. j = m >> 2 : " << j << endl;

    // h. j = k += m
    k = 21;  // reset nilai k
    j = k += m;
    cout << "h. j = k += m : " << j << endl;

    // i. j = --m + k++
    m = 24;  // reset nilai m
    k = 21;  // reset nilai k
    j = --m + k++;
    cout << "i. j = --m + k++ : " << j << endl;

    // j. j = --m * 5
    m = 24;  // reset nilai m
    j = --m * 5;
    cout << "j. j = --m * 5 : " << j << endl;
}

    void jawaban_no_dua() {
        float C, F, R;
        ofstream outfile("suhu.dat");

        // Input suhu dalam Celcius
        cout << "Masukkan suhu dalam Celcius: ";
        cin >> C;

        // Konversi suhu
        F = (9.0 / 5.0) * C + 32;
        R = (4.0 / 9.0) * C + 32;

        // Simpan hasil ke file
        outfile << "C     F     R" << endl;
        outfile << C << "  " << F << "  " << R << endl;

        outfile.close();
        cout << "Hasil konversi telah disimpan di suhu.dat" << endl;
    }

    void jawaban_no_tiga() {
        double M, B, U;
        ofstream outfile("bank.dat");

        // Input M (modal awal) dan B (bunga tahunan)
        cout << "Masukkan uang awal (M) dalam rupiah: ";
        cin >> M;
        cout << "Masukkan bunga tahunan (B) dalam persen: ";
        cin >> B;

        // Konversi persen ke desimal
        B = B / 100;

        // Menghitung uang setelah 5 tahun
        U = M * pow(1 + B, 5);

        // Simpan hasil ke file
        outfile << "Uang setelah 5 tahun: " << U << " rupiah" << endl;

        outfile.close();
        cout << "Hasil perhitungan telah disimpan di bank.dat" << endl;
    }
};



#endif //MASTER_H
