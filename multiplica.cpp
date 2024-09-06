#include<iostream>

using namespace std;

int multiplicacion(int a,int b){
	if(b==1){
		return a;
	}else{
		return a+multiplicacion(a,b-1);
	}
}
int main(){
	int num1,num2, prod;
	cout<<"coloque el primer numero para la multiplicacion: ";
	cin>>num1;
	cout<<"coloque el segundo numero para la multiplicacion: ";
	cin>>num2;
	prod=multiplicacion(num1,num2);
	cout<<"el producto de los 2 numero es: "<<prod;
	return 0;
}