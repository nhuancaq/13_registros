#include <iostream>
#include <string>
using namespace std;

struct atleta{
    string nombre;
    string pais;
    string disciplina;
    int medallas;
};

int main(){

    int n;
    string paisBuscar;

    atleta Atletas[100];

    cout << "Ingrese el numero de atletas: ";
    cin >> n;
    cin.ignore();


    for(int i = 0; i < n; i++){

        cout << "\nAtleta " << i + 1 << endl;

        cout << "Nombre: ";
        getline(cin, Atletas[i].nombre);

        cout << "Pais: ";
        getline(cin, Atletas[i].pais);

        cout << "Disciplina: ";
        getline(cin, Atletas[i].disciplina);

        cout << "Numero de medallas: ";
        cin >> Atletas[i].medallas;
        cin.ignore();

    }


    cout << "\nIngrese el pais a buscar: \n";
    getline(cin, paisBuscar);


    cout << "\nAtletas del pais \n" << paisBuscar << ":" << endl;

    bool encontrado = false;

    for(int i = 0; i < n; i++){

        if(Atletas[i].pais == paisBuscar){

            cout << "\nNombre: \n" << Atletas[i].nombre << endl;
            cout << "Disciplina: " << Atletas[i].disciplina << endl;
            cout << "Medallas: " << Atletas[i].medallas << endl;

            encontrado = true;
        }
    }


    if(!encontrado){

        cout << "No se encontraron atletas de ese pais." << endl;

    }


    int mayor = Atletas[0].medallas;
    int posicionMayor = 0;


    for(int i = 1; i < n; i++){

        if(Atletas[i].medallas > mayor){

            mayor = Atletas[i].medallas;
            posicionMayor = i;

        }

    }


    cout << "\nAtleta con mayor numero de medallas:\n" << endl;
    cout << "Nombre: " << Atletas[posicionMayor].nombre << endl;
    cout << "Pais: " << Atletas[posicionMayor].pais << endl;
    cout << "Disciplina: " << Atletas[posicionMayor].disciplina << endl;
    cout << "Medallas: " << Atletas[posicionMayor].medallas << endl;


    return 0;
}