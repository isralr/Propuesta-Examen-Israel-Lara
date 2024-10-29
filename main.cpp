#include <iostream>
#include <cmath>
#include <locale>
#include "ejercicio/triple_pitagorico.h"

int main() {
    std::setlocale(LC_ALL, "");
    std::wcout.imbue(std::locale(""));

    std::wcout << L"Triple pitagóricos:" << std::endl;

    triple_pitagorico();

    return 0;
}