#include <iostream>

using namespace std;

//QuickSort : necesita una tecnica para partir en 2 segmentos un arreglo
//Pivote: Valor del medio de la lista de elementos.
void QuickSort(int a[],int,int);
int main()
{
    int tam,a[100];
    cout<<"¿DIMENSION DEL ARREGLO?"<<endl;
    cin>>tam;
    for(int i=0;i<tam;i++)
        {
        cout<<"a["<<i+1<<"]=";
        cin>>a[i];
        }
    QuickSort(a,0,tam-1);
    cout<<"ORDENADO POR QUICKSORT:"<<endl;
    for(int i=0;i<tam;i++)
    {
        cout<<"\t"<<a[i];
    }
    //QuickSort(a,0,tam-1);
}
void QuickSort(int a[],int primero,int ultimo)
{
    int central,pivote,i,j;
    //CAPTUTA DE LA POSICION CENTRAL DEL ARREGLO
    central=(primero+ultimo)/2;
    // CAPTURA DEL VALOR MEDIO DEL ARREGLO
    pivote=a[central];
    //SIRVE PARA SEPARAR LOS SEGMENTOS
    i=primero;
    j=ultimo;
    //RECORRIDO
    do
    {
        //SEPARANDO EN DOS PARTES EL ARREGLO
        while(a[i]<pivote); //ESTOY SEPARANDO LOS VALORES MENORES AL PIVOTE
            i++;
        while(a[j]>pivote); //ESTOY SEPARANDO LOS VALORES MAYORES AL PIVOTE
            j--;
        if(i<=j)
        {
            //INTERCAMBIANDO LOS VALORES
            int temporal;
            temporal=a[i];
            a[i]=a[j];
            a[j]=temporal;
            i++;
            j--;
        }

    }
    while(i<=j);

    //SI EL PRIMERO DE LA POSICION VA A SER MENOR DE LA POSICION J ENTONCES:
    if(primero<j)
        QuickSort(a,primero,j);
    //SI LA POCION I VA SER MENOR QUE EL ULTIMO
    if(i<ultimo)
        QuickSort(a,i,ultimo);
}
