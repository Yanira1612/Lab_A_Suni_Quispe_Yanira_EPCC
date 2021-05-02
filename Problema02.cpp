#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//02

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

void mostrar(int *v,int n)
{
    cout<<"Imprimiendo el vector ...\n";
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
}

void invierteIterativa(int *v, int n){
	int aux;
	for(int i=0;i<n/2;i++){
		aux=v[i];
		v[i]=v[n-i-1];
		v[n-i-1]=aux;
	}	
}

void invierteRecursiva(int *v,int n,int n2,int i){
	if(n2-1==i){
		int aux=v[i];
		v[i]=v[n-i-1];
		v[n-i-1]=aux;
	}
	else{
		int aux=v[i];
		v[i]=v[n-i-1];
		v[n-i-1]=aux;
		invierteRecursiva(v,n,n2,i+1);
	}
}


int main()
{
    int *Arreglo;
    crear(Arreglo,1000000);
    llenarAleatorio(Arreglo,1000000);
    mostrar(Arreglo,1000000);
    invierteIterativa(Arreglo,1000000);
    mostrar(Arreglo,1000000);
    invierteRecursiva(Arreglo,1000000,1000000/2,0);
    mostrar(Arreglo,1000000);
 
    return 0;
}

