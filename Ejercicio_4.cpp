//Estudiante: Cifuentes González Elian
//Fecha de entrega: 19/06/2024
//Curso: 1ro de TI

/*4) Diseña la función recursiva que imprima la una tabla de multiplicar, de manera descendente desde el 10 al 1
Por ejemplo, si es la tabla del 5 el resultado sería:
5 x 10 = 50
5 x 9 = 45
....
....
5 x 1 = 5  */

#include <iostream>
using namespace std;

void TablaMultiplicar(int numero, int cont) {
    if (cont == 0) {
        return; 
    } else {
        int resultado = numero * cont;
        cout << numero << " x " << cont << " = " << resultado << endl;
        TablaMultiplicar(numero, cont - 1);  
    }
}

int main() {
    int numero;
    cout << "Ingrese el número de la tabla de multiplicar: ";
    cin >> numero;
    
    cout << "Tabla de multiplicar del " << numero << endl;
    TablaMultiplicar(numero, 10);  
    
    return 0;
}
