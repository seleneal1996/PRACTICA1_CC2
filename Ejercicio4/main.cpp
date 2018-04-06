#include <iostream>

using namespace std;
void multiplicacion(int m[2][2],int m2[2][2],int m3[2][2]);
int main()
{
    cout<<"MATRIZ 1"<<endl;
    int m[2][2]={{1,2},{3,4}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<" "<<m[i][j];
        }
        cout<<"\n";
    }
    cout<<"MATRIZ 2"<<endl;;
    int m2[2][2]={{1,9},{8,4}};
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<" "<<m2[i][j];
        }
        cout<<"\n";
    }

    //INICIALIZAR LA MATRIZ RESULTANTE
    int m3[2][2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            m3[i][j]=0;
        }
    }

    cout<<"LA MULTIPLICACION DE MATRIZ 1 CON MATRIZ 2 ES:"<<endl;
    multiplicacion(m,m2,m3);

}
void multiplicacion(int m[2][2],int m2[2][2],int m3[2][2])
{
    //REALIZANDO EL PRODUCTO DE MATRICES
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int z=0;z<2;z++)
            {
                m3[i][j] =m3[i][j]+m[i][z]*m2[z][j];
            }

        }
    }

    //MOSTRANDO LA MATRIZ RESULTANTE
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<" "<<m3[i][j];
        }
        cout<<"\n";
    }

}

