#include <iostream>

int main() {
    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    try {
        for (int i = 0; i <= 10; ++i) {
            if (i >= 10) {
                throw std::out_of_range("Error: Índice fuera de rango.");
            }
            std::cout << "Elemento " << i + 1 << ": " << arreglo[i] << std::endl;
        }
    } catch(const std::out_of_range& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}