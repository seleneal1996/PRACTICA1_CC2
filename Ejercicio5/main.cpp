#include <iostream>
using namespace std;
int longitud(char texto[])
{
    int i=0;
    //RECCORRIDO
    while(texto[i]!='\0')
    {
        i++;
    }
    return i;
}

int longitud_p(char* texto)
{
    int cant = 0;
    while(*texto!=0){
        cant++;
        texto++;
    }
    return cant;
}

int main()
{
    char texto[100];
    cout<<"¿Texto?"<<endl;
    cin>>texto;
    cout<<"\n(ARREGLOS)Su longitud es:"<<longitud_p(texto);
    cout<<"\n(PUNTEROS)Su longitud es:"<<longitud(texto);
}
