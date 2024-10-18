#include <iostream>
#include <fstream>
#include <cmath>

#include "tugasPertama/master.h"
using namespace std;

master tugasPertama;
int main()
{
    std::cout << "Jawaban Soal No 1" << std::endl;
    tugasPertama.jawaban_no_satu();
    std::cout << "Jawaban Soal No 2" << std::endl;
    tugasPertama.jawaban_no_dua();
    std::cout << "Jawaban Soal No 3" << std::endl;
    tugasPertama.jawaban_no_tiga();
    return 0;
}