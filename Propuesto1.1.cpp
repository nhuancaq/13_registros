#include <iostream>
#include <string>
using namespace std;

struct empleado{
    string nombre;
    string sexo;
    float sueldo;
};

int main(){

    int n;
    float max, min;
    int posicionMax, posicionMin;
    empleado emp[100];

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){

        getline(cin, emp[i].nombre);
        getline(cin, emp[i].sexo);
        cin >> emp[i].sueldo;
        cin.ignore();

    }

    max = emp[0].sueldo;
    posicionMax = 0;

    for(int i = 1; i < n; i++){

        if(emp[i].sueldo > max){

            max = emp[i].sueldo;
            posicionMax = i;

        }
    }

    min = emp[0].sueldo;
    posicionMin = 0;

    for(int i = 1; i < n; i++){

        if(emp[i].sueldo < min){

            min = emp[i].sueldo;
            posicionMin = i;

        }
    }

    cout << emp[posicionMax].nombre << " ; " << emp[posicionMax].sueldo << endl;
    cout << emp[posicionMin].nombre << " ; " << emp[posicionMin].sueldo << endl;

    return 0;
}