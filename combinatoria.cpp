#include <iostream>

using namespace std;

int combinatoria(int a,int b){
	if(a==b){
		return 1;
	}else{
		if(b==1){
			return a;
		}else{
			return combinatoria(a-1,b-1) + combinatoria(a-1,b);
		}
	}
}

int main(){
	int num1, num2, combin;
	cout<<"colocar el primer numero de la combinatoria: ";
	cin>>num1;
	cout<<"colocar el segundo numero de la combinatoria: ";
	cin>>num2;
	combin=combinatoria(num1,num2);
	cout<<"la combinatoria de los numeros dados es: "<<combin;
	return 0;
}