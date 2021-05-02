#include<iostream>
#include<ctime>
#include<cstdlib>
#include<string.h>

using namespace std;

//06

void ordenar(char x[][20],int tamanio){
	char aux[20];
	int j;
	for(int i=0;i<tamanio;i++){
		for(int j=i;j<tamanio;j++){
			if(strcmp(x[i],x[j])>0){
				strcpy(aux,x[i]);
				strcpy(x[i],x[j]);
				strcpy(x[j],aux);
			}
		}
	}
	
	for(int i=0;i<tamanio;i++)
	cout<<x[i]<<endl;
}


int main(){
	
	int cantidad;
	
	cout<<"Cantidad de cadenas: ";
	cin>>cantidad;
	
	char palabras[cantidad][20];
	for(int i=0;i<cantidad;i++){
		cout<<"Palabra "<<i<<": ";
		cin>>palabras[i];
	}
	
	cout<<"Ordenado:\n";
	ordenar(palabras,cantidad);
}
