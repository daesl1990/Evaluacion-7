        //Ejercicio 3
        
        
        
#include <iostream>
#include <fstream>
#include <string>

int main() {
    int cantidadFrutas;

    std::cout << "Por favor David ingrese la cantidad de frutas a almacenar: ";
    std::cin >> cantidadFrutas;
    std::cin.ignore(); 

    std::ofstream archivo("Frutas alamcenadas.txt");

    if (archivo.is_open()) {
        std::string fruta;

        for (int i = 0; i < cantidadFrutas; i++) {
            std::cout << "David por favor Ingrese el nombre de la fruta " << i + 1 << ": ";
            std::getline(std::cin, fruta);
            archivo << fruta << std::endl;
        }

        std::cout << "David los nombres de las frutas fueron correctamente almacenadas en el archivo frutas almacenadas.txt." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo." << std::endl;
    }

    archivo.close();

    return 0;
}
