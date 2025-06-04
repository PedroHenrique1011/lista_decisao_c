#include <iostream>
using namespace std;

int main()
{
		double x;
		double y;
		double z;
		
		cout << "digite o primeiro digito: ";
		cin >> x;
		cout << "digite o segundo digito: ";
		cin >> y;
		cout << "digite o terceiro digito: ";
		cin >> z;
		
		if(x > y && x > z)
		{
			cout << x << " <- maior valor" << endl;
			
			if (y > z)
			{
				cout << y << " <- segundo maior valor";
			}
			if (z > y)
			{
				cout << z << " <- segundo maior valor";
			}
		}
		if(y > z && y > x)
		{
			cout << y << " <- maior valor" << endl;
			
			if (x > z)
			{
				cout << x << " <- segundo maior valor";
			}
			if (z > x)
			{
				cout << z << " <- segundo maior valor";
			}
		}
		if(z > y && z > x)
		{
			cout << z << " <- maior valor" << endl;
			
			if (x > y)
			{
				cout << x << " <- segundo maior valor";
			}
			if (y > x)
			{
				cout << y << " <- segundo maior valor";
			}
		}
		else
		{
			cout << "valores iguais";
		}
}