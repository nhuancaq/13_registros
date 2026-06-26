#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombre;
    string DNI;
    int edad;
};

int main(){

    int n;
    persona Personas[100];

    float prom, suma = 0;
    int contador = 0;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++){

        getline(cin, Personas[i].nombre);
        getline(cin, Personas[i].DNI);

        cin >> Personas[i].edad;
        cin.ignore();

    }


    for(int i = 0; i < n; i++){

        if(Personas[i].edad > 50){
            contador++;
        }

        suma = suma + Personas[i].edad;
    }


    prom = suma / (float)n;


    cout << contador << endl;
    cout << prom << endl;


    for(int i = 0; i < n; i++){

        cout << Personas[i].nombre << endl;
        cout << Personas[i].DNI << endl;
        cout << Personas[i].edad << endl;

    }


    return 0;
}