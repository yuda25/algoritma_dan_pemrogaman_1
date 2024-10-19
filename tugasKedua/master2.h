//
// Created by yuda7 on 10/19/2024.
//

#ifndef MASTER2_H
#define MASTER2_H

#include <iostream>
#include <fstream>

using namespace std;

class master2 {
    public:
        int task1() {
            double nilai;

            cout << "Masukkan nilai: ";
            cin >> nilai;

            if (nilai >= 60) {
                cout << "Selamat, Anda lulus!" << endl;
            } else {
                cout << "Maaf, Anda tidak lulus." << endl;
            }

            return 0;
        }
};



#endif //MASTER2_H
