#include <iostream>
#include <stdio.h>

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
    int potencias[5]={1,10,100,1000,10000};
    int valor=0;
    int lon= longitud(cadena);

    for(int i=lon-1;i>=0;i--)
    {
        valor=valor+(cadena[i]-'0') * potencias[lon-i-1];
    }
    return valor;
}
float convertir_float(char* cadena){
    bool flagDecimal =false;
    int i=0;
    int lon = longitud(cadena);
    float resultado=0;

    for(i=0;i<lon;i++){
        if(cadena[i]=='.'){
            flagDecimal=true;
            i++;
            break;
        }
        resultado *=10;
        resultado += cadena[i]-'0';
    }

    if(flagDecimal){
        float decimal=10;
        for(int j=i; j<lon; j++){
            resultado+=(cadena[j]-'0')/decimal;
            decimal*=10;
        }
    }

    return resultado;
}

int main()
{
    char* cadena=new char[100]; //NUESTRA CADENA TIENE
    int numero2;
    cin>>cadena;
    cout<<cadena<<endl;
    float num= convertir_float(cadena);
    cout<<"El numero es:"<<num<<endl;
    //cout<<"El numero es:"<<num*10000<<endl;
    printf (" %4.4f \n", num);

    //COMPROBACION

    cout<<"Escriba un numero:"<<endl;
    cin>>numero2;
    cout<<"La suma de:"<<num<<"+"<<numero2<<"es:"<<num +numero2;
}
