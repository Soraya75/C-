#include <iostream>

int main() {
    int numeros[5];
        std::cout << "Digite 5 números: ";
    for (int i = 0; i < 5; i++) {
        std::cin >> numeros[i];
    }

    std::cout << "Elementos do array:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << numeros[i] << " ";
    }

    return 0;
}