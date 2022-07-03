#include <iostream>
using namespace std;

int main() {

    // Declaracion de variables
    int competitor1=0, competitor2=0, competitor3=0, total_p, n=1;
    string winner;

    cout << "Reto 1: " << "\n";
    cout << "Reto 2: " << "\n";
    cout << "Reto 3: " << "\n";
    cout << "Reto 4: " << "\n";
    cout << "Reto 5: " << "\n\n";
    cout << "Nota: escribir nombres de los ganadores en minuscula ej. anel, manuel, leslie.\n";
    cout << "      En caso de no haber ganador, escriba la palabra nadie.\n\n";

    do{
        // Bucle de retos
        cout << "Reto " << n++ << endl;
        cout << "Escriba el nombre del ganador: ";
        cin >> winner;
        if(winner == "anel"){
            competitor1 += 20; 
            cout << "Anel suma 20 puntos!\n\n";
        } else if(winner == "manuel") {
            competitor2 += 20; 
            cout << "Manuel suma 20 puntos!\n\n";
        } else if(winner == "leslie") {
            competitor3 += 20;
            cout << "Leslie suma 20 puntos!\n\n";
        } else if(winner == "nadie") {
            cout << "No hubo ganador\n\n";
        } else {
            cout << "Error: opcion invalida\n\n";
        }
    }while(n <= 5);
    
    // Puntajes
    cout << "Resultados finales\n";
    cout << "Puntaje de Anel: " << competitor1 << endl;
    cout << "Puntaje de Manuel: " << competitor2 << endl;
    cout << "Puntaje de Leslie: " << competitor3 << endl;
    
    return 0;
}