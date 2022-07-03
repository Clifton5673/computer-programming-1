#include <iostream>

using namespace std;

int main() {

    // Inicializacion de variables
    string username, password, code, description, name;
    int balance = 5000, option, quantity_1, quantity_2, price = 0, invoice_n, total = 0;

    // Datos a ingresar por el usuario: usuario, contrasena
    cout << "Ingrese su nombre de usuario: " << endl;
    cin >> username;
    cout << "Ingrese su contasena: " << endl;
    cin >> password;

    // Validar usuario
    if (username == "clifton" && password == "1234") {
        cout << "Bienvenido al sistema de facturacion." << endl << endl;
        cout << "Seleccione una opcion." << endl;
        cout << "1. Factura" << endl;
        cout << "2. Pagos" << endl;
        cout << "3. Salir" << endl << endl;
        cout << "Opcion: " << endl;
        cin >> option;

        if (option == 1) {
            cout << "Ingrese los datos para realizar la factura." << endl << endl;
            cout << "Numero de factura: " << endl;
            cin >> invoice_n;
            cout << "Codigo: " << endl;
            cin >> code;
            cout << "Descripcion: " << endl;
            cin >> description;
            cout << "Cantidad: " << endl;
            cin >> quantity_1;
            cout << "Precio: " << endl;
            cin >> price;
            //Impresion factura
            cout << "Factura realizada." << endl << endl;
            cout << "Factura #" << invoice_n << endl;
            cout << "Codigo: " << code << " " << "Descripcion: " << description << " " << "Cantidad: " << quantity_1 << endl;
        } else if (option == 2) {
            cout << "Ingrese los datos para realizar el pago." << endl << endl;
            cout << "Nombre: " << endl;
            cin >> name;
            cout << "Monto: " << endl;
            cin >> quantity_2;
            
            // Impresion pago
            cout << "Pago realizado." << endl;
            cout << "Nombre: " << name << endl;
            cout << "Monto: " << quantity_2 << endl;
            balance = balance - quantity_2;
            cout << "Total en la cuenta: " << balance << endl;

        } else if (option == 3) {
            cout << "Saliendo..." << endl;
        } else {
            cout << "Ingrese un numero valido" << endl;
        }
    } else {
        cout << "Usuario o contrasena incorrecta." << endl;
    }
    return 0;
}