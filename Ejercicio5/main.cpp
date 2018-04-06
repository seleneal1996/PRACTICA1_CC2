#include <iostream>

using namespace std;
int largo(char *cad);
int main()
{
    char cad;
    cout<<"Ingrese una palabra:"<< endl;
    cin>>cad;
    cout<<"La palabra tiene:"<<largo(cad)<<"caracteres."<<endl;
}
int largo(char *cad)
{
    int i=0;
    while(*(cad+i)!='\0')
        i++;
    return i;
}
