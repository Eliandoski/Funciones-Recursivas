//Estudiante: Cifuentes González Elian
//Fecha de entrega: 19/06/2024
//Curso: 1ro de TI

/*5) Diseñe el programa que permita generar 3 cartas aleatorias, con las siguientes consideraciones:
- Se puede comenzar a jugar, si luego de generar las 3 cartas, las 3 son diferentes, es decir, si salen, 
por ejemplo dos cartas K de brillo, no se puede continuar. 
- El jugador gana si la sumatoria de sus cartas es 21. La carta A se la considera como 1, las cartas J, Q, K se 
las considera como 10.
- Si al generar las 3 primeras cartas el jugador no ha ganado, tiene la posibilidad de cambiar hasta 2 cartas.
Se debe preguntar al usuario: Cuántas cartas desea cambiar 1 o 2 ?
Luego de este cambio se vuelven a sumar y si suman 21 , ya hay ganador. También gana cuando salen 3 cartas iguales. 
Por ejemplo  A de brillo, A de trébol, A de corazón.
- Después de cada partida, debe preguntar al usuario: Desea seguir Jugando (S/N) ?*/

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;


//Función para generar los 4 palos de cartas
void ImprCartas(int cartas, string simbolo){
    //Cartas de brillo
    if(cartas==1 && simbolo=="brillo"){
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;

    }
    else if (cartas == 111 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "brillo") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "brillo") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "brillo") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "brillo") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♦     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    //Cartas de picas
    else if (cartas == 1 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "picas") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "picas") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "picas") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "picas") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♠     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
        else if (cartas == 10 && simbolo == "corazones") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "corazones") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "corazones") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "corazones") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♥     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    //Cartas de trebol
    else if (cartas == 1 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      A♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 111 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      1♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 2 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      2♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 3 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      3♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 4 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      4♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 5 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      5♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 6 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      6♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 7 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      7♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 8 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      8♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 9 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      9♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 10 && simbolo == "trebol") {
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║     10♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 11 && simbolo == "trebol") { // Jota
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      J♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 12 && simbolo == "trebol") { // Reina
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      Q♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else if (cartas == 13 && simbolo == "trebol") { // Rey
        cout << "╔═════════════╗" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║      K♣     ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "║             ║" << endl;
        cout << "╚═════════════╝" << endl;
    }
    else {
        cout << "La carta o simbolo que ingresaste no es correcto" << endl;
    }
}

int GenerarNumero(){
    int numero = 1 + rand()% 13;
    return numero;
}

string GeneraTipo(){
    int numero = 1 + rand() % 4;
    if (numero == 1)
    {
        return "brillo";
    }else if (numero == 2)
    {
        return "picas";
    }else if (numero == 3)
    {
        return "corazones";
    }else if (numero == 4)
    {
        return "trebol";
    }else{
        return " ";
    }
  }  
  int ValorCarta(int carta) {
    if (carta >= 2 && carta <= 10) {
        return carta;
    } else if (carta >= 11 && carta <= 13) {
        return 10;
    } else {
        return 0;
    }
}

int main() {
    srand(time(NULL));

    char jugar = 'S';
    while (jugar == 'S') {
        int carta1 = GenerarNumero();
        string simbolo1 = GeneraTipo();
        ImprCartas(carta1, simbolo1);

        int carta2 = GenerarNumero();
        string simbolo2 = GeneraTipo();
        ImprCartas(carta2, simbolo2);

        int carta3 = GenerarNumero();
        string simbolo3 = GeneraTipo();
        ImprCartas(carta3, simbolo3);

        if ((carta1 == carta2 && simbolo1 == simbolo2) || (carta1 == carta3 && simbolo1 == simbolo3) || (carta2 == carta3 && simbolo2 == simbolo3)) {
            cout << "Hay cartas iguales. No se puede continuar." << endl;
        } else if (carta1 == carta2 && carta1 == carta3) {
            cout << "¡Ganaste!" << endl;
        } else {
            int suma = ValorCarta(carta1) + ValorCarta(carta2) + ValorCarta(carta3);

            if (suma == 21) {
                cout << "¡Ganaste!" << endl;
            } else {
                int numCambios;
                cout << "¿Cuántas cartas deseas cambiar? (1 o 2): ";
                cin >> numCambios;
                if (numCambios == 1 || numCambios == 2) {
                    if (numCambios >= 1) {
                        int cartaCambio;
                        cout << "¿Qué carta desea cambiar? (1, 2 o 3): ";
                        cin >> cartaCambio;
                        if (cartaCambio == 1) {
                            carta1 = GenerarNumero();
                            simbolo1 = GeneraTipo();
                        } else if (cartaCambio == 2) {
                            carta2 = GenerarNumero();
                            simbolo2 = GeneraTipo();
                        } else if (cartaCambio == 3) {
                            carta3 = GenerarNumero();
                            simbolo3 = GeneraTipo();
                        } else {
                            cout << "Número de carta inválido" << endl;
                        }
                    }
                    if (numCambios == 2) {
                        int cartaCambio;
                        cout << "¿Qué carta deseas cambiar? (1, 2 o 3): ";
                        cin >> cartaCambio;
                        if (cartaCambio == 1) {
                            carta1 = GenerarNumero();
                            simbolo1 = GeneraTipo();
                        } else if (cartaCambio == 2) {
                            carta2 = GenerarNumero();
                            simbolo2 = GeneraTipo();
                        } else if (cartaCambio == 3) {
                            carta3 = GenerarNumero();
                            simbolo3 = GeneraTipo();
                        } else {
                            cout << "Número de carta inválido" << endl;
                        }
                    }
                    suma = ValorCarta(carta1) + ValorCarta(carta2) + ValorCarta(carta3);
                    if (suma == 21 || (carta1 == carta2 && carta1 == carta3)) {
                        cout << "¡Ganaste!" << endl;
                    } else {
                        cout << "No ganaste esta vez" << endl;
                    }
                } else {
                    cout << "Número de cambios inválido" << endl;
                }
            }
        }

        cout << "Tu mano final es:" << endl;
        ImprCartas(carta1, simbolo1);
        ImprCartas(carta2, simbolo2);
        ImprCartas(carta3, simbolo3);

        int sumaFinal = ValorCarta(carta1) + ValorCarta(carta2) + ValorCarta(carta3);
        if (sumaFinal == 21 || (carta1 == carta2 && carta1 == carta3)) {
            cout << "¡Ganaste!" << endl;
        } else {
            cout << "No ganaste esta vez." << endl;
        }

        cout << "¿Desea seguir jugando? (S/N): ";
        cin >> jugar;
    }
    return 0;
}
