#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//03

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

void quicksort(int *v, int primero, int ultimo){
	int central,i,j,pivote;
	central=(primero+ultimo)/2;//posición central del array
	
	pivote=v[central];
	i=primero;
	j=ultimo;
	
	do{
		//separar en dos partes el array
		while(v[i]<pivote) i++; //menores del pivote
		while(v[j]>pivote) j--; //mayores del pivote
		//intercambio de valores
		if(i<=j){
			int aux;
			aux=v[i];
			v[i]=v[j];
			v[j]=aux;
			i++;
			j--;
		}
		
	}while(i<=j);
	
	if(primero<j)
		quicksort(v,primero,j);
	if(i<ultimo)
		quicksort(v,i,ultimo);

}

int main()
{
    int *Arreglo;
    crear(Arreglo,1000000);
    llenarAleatorio(Arreglo,1000000);
    mostrar(Arreglo,1000000);
    quicksort(Arreglo,0,1000000-1);
    mostrar(Arreglo,1000000);
   
    return 0;
}

