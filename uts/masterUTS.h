//
// Created by yuda7 on 11/2/2024.
//

#ifndef MASTERUTS_H
#define MASTERUTS_H

#include <iostream>
#include <stack>
#include <cmath> // Untuk fungsi pow

using namespace std;

class masterUTS {
    public:
    int jawaban_soal_nomor_2() {
        int numbers[] = {39, 50, 79, 100};

        cout << "Bilangan biner dari bilangan desimal:" << endl;
        for (int i = 0; i < 4; i++) {
            cout << "Desimal " << numbers[i] << " = Biner ";
            decimalToBinary(numbers[i]);
        }

        return 0;
    }

    void decimalToBinary(int n) {
        stack<int> binaryStack;

        // Konversi desimal ke biner dengan membagi dua secara berturut-turut
        while (n > 0) {
            binaryStack.push(n % 2);
            n /= 2;
        }

        // Cetak hasil dari stack untuk mendapatkan biner dalam urutan yang benar
        while (!binaryStack.empty()) {
            cout << binaryStack.top();
            binaryStack.pop();
        }
        cout << endl;
    }

    //==========================================================================

    int jawaban_soal_nomor_4() {
        // Deklarasi variabel
        double A, B, C;

        // Input nilai untuk A, B, dan C
        cout << "Masukkan nilai untuk A: ";
        cin >> A;
        cout << "Masukkan nilai untuk B: ";
        cin >> B;
        cout << "Masukkan nilai untuk C: ";
        cin >> C;

        // a. A^2 + B^2 + C^3
        double result1 = pow(A, 2) + pow(B, 2) + pow(C, 3);
        cout << "Hasil dari A^2 + B^2 + C^3 adalah: " << result1 << endl;

        // b. A/2 + C^2
        double result2 = (A / 2) + pow(C, 2);
        cout << "Hasil dari A/2 + C^2 adalah: " << result2 << endl;

        return 0;
    }

    //==========================================================================
    // + flowchart
    int jawaban_soal_nomor_6() {
        int batas, i = 1, j = 2;

        cout << "Masukkan batas bilangan: ";
        cin >> batas;

        cout << "Bilangan Ganjil: ";
        while (i <= batas) {
            cout << i << " ";
            i += 2;
        }

        cout << endl << "Bilangan Genap: ";
        while (j <= batas) {
            cout << j << " ";
            j += 2;
        }

        return 0;
    }

    //==========================================================================
    // + flowchart
    int jawaban_soal_nomor_8() {
        int bil1, bil2, bil3, bil4, terbesar;

        cout << "Masukkan bilangan pertama: ";
        cin >> bil1;
        cout << "Masukkan bilangan kedua: ";
        cin >> bil2;
        cout << "Masukkan bilangan ketiga: ";
        cin >> bil3;
        cout << "Masukkan bilangan keempat: ";
        cin >> bil4;

        // Inisialisasi bilangan terbesar dengan bilangan pertama
        terbesar = bil1;

        // Bandingkan dengan bilangan lainnya dan perbarui jika lebih besar
        if (bil2 > terbesar) {
            terbesar = bil2;
        }
        if (bil3 > terbesar) {
            terbesar = bil3;
        }
        if (bil4 > terbesar) {
            terbesar = bil4;
        }

        cout << "Bilangan terbesar adalah: " << terbesar << endl;

        return 0;
    }
};

#endif //MASTERUTS_H
