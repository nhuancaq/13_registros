#include <iostream>
#include <string> 

using namespace std;

struct empleado {
    string numero;
    string nombre;
    int venta; 
    int  suma;
    float salario;
};

int main () {
    int n;
    empleado emp[100]; 
    
    cout << "Ingrese la cantidad de empleados: " << endl;
    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cout<<"  Empleados  "<<i+1<<endl;
        cout << "Número del empleado: ";
        getline(cin, emp[i].numero);

        cout << "Nombre: ";
        cin >> emp[i].nombre;
        cin.ignore();
    }

    cout << "\nIngreso de las ventas:\n";
    for(int i = 0; i < n; i++) {
        cout << "\n Ingrese la venta \n"<<emp[i].nombre<<endl;
        cin>> emp[i].venta;
        
    }

    return 0;
}