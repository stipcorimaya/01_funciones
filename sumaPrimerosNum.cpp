#include <iostream>

using namespace std;

int sumatoria(int n){
	if(n==1){
		return 1;
	}else{
		return n+sumatoria(n-1);
	}
}

int main(){
	int num,sum;
	cout<<"coloque la cantidad de los primeros numeros para la sumatoria: ";
	cin>>num;
	sum=sumatoria(num);
	cout<<"la sumatoria de los "<<num<<"primeros numeros es: "<<sum;
	return 0;
}