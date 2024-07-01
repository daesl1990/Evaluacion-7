        //Ejercicio 2




#include <iostream>
#include <fstream>

int main() {
    int cantidadSueldos;

    std::cout << "Por favor David ingrese la cantidad de sueldos a almacenar: ";
    std::cin >> cantidadSueldos;

    std::ofstream archivo("sueldos.dat", std::ios::binary); 

    if (archivo.is_open()) {
        float sueldo;

        for (int i = 0; i < cantidadSueldos; i++) {
            std::cout << "David por favor Ingresa el sueldo del trabajor  " << i + 1 << ": ";
            std::cin >> sueldo;
            archivo.write(reinterpret_cast<const char*>(&sueldo), sizeof(float)); 
        }

        std::cout << "Los sueldos fueron almacenados correctamente en el archivo sueldos.dat." << std::endl;
    } else {
        std::cerr << "Error al crear el archivo." << std::endl;
    }

    archivo.close();

    return 0;
}
