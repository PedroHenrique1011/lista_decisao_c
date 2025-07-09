#include <iostream>
using namespace std;

int main(){
	double notaP1;
	double notaP2;
	double media;
	
	cout << "digite a primeira nota: ";
	cin >> notaP1;
	cout << "digite a segunda nota: ";
	cin >> notaP2;
	
	media = (notaP1+notaP2)/3;
	
	if (media >= 5){ cout << "aluno aprovado" << endl << "nota final: " << media;}
	else {cout << "aluno reprovado";}
}