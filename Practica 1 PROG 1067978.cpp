//
//  INTEC
//  Wilmer Florentino   
//   1067978
//  
//  
//

#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    string nombre;
    string cedula;
    double peso;
    double precioOriginal;
    double costoTransporte;
    
    cout<<"Digite el nombre completo: ";
    getline(cin, nombre); // se usa getline para que lea el espacio
    
    cout<<"Digite la cedula : ";
   getline(cin, cedula);
    
    cout<<"Digite el precio y el peso del articulo, separado por un espacio:";
    cin>> precioOriginal >> peso;
    
    
    if(peso<50){
        if(precioOriginal>75)
            costoTransporte =0;
        else if (precioOriginal>50 && precioOriginal<=75)
            costoTransporte=5;
        else if (precioOriginal>25 && precioOriginal<=50)
            costoTransporte =10;
        else
            costoTransporte =15;
    }else{
        costoTransporte = 25*(1-(pow(1.01,-9.21*peso)));
    }
    
    cout<<"----------------------------------------------------------+"<<endl;
    cout<<"    Cliente"<<"\t\t\t\t\tCedula "<<"\t\t\t\tPeso  "<<"\tPrecio"<<"\tcosto |"<<endl;
    cout<<"----------------------------------------------------------+"<<endl;
    
    cout<<'\t';
    
    cout<<nombre<<' ';
    cout<<'\t'<<'\t'<<'\t';
    cout<<cedula<<' ';
    cout<<'\t'<<'\t';
    cout<<peso<<' ';
    cout<<'\t'<<'\t';
    cout<<precioOriginal<<' ';
    cout<<'\t'<<'\t';
    cout<<costoTransporte<<' ';
    cout<<'\t'<<endl;
    
    
    return 0;
}
