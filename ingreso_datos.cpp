// Realizar un pequeño sistema de bienvenida personalizado para el usuario leyendo el valor por teclado de su nombre

#include "iostream"
#include "string"

using namespace std;

int main() {
   
	cout << "Hola! Este es un ejemplo en C++" << "\n" << "Por favor ingrese su nombre:" << endl;
   
		char nombre;
		cin >> nombre;
   
	cout << "Bienvenido!" << nombre << ". Gracias por usar nuestra aplicación" << endl;
   
	return 0;
}
	

