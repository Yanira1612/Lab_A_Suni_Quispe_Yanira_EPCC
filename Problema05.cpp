#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

//05

int tamanioIterativa(char x[]){
	int tamanio=0,i=0;
	
	while(x[i]!=NULL){
		tamanio++;
		i++;
	}	
	return tamanio;
}

void concatenar(char a[],char b[]){
	int tamanio=tamanioIterativa(b);
	int i=0;
	while(a[i]!=NULL){
		b[tamanio]=a[i];
		i++;
		tamanio++;
	}		
	
}

int main()
{

	char A[10];
	cout<<"Llenando cadena A: ";
	cin.getline(A,10);
	
	char B[20];
	cout<<"Llenando cadena B: ";
	cin.getline(B,20);
	
	concatenar(A,B);
	cout<<B;
}
