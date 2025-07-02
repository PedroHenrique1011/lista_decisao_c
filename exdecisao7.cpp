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
	
	if (x>c)
		if(y>a)
			if(z>b)
			{
				cout << "triangulo existe" << endl;}
				
//-----------------------------------------------------
				 
	if (a == b)
		if (b == c)
			if (a == c){
				cout << "triangulo equilatero";}
				
//-----------------------------------------------------
				
	if (a != b)
		if (b != c)
			if (a != c){
				cout << "triangulo escaleno";}

//-----------------------------------------------------

	if (a != b && a == c){
				cout << "triangulo isoceles";}
				
	if (b != c && b == a){
				cout << "triangulo isoceles";}

	if (c != a && c == b){
				cout << "triangulo isoceles";}

//-----------------------------------------------------
}