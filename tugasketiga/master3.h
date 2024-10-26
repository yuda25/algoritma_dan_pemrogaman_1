//
// Created by yuda7 on 10/26/2024.
//

#ifndef MASTER3_H
#define MASTER3_H

#include <iostream>
#include <fstream>

using namespace std;

class master3 {
    public:

    int task1() {
        cout<<"Task 1"<<endl;
        for (int i = 1; i <= 5; i++) {
            cout << i << endl;
        }
        return 0;
    }

    int task2() {
        cout<<"Task 2"<<endl;
        int i = 1, j = 2;
        int batas = 35; // Batas bilangan yang ingin ditampilkan

        cout << "Ganjil: ";
        while (i <= batas) {
            cout << i << " ";
            i += 2;
        }

        cout << endl << "Genap: ";
        while (j <= batas) {
            cout << j << " ";
            j += 2;
        }

        cout << endl;

        return 0;
    }
};

#endif //MASTER3_H
