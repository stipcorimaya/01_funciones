#include<iostream>

using namespace std;

int sumaElementos(int a[],int b){
	if(b==1){
		return a[b];
	}else{
		return a[b]+sumaElementos(a,b-1);
	}
}

int main(){
	int arreglo[5];
	int sum;
	cout<<"colocar 5 numeros"<<endl;
	for(int i=0;i<5;i++){
		cout<<"num"<<i+1<<" = ";
		cin>>arreglo[i];
	}
	sum= sumaElementos(arreglo,5);
	cout<<"la sumatoria de los 5 numeros colocados es: "<<sum;
	return 0;
}