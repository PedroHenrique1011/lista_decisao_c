#include <iostream>
using namespace std;

int main(){
	double a;
	double b;
	double c;
	
	double x;
	double y;
	double z;

	cout << "digite o valor do primeiro lado: ";
	cin >> a;
	cout << "digite o valor do segundo lado: ";
	cin >> b;
	cout << "digite o valor do terceiro lado: ";
	cin >> c;
	
	x = a+b;
	y = b+c;
	z = c+a;
	
	if (a = b && b = c && c = a){
		cout << "triangulo equilatero"
	} 
	
	if (x < y || x < z || y < z){
		cout << "desclassificado como triangulo"
	}
}