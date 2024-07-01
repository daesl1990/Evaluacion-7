                 //Ejercicio 1



#include <iostream>
#include <fstream>
#include <cctype> 

int main() {
    std::ifstream entrada("David Sanchez 1.txt"); 
    std::ofstream salida("David Sanchez 2.txt"); 

    if (entrada.is_open() && salida.is_open()) {
        char caracter;

        while (entrada >> std::noskipws >> caracter) {
            caracter = std::toupper(caracter); 
            salida << caracter; 
        }

        std::cout << "Listo David el archivo fue convertido a mayusculas correctamente." << std::endl;
    } else {
        std::cerr << "Lo siento David hubo un Error al abrir los archivos." << std::endl;
    }

    entrada.close();
    salida.close();

    return 0;
}
