#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float consumoMinimo;
    float consumoMaximo;
    float precioGalon;

    printf("Ingrese el consumo minimo (L/100km): ");
    scanf("%f", &consumoMinimo);

    printf("Ingrese el consumo maximo (L/100km): ");
    scanf("%f", &consumoMaximo);

    printf("Ingrese el precio del galon: ");
    scanf("%f", &precioGalon);

    printf("Consumo (L/100km)  Costo por km (pesos)\n");

    for (float consumo = consumoMinimo; consumo <= consumoMaximo; consumo++)
    {
        float litrosPorKm = consumo / 100;
        float galonesPorKm = litrosPorKm / 3.78541;
        float costoPorKm = galonesPorKm * precioGalon;

        printf("%-18.2f %-10.2f\n", consumo, costoPorKm);
    }

    return 0;
}

}
