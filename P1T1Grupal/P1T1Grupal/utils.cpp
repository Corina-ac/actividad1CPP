#include <iostream>
#include <limits>
using namespace std;
double ObtenerNumero(const string & mensaje){
while(true){
    cout<< mensaje;
    string imput;
    cin>> imput;
    try{
        return stod(imput);
    }catch(...){
    cout<<"Error: ingrese un numero valido"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>:: max(), '\n');
    }
}
}

int ObtenerEntero(const string& mensaje){
while(true){
    cout<< mensaje;
    string imput;
    cin>> imput;
    try{
    return stoi(imput);
    }catch(...){
    cout<< "ERROR: debe ingresar un numero ENTERO valido"<<endl;
    cin.clear();
    cin.ignore(numeric_limits<streamsize>:: max(),'\n');
    }

}
}
