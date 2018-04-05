#include <iostream>

using namespace std;
//Implementar una funcíon donde se muestre el paso por valor y referencia.

//PASO POR VALOR : se copia
int suma1(int n)
{
    return n+1;
}
//PASO POR REFERENCIA: se refiere
void incrementa1(int &n)
{
    n=n+1;
}
int main()
{
 int a=1,b=2,c;
 c=suma1(a);
 incrementa1(b);
 cout<<c<<" "<<b<<endl;
}
