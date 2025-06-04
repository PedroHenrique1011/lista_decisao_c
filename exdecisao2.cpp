#include <iostream>
using namespace std;

int main(){
	double x;
	double y;
	
	cout << "digite o primeiro valor: ";
	cin >> x;
	cout << "digite o segundo valor: ";
	cin >> y;
	
	if(x > y)
		cout << "maior valor: " << x;
	
	if(x < y)
		cout << "maior valor: " << y;
		
	else
		cout << "os valores são iguais";
}