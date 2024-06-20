//Estudiante: Cifuentes González Elian
//Fecha de entrega: 19/06/2024
//Curso: 1ro de TI

//1) Diseñe la función recursiva que realice la sumatoria de : 1 -2 + 3 - 4 + 5  - 6 + 7 .... n. Donde es el límite de la serie

#include <iostream>
using namespace std;

int SumaAlterna(int n) {
    if (n == 1) {
        return 1;
    }
    if (n % 2 == 0) {
        return SumaAlterna(n - 1) - n;
    } 
    else {
        return SumaAlterna(n - 1) + n;
    }
}

int main() {
    int n;
    cout << "Ingrese el valor de n: ";
    cin >> n;

    int resultado = SumaAlterna(n);
    cout << "La sumatoria alternada hasta " << n << " es: " << resultado << endl;

    return 0;
}
