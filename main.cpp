// ¿Recuerdas qué hace iostream?
#include <iostream>
#include <iomanip>

// ¿Por qué este include usa comillas y no < >?
#include "utilerias.h"

// ¿por qué debe existir la función main()?
int main() {
    // 1. Variables (siempre inicializadas)
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    // Se repite mientras el usuario escriba 0 o un valor negativo.
    do {
        ancho = leerDecimal("Ancho en cm (mayor que 0): ");
    } while (ancho <= 0.0);

    // 3. Entrada: el alto
    // Mismo criterio que el ancho.
    do {
        alto = leerDecimal("Alto en cm (mayor que 0): ");
    } while (alto <= 0.0);

    // 4. Proceso
    // Se calcula el area y el perimetro del rectangulo.
    area = ancho * alto;
    perimetro = 2.0 * (ancho + alto);

    // 5. Salida
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area: " << area << " cm^2\n";
    std::cout << "Perimetro: " << perimetro << " cm\n";

    // ¿Qué significa return 0;?
    return 0;
}