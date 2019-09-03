#include <iostream>
using namespace std;

struct numeroComplejo {
    int real;
    int imaginario;
};

numeroComplejo multiplicacion(numeroComplejo x, numeroComplejo y){
    numeroComplejo ans;

    //(a*c + b*d)
    ans.real = (x.real*y.real + x.imaginario*y.imaginario);

    //(a*d + c*d)
    ans.imaginario = (x.real*y.imaginario + y.real*y.imaginario);
    return ans;
}

int main() {
    numeroComplejo n1, n2, n3;
    cout<<"Ingrese el primer numero complejo: "<<endl;
    cout<<"ingrese la parte real: ";
    cin>>n1.real;
    cout<<endl;

    cout<<"ingrese la parte imaginaria: ";
    cin>>n1.imaginario;
    cout<<endl;

    cout<<"Ingrese el segundo numero complejo: "<<endl;
    cout<<"ingrese la parte real: ";
    cin>>n2.real;
    cout<<endl;

    cout<<"ingrese la parte imaginaria: ";
    cin>>n2.imaginario;
    cout<<endl;

    n3 = multiplicacion(n1,n2);
    cout<<"Respuesta: "<<n3.real<<"+"<<n3.imaginario<<"i";
    return 0;
}