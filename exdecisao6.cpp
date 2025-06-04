#include <iostream>
using namespace std;

int main(){
	
	double a;
	double p;
	double IMC;
	
	cout << "digite a altura da pessoa (m): ";
	cin >> a;
	cout << "digite o peso da pessoa (kg): ";
	cin >> p;
	
	IMC = p/(a*a);
	cout << "resultado: " << IMC << endl;
	
	if( IMC < 20)
	{
		cout << "abaixo do peso ideal";
	}
	if( IMC >= 20 || IMC < 25)
	{
		cout << "peso ideal";
	}
	if( IMC > 25)
	{
		cout << "acima do peso ideal";
	}
}