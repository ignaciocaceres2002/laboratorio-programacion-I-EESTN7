 // Hacer una calculadora con una funcion y utilizando switch

#include <iostream>

using namespace std;


int suma (int n1, int n2)
{

	int suma;
	suma=n1+n2;
	return suma;
}

int resta (int n1, int n2)
{
	int resta;
	resta=n1-n2;
	return resta;
}

int mult (int n1, int n2)
{
	int mult ;
	mult =n1*n2;
	return mult ;
}

float div (float n1, float n2)
{
	int div;
	div=n1/n2;
	return div;
}

	main() {

		char operacion, respuesta='si';
		int resultado,num1,num2;

		while (respuesta='si') {

			cout<<"Que tipo de operacion desea realizar?"<<endl;
			cout<<endl;
			cout<<"Para suma: + "<<endl<<"Para resta: - "<<endl<<"Para multiplicacion: * "<<endl<<"Para division: / "<<endl;
			cin>>operacion;
			
			cout<<"ingrese un numero"<<endl;
			cin>>num1;
			cout<<"ingrese un numero"<<endl;
			cin>>num2;
			
			switch (operacion) {

				case '+':{
					resultado=suma(num1,num2);
					cout<<"El resultado de la suma es: "<<resultado<<endl;
					break;
				}
				
				case '-': {
					
					resultado=resta(num1,num2);
					cout<<"El resultado de la resta es: "<<resultado<<endl;
					break;
				}
				case '*': {
					resultado=mult(num1,num2);
					cout<<"El resultado de la multiplicacion es: "<<resultado<<endl;
					break;
				}
				case '/':{
					resultado=div(num1,num2);
					cout<<"El resultado de la division es: "<<resultado<<endl;
					break;
				}
		
				cout<<endl;

				cout<<"Desea continuar?";
				cin>>respuesta;
				cout<<endl;
			}

		}

	}


	
	

