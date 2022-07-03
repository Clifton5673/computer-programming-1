#include <iostream>
using namespace std;

int main() {
    int total_sum=0,sum_n1,sum_n2;      // Variables de suma 
    int total_sub=0,sub_n1,sub_n2;      // Variables de resta
    int total_mult=0,mult_n1,mult_n2;   // Variables de multiplicación
    int total_div=0,div_n1,div_n2;      // Variables de resta

    // Entradas de suma
    cout<<"Suma"<<endl;
    cout<<"Escribe el primer numero: "<<endl;
    cin>>sum_n1;
    cout<<"Escribe el segundo numero: "<<endl;
    cin>>sum_n2;
    total_sum=sum_n1+sum_n2; // Operación de suma
    cout<<"Total: "<<total_sum<<endl<<endl;

    // Entradas de resta
    cout<<"Resta"<<endl;
    cout<<"Escribe el primer numero: "<<endl;
    cin>>sub_n1;
    cout<<"Escribe el segundo numero: "<<endl;
    cin>>sub_n2;
    total_sub=sub_n1-sub_n2; // Operación de resta
    cout<<"Total: "<<total_sub<<endl<<endl;

    // Entradas de multiplicación
    cout<<"Multiplicación"<<endl;
    cout<<"Escribe el primer numero: "<<endl;
    cin>>mult_n1;
    cout<<"Escribe el segundo numero: "<<endl;
    cin>>mult_n2;
    total_mult=mult_n1*mult_n2; // Operación de multiplicación
    cout<<"Total: "<<total_mult<<endl<<endl;

    // Entradas de división
    cout<<"División"<<endl;
    cout<<"Escribe el primer numero: "<<endl;
    cin>>div_n1;
    cout<<"Escribe el segundo numero: "<<endl;
    cin>>div_n2;
    total_div=div_n1/div_n2; // Operación de división
    cout<<"Total: "<<total_div<<endl<<endl;

    return 0;
}
