// Sistema de logueo con if-else

#include "iostream"
#include "string"
#include "stdlib.h"

using namespace std;

int main()
{
	char password = "";
	cout << "Ingrese la clave: ";
	cin >> password;
	if(password == "1234")
	{
		cout << "Clave correcta. Bienvenido";
	}
	else
	{
		cout << "Clave incorrecta.";
	}

cout << " ";
	system("PAUSE");
}
	
	
	
