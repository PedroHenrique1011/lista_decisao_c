#include <iostream>
#include <math.h>
using namespace std;

int main(){
	double a;
	double b;
	double c;
	
	double hip2;
	double catA2;
	double catO2;
	
	cout << "informe o valor do cateto oposto: ";
	cin >> a;
	cout << "informe o valor do cateto adjacente: ";
	cin >> b;
	cout << "informe o valor da hipotenusa: ";
	cin >> c;
	
catA2= b*b;
catO2= a*a;
hip2= c*c;
	
	if (catA2+catO2 == hip2){
		cout << "forma um triangulo retangulo" ;
	}
	else {
		cout << "nao forma um triangulo retangulo";
	}
}