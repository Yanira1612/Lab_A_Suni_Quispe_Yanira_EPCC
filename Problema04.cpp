#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//04

int tamanioIterativa(char x[]){
	int tamanio=0,i=0;
	
	while(x[i]!=NULL){
		tamanio++;
		i++;
	}	
	return tamanio;
}

int tamanioRecursivo(char x[],int tamanio){
	if(x[tamanio]==NULL)
	return tamanio;
	else
	tamanioRecursivo(x,tamanio+1);
}

int main()
{
	char cadena[20];
	cout<<"Llenando cadena\n";
	cin>>cadena;
	
	cout<<tamanioIterativa(cadena)<<endl;
	cout<<tamanioRecursivo(cadena,0);
}

