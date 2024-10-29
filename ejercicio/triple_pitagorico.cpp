#include "triple_pitagorico.h"
#include <iostream>
#include <cmath>

void triple_pitagorico() {
    for (int a = 1; a <= 20; a++) {
        for (int b = a; b <= 20; b++) {
            int c = static_cast<int>(sqrt(pow(a, 2) + pow(b, 2)));
            if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
                std::cout << "- " << a << " - " << b << " - " << c << std::endl;
            }
        }
    }
}