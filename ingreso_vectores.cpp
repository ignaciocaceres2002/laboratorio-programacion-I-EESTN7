// Ingresar variables a un vector y determinar los numeros mayores y menores y su promedio

#include"iostream"

using namespace std;

int main() {

	int cant_v,menor,mayor,prom_men,prom_may;

	cout<<"Ingrese la cantidad de elementos que tendra el vector"<<endl;
	cin>>cant_v;

	int vect[cant_v];

	for (int i=0; i<cant_v; i++) {
			
			cout<<"Ingrese el valor del vector "<<i<<endl;
			cin>>vect[i];
			
			for (int i=0; i<cant_v; i++) {
			
			
				if (vect[i]<50)
				{
					menor=vect[i];
					
				}
					
				 if (vect[i]>50) 
				
				{
					mayor=vect[i];
					
				}
				
			}
	}

	cout<<"Los numeros menores son: "<<menor<<endl;
	cout<<endl;
	cout<<"Los numeros mayores son: "<<mayor<<endl;
	cout<<endl;
	cout<<"El promedio de los numeros menores es de: "<<prom_men<<endl;
	cout<<"El promedio de los numeros mayores es de: "<<prom_may<<endl;
		
}
