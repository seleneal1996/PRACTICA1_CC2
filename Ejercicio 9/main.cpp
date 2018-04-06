#include <iostream>
#include<string.h>
#include<stdbool.h>
using namespace std;
bool esPalindroma(char cadena[],char copia[]);
int main()
{
    bool retorno=0;
    char cadena[100],copia[100];
    cout << "Ingrese palabra:" << endl;
    cin>>cadena;
    esPalindroma(cadena,copia);
    retorno=esPalindroma(cadena,copia);
    if(retorno=esPalindroma(cadena,copia)==true)
    {
        cout<<"SI ES PALINDROMA."<<endl;
    }
    else
    {
        cout<<"NO ES PALINDROMA."<<endl;
    }
}
bool esPalindroma(char cadena[100],char copia[100])
{

     for(int i=(strlen(cadena)-1);i>=0;i--)
    {
        copia[strlen(cadena)-1-i]=cadena[i]; //NOS ENCONTRAMOS EN LA PRIMERA POSICION DE LA COPIA EN LA CUAL TENEMOS LA ULTIMA LETRA DE LA CADENA
    }
    copia[strlen(cadena)]='\0'; //VALIDAR LA CADENA
    //COMPARACION DE CADENAS
    if(strcmp(cadena,copia)==0)
    {
        return true;
    }
    return false;
}
