#include <iostream>
using namespace std;

int main(){
	
	double b;
	double a;
	double area;
	
	cout << "digite o valor da base do retangulo: ";
	cin >> b;
	cout << "digite o valor da altura do retangulo: ";
	cin >> a;
	
	area = a*b;
	cout << "tamanho do terreno retangular (metros quadrados): " << area << endl;
	
	if (area > 100)
	{
		cout << "terreno grande";
	}
}