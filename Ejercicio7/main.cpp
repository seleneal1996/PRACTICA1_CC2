#include <iostream>

using namespace std;

void concatenar(char a[],char b[],char c[])
{
    int i=0,j=0;
    while(a[i]!='\0')
    {
        //Guardamos en c lo que hay en a en posicion i=0;
        c[i]=a[i];
        i++;//4
    }
    c[i]=' ';
    i++;//5
    while(b[j]!='\0')
    {
        c[i+j]=b[j];
        j++;
    }
    c[i+j]='\0';
}
int main()
{
    char a[20],b[20],c[40];
    cout<<"¿Cadena 1?"<<endl; //Juan
    cin>>a;
    cout<<"¿Cadena 2"<<endl; //Peres
    cin>>b;
    concatenar(a,b,c);
    cout<<"Cadena final:"<<c;
}

