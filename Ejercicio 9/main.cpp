#include <iostream>
using namespace std;

int longitud(char cadena[])
{
    int i=0;
    //RECORRIDO
    while(cadena[i]!='\0')
    {
        i++;
    }
    return i;
}
bool es_Palindrome(char cadena[],char copia[])
{
    int tamanio=longitud(cadena);
    for(int i=(tamanio-1);i>=0;i--)
    {
        //NOS ENCONTRAMOS EN LA PRIMERA POSICION DE LA COPIA EN LA CUAL TENEMOS LA ULTIMA LETRA DE LA CADENA
        copia[tamanio-1-i]=cadena[i];
    }
    //VALIDAR LA CADENA
    copia[longitud(cadena)]='\0';
    //COMPARACION DE CADENAS

    for(int i=0;i<tamanio;i++)
    {
        if(cadena[i]!=copia[i])
            return false;
        return true;
    }
}
int main()
{
    bool retorno;
    char cadena[100],copia[100];
    cout << "Ingrese palabra:" << endl;
    cin>>cadena;
    es_Palindrome(cadena,copia);
    retorno=es_Palindrome(cadena,copia);
    if(retorno==true)
    {
        cout<<"SI ES PALINDROMA."<<endl;
    }
    else
    {
        cout<<"NO ES PALINDROMA."<<endl;
    }
}
