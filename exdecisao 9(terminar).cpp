#include <iostream>
using namespace std;

int main(){
	char genero;
	double peso;
	double altura;
	double R;
	
	cout << "informe  seu genero, (f) para feminino e (m) para masculino: ";
	cin >> genero;
	cout << "informe seu peso: ";
	cin >> peso;
	cout << "informe sua altura: ";
	cin >> altura;
	
R = peso/(altura*altura)

if (genero == m){
	if (R < 20){ cout << "abaixo do peso ideal";}
		if (20 <= R && R < 25) {"esta no peso ideal";}
			if (R => 25) {"acima do peso";}
			
}
}