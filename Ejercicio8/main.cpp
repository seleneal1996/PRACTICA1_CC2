#include <iostream>

using namespace std;
void intercambio(char* cadena, int pos1,int pos2)
{
    char* inicio = cadena;
    char* temp1;
    char* temp2;
    char tempC;

    for(int i=0;i<pos1;i++){
        inicio++;
    }
    temp1 = inicio;
    inicio = cadena;

    for(int i=0;i<pos2;i++){
        inicio++;
    }
    temp2=inicio;

    tempC = *temp1;
    *temp1 = *temp2;
    *temp2 = tempC;

}
void intercambio_(char cadena[],int pos1,int pos2)
{
    char temp=cadena[pos1];
    cadena[pos1]=cadena[pos2];
    cadena[pos2]= temp;

}
int main()
{
    int pos1,pos2;
    char* arr = new char[50];
    cout<<"¿PALABRA?"<<endl;
    cin>>arr;
    cout<<"POSICION1:"<<endl;
    cin>>pos1;
    cout<<"POSICION2:"<<endl;
    cin>>pos2;
    intercambio_(arr,pos1,pos2);
    cout << arr << endl;
    return 0;
}
