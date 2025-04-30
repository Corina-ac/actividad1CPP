#include <iostream>
#include "utils.h"
using namespace std;
void FizzBuzz(){
int num= ObtenerEntero("ingrese un numero ENTERO");
for(int i=1; i<= num; i++){
    if(i %15== 0){
        cout<< "FizzBuzz"<<endl;
    }else if (i % 3== 0){
        cout<<"Fizz"<<endl;
    }else if(i % 5== 0){
        cout<<"Buzz"<<endl;
    }else {
        cout<< i<< endl;
    }
}
}
