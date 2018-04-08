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


void concatenarP(char* s,char* t)
{
    /*while(*s != '\0')
    {
        s++;//4
    }*/
    for(    ;*s!='\0';s++)
    {
        continue;
    }
    while(*t !='\0')
    {
        *s=*t;
        s++;
        t++;
    }
    *s=0;
}

int main()
{
    char* s = new char[5];
    char* t = new char[5];
    cout<<"¿Cadena 1?"<<endl; //Juan
    cin>>s;
    cout<<"¿Cadena 2"<<endl; //Peres
    cin>>t;
    concatenarP(s,t);
    cout<<"Cadena final:"<<s;
}

