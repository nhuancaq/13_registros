#include <iostream>
#include <string>
using namespace std;

struct persona{
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main(){

    int n;
    int mesBuscar;

    persona Personas[100];

    cout << "Ingrese el numero de personas: ";
    cin >> n;
    cin.ignore();


    for(int i = 0; i < n; i++){

        cout << "  Persona " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, Personas[i].nombre);

        cout << "Dia de nacimiento: ";
        cin >> Personas[i].dia;

        cout << "Mes de nacimiento: ";
        cin >> Personas[i].mes;

        cout << "Anio de nacimiento: ";
        cin >> Personas[i].anio;

        cin.ignore();
    }


    do{

        cout << "\nIngrese un mes para buscar cumpleaños  : ";
        cin >> mesBuscar;


        if(mesBuscar != 0){

            cout << "\nPersonas que cumplen años en el mes " << mesBuscar << ":" << endl;

            bool encontrado = false;

            for(int i = 0; i < n; i++){

                if(Personas[i].mes == mesBuscar){

                    cout << "Nombre: " << Personas[i].nombre << endl;
                    cout << "Fecha: " 
                         << Personas[i].dia << "/" 
                         << Personas[i].mes << "/" 
                         << Personas[i].anio << endl;

                    encontrado = true;
                }
            }

            if(!encontrado){
                cout << "No hay personas que cumplan años en ese mes." << endl;
            }

        }


    }while(mesBuscar != 0);


    cout << "\nPrograma finalizado." << endl;


    return 0;
}