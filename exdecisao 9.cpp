#include <iostream>
using namespace std;

int main(){
	double genero;
	double peso;
	double altura;
	double R;
	
	cout << "informe  seu genero, (1) para feminino e (2) para masculino: ";
	cin >> genero;
	cout << "informe seu peso: ";
	cin >> peso;
	cout << "informe sua altura: ";
	cin >> altura;
	
//======================	

R = peso/(altura*altura);

//======================

if (genero == 2){ cout << "masculino" << endl;
	if (R < 20){ cout << "abaixo do peso ideal";}
		if (R >= 20 && R < 25) { cout << "peso ideal";}
			if (R >= 25) { cout << "acima do peso";}
}

//======================
				
if (genero == 1){ cout << "feminino" << endl;
	if (R < 19){ cout << "abaixo do peso ideal";}
		if (R >= 19 && R < 24) { cout << "peso ideal";}
			if (R >= 24) { cout << "acima do peso";}
}
}
