#include <iostream>
#include <fstream>
#include <cmath>

#include "tugasKedua/master2.h"
#include "tugasketiga/master3.h"
#include "tugasPertama/master.h"
using namespace std;

master tugasPertama;
master2 tugasKedua;
master3 tugasKetiga;
int main()
{
    // std::cout << "Jawaban Soal No 1" << std::endl;
    // tugasPertama.jawaban_no_satu();
    // std::cout << "Jawaban Soal No 2" << std::endl;
    // tugasPertama.jawaban_no_dua();
    // std::cout << "Jawaban Soal No 3" << std::endl;
    // tugasPertama.jawaban_no_tiga();


    // std::cout << "Jawaban Soal No 1" << std::endl;
    // tugasKedua.task1();

    tugasKetiga.task1();
    tugasKetiga.task2();

    return 0;
}