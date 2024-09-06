#include <iostream>

using namespace std;

int factorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*factorial(n-1);
	}
}

int main(){
	int num,fact;
	cout<<"coloque un numero para el factorial: ";
	cin>>num;
	fact=factorial(num);
	cout<<"el factorial del numero que coloco es: "<<fact;
	return 0;
}