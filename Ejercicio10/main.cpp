#include <iostream>

using namespace std;
//CADENA NECESITA DE UN FIN DE CADENA '\0'
int longitud(char *cadena)
{
    int valor= 0;
    for(int i=0;cadena[i]!='\0';i++)
    {
        valor=valor+1;
    }
    return valor;
}
// CREACION DE LA FUNCION convertir_entero
int convertir_entero(char *cadena)
{
    int potencias[9]={1,10,100,1000,10000,100000,1000000,10000000,100000000};
    int valor=0;
    int lon= longitud(cadena);

    for(int i=lon-1;i>=0;i--)
    {
        valor=valor+(cadena[i]-'0') * potencias[lon-i-1];
    }
    return valor;
}

int main()
{
    char *cadena="19"; //NUESTRA CADENA TIENE
    int numero2;
    int num= convertir_entero(cadena);
    cout<<"El numero es:"<<num<<endl;

    //COMPROBACION

    cout<<"Escriba un numero:"<<endl;
    cin>>numero2;
    cout<<"La suma de:"<<num<<"+"<<numero2<<"es:"<<num +numero2;

}
