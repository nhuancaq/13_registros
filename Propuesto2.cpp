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

    cout<<"Ingrese el numero de personas:"<<endl;
    cin>>n;
    cin.ignore();

    for(int i=0;i<n;i++){

        cout<<"\nPersona "<<i+1<<endl;

        cout<<"Nombre: ";
        getline(cin, Personas[i].nombre);

        cout<<"DNI: ";
        getline(cin, Personas[i].DNI);

        cout<<"Edad: ";
        cin>>Personas[i].edad;
        cin.ignore();
    }


    for(int i=0;i<n;i++){

        if(Personas[i].edad > 50){
            contador++;
        }

        suma = suma + Personas[i].edad;
    }


    prom = suma/(float)n;


    cout<<"\nCantidad de personas mayores de 50: "<<contador<<endl;
    cout<<"Promedio de edades: "<<prom<<endl;


    cout<<"\nLista de personas:"<<endl;

    for(int i=0;i<n;i++){

        cout<<"Nombre: "<<Personas[i].nombre<<endl;
        cout<<"DNI: "<<Personas[i].DNI<<endl;
        cout<<"Edad: "<<Personas[i].edad<<endl;
        cout<<endl;

    }


    return 0;
}