#include <iostream>
#include <stdlib.h>
using namespace std;

void quickSort(int a[],int primero,int ultimo)
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
        while(a[i]<pivote)
        i++;; //ESTOY SEPARANDO LOS VALORES MENORES AL PIVOTE
        while(a[j]>pivote)
        j--;; //ESTOY SEPARANDO LOS VALORES MAYORES AL PIVOTE
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
        quickSort(a,primero,j);
    //SI LA POCION I VA SER MENOR QUE EL ULTIMO
    if(i<ultimo)
        quickSort(a,i,ultimo);

}

void merge_(int a[],int aux[], int inicio, int mitad,int fin)
{
    //Mezclar las dos sublistas en una sola lista ordenada.

            int inicio_end,tam,aux_pos;
            mitad=(inicio+fin)/2;
            inicio_end=mitad-1;
            aux_pos=inicio;
            tam=fin-inicio+1;

            while(inicio <=inicio_end && mitad<=fin)
            {
                if(a[inicio]<=a[mitad])
                {
                    aux[aux_pos]=a[inicio];
                    aux_pos = aux_pos+1;
                    inicio=inicio+1;
                }
                else
                {
                    aux[aux_pos]=a[mitad];
                    aux_pos=aux_pos+1;
                    mitad=mitad+1;
                }

            }

            while(inicio<=inicio_end)
            {
                aux[aux_pos]=a[inicio];
                inicio=inicio+1;
                aux_pos=aux_pos+1;
            }

            while(mitad<=fin)
            {
                aux[aux_pos]=a[mitad];
                mitad=mitad+1;
                aux_pos=aux_pos+1;
            }

            for(int i=0;i<tam;i++)
            {
                a[fin]=aux[fin];
                fin=fin-1;
            }


}
void mergeSort(int a[], int aux[],int inicio,int fin)
{
        int mitad;
        if(fin>inicio)
        {
            //Dividir la ,lista desordenada en dos sublistas de aproximadamente la mitad del tamaño.
            mitad=(fin+inicio)/2;
            //Ordenar cada sublista recursivamente aplicando el ordenamiento por mezcla.
            mergeSort(a,aux,inicio,mitad);
            mergeSort(a,aux,mitad+1,fin);
            merge_(a,aux,inicio,mitad+1,fin);

            for(int i=inicio;i<=fin;i++){
                cout<<a[i]<<" ";
            }
            cout<<"----"<<inicio<<" "<<fin<<endl;
        }
}

int main()
{
 int opcion,a[100],tam,aux[100];
    cout<<"¿OPCION?"<<endl;
    cout<<"1).QuickSort"<<endl;
    cout<<"2).MergeSort"<<endl;
    cout<<"3).InsertionSort"<<endl;
    cin>>opcion;
    cout<<"¿Tamaño del arreglo?"<<endl;
    cin>>tam;
    system("clear");
    //RELLENAR ARREGLO***********
    for(int i=0;i<tam;i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    //MOSTRANDO SU ARREGLO*******
    for(int i=0;i<tam;i++)
    {
        cout<<a[i]<<"   ";
    }
    //IMPLEMENTACION DEL MENU DE OPCIONES*********
     if(opcion==1||opcion==2||opcion==3||opcion==4)
     {
        if(opcion==1)
        {
            system("clear");
            quickSort(a,0,tam-1);
            cout<<"\n**ORDENADO POR QUICKSORT**"<<endl;
            for(int i=0;i<tam;i++)
            {
                cout<<a[i]<<"   ";
            }
            cout<<endl;
        }
        else if(opcion==2)
        {
            system("clear");
            mergeSort(a,aux,0,tam-1);
            cout<<"\n**ORDENADO POR MERGESORT**"<<endl;
            for(int i=0;i<tam;i++)
            {
                cout<<a[i]<<"   ";
            }
            cout<<endl;
        }
        else if(opcion==3)
        {
            system("clear");
            //insertionSort(a,tam);
            //Consta de tomar uno por uno los elementos de un arreglo y recorrerlo hacia su posición con respecto a los anteriormente ordenados.

            int i,pos,auxi;
            for(i=0;i<tam;i++)
            {
                pos=i;
                auxi=a[i];

                while((pos>0)&&(a[pos-1]>auxi)) // numero a su izq
                {
                    //INTERCAMBIO
                    a[pos]=a[pos-1];
                    pos--; //La posicion va disminuyendo
                }
                a[pos]=auxi;
                cout<<"FLAG"<<auxi<<"-";
            }

            cout<<"\n**ORDENADO POR INSERTION_SORT**"<<endl;
            for(int i=0;i<tam;i++)
            {
                cout<<a[i]<<"   ";
            }
            cout<<endl;
            //DE MAYOR A MENOR :V
            for(int i=tam-1;i>=0;i--)
            {
                cout<<a[i]<<"   ";
            }
        }
    }
    else
    {
    cout << "¡¡¡Entrada no valida!!!" << endl << "Intente de nuevo" << endl;
    }

}
