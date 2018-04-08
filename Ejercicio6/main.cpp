#include <iostream>
using namespace std;
int longitud(char cadena[])
{
    int i=0;
    //RECCORRIDO
    while(cadena[i]!='\0')
    {
        i++;
    }
    return i;
}
int longitudpe(char *cadena)
{
    int cant=0;
    for( ;*cadena!='\0';cadena++)
    {
        cant ++;
    }
    return cant;
}
void copiarpe(char *s,char *t)
{
    char* stemp=s;
    char* ttemp=t;
    int tam=longitudpe(s);
    int tam2=longitudpe(t);
    char camb;
    int i=0;
    if(tam>tam2)
    {
        for(i=0;i<tam2;i++)
        {
            camb=*t;
            *t=*s;
            *s=camb;
            t++;
            s++;
        }
        s=stemp;
        t=ttemp;
    }
    else
    {
        cout<<"GG LA VIDA , NO SE PUEDE."<<endl;
    }

}
//*******************************
void copiar(char s[],char t[])
{
    int var=longitud(s);
    int var2=longitud(t);
    char temp;
    int i=0;
    if(var>var2)
    {

        for(i=0;i<var2;i++)
        {
            temp=t[i];
            t[i]=s[i];
            s[i]=temp;
        }
    }
    else
    {
        cout<<"NO SE PUEDE."<<endl;
    }
}
//*********************************
int main()
{
    char* s=new char[100];
    char* t=new char[100];
    cout<<"¿Cadena?"<<endl;
    cin>>s;
    cout<<"¿Cadena?"<<endl;
    cin>>t;
    copiar(s,t);
    cout<<s<<endl;
}
