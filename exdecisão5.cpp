#include <iostream>
using namespace std;

int main(){
	
	double a;
	double b;
	double area;
	
	cout << "base do triangulo: ";
	cin >> b;
	cout << "altura do triangulo: ";
	cin >> a;
	
	area = (a*b)/2;
	cout << "a area do retangulo (metros quadrados): " << area << endl;
	
	if (area >= 100){
		cout << "terreno grande";
	}
	else
	{
		cout << "terreno pequeno";
	}
}