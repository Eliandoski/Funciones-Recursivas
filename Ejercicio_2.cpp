//Estudiante: Cifuentes González Elian
//Fecha de entrega: 19/06/2024
//Curso: 1ro de TI

/*2) Diseña la función recursiva que imprima la una tabla de multiplicar. La función debe recibir 2 parámetros: 
el primero representa la tabla, y el segundo representa el límite superior de esa tabla.
Por ejemplo: si llamo a la función TablaMultiplicar (5, 12), significa que se imprime la tabla del 5 desde el 1 al 12
 5 x 1 = 5
 5 x 2 = 10
 ...
 ...
 5 x 12 = 60*/

#include <iostream>
using namespace std;

void TablaMultiplicar(int tabla, int lim, int cont = 1) {
    if (cont > lim) {
        return;
    }
    
    cout << tabla << " x " << cont << " = " << tabla * cont << endl;
    
    TablaMultiplicar(tabla, lim, cont + 1);
}

int main() {
    int tabla, lim;
    cout << "Introduce el número de la tabla de multiplicar: ";
    cin >> tabla;
    cout << "Introduce el límite de la tabla de multiplicar: ";
    cin >> lim;

    TablaMultiplicar(tabla, lim);

    return 0;
}
