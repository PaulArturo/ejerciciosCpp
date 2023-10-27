// Directivas de C++(C) (importar librerias)
#include <iostream>

int main() {
    union mytypes_t{
      char c;
      int i;
      float f;
    };

    mytypes_t mytypes;

    mytypes.c = 'A';      // Asignar un carácter
    mytypes.i = 42;       // Asignar un entero
    mytypes.f = 3.14;     // Asignar un flotante

    // Acceder a los valores de la unión
    std::cout << "Char: " << mytypes.c << std::endl;
    std::cout << "Int: " << mytypes.i << std::endl;
    std::cout << "Float: " << mytypes.f << std::endl;

    return 0;
}