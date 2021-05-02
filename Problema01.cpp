#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//01

void crear(int *&v, int n)
{
    v=new int[n];
}

void llenarAleatorio(int *v, int n)
{
    cout<<"Llenando el vector ...\n";
    for(int i=0;i<n;i++)
    v[i]=1+rand()%10;
}

int sumaIterativa(int *v, int n)
{
	int suma=0;
    for(int i=0;i<n;i++)
    suma=suma+v[i];
    
    return suma;
}

int sumaRecursiva(int *v, int n)
{
	if(n==0){
		return v[0]; 
	}
    return v[n]+sumaRecursiva(v,n-1);
}

int main()
{
    int *Arreglo;
    crear(Arreglo,1000000);
    llenarAleatorio(Arreglo,1000000);
    cout<<sumaIterativa(Arreglo,1000000)<<endl;
 //   cout<<sumaRecursiva(Arreglo,1000000-1);
  
    return 0;
}

