//Estudiante: Cifuentes González Elian
//Fecha de entrega: 19/06/2024
//Curso: 1ro de TI

/*3)  Diseñe la función recursiva que cuenta el total de cifras que tiene un número entero.
123 tiene 3 cifras
45 tiene 2 cifras
6789 tiene 4 cifras
10123 tiene 5 cifras*/

#include <iostream>
using namespace std;

int Cifras(int num) {
    if (num < 10) {
        return 1;
    } else {
        return 1 + Cifras(num / 10);
    }
}

int main() {
    int num;
    cout << "Ingrese un número entero: ";
    cin >> num;

    if (num < 0) {
        num = -num; 
    }

    int cifras = Cifras(num);
    cout << "El número " << num << " tiene " << cifras << " cifras" << endl;

    return 0;
}
