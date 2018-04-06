#include <iostream>
using namespace std;
int longitud(char texto[])
{
    int i=0,j=0;
    //RECCORRIDO
    while(texto[i]!='\0')
    {
        i++;
    }
    //ELIMINAMOS ESPACIOS
    while(texto[j]!='\0')
    {
        if(texto[j]=='\n')
            i--;
        j++;
    }
    return i;
}
int main()
{
    char texto[100];
    cout<<"¿Texto?"<<endl;
    cin>>texto;
    cout<<"Su longitud es:"<<longitud(texto);
}
