#include <iostream>
#include <cmath>
#include <locale>
#include "ejercicio/triple_pitagorico.h"
using namespace std;


int main() {
    setlocale(LC_ALL, "");
    wcout.imbue(std::locale(""));

    wcout << L"Triple pitagóricos:" << std::endl;

    triple_pitagorico();

    return 0;
}