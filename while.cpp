 // Contador con while

#include<stdio.h>
#include<conio.h>

using namespace std;

int main () {

	int n, c=1;

	cout <<"Cantidad de terminos: " << endl ;
 	cin >> n ; 

	int serie=n;  
 	
	 	while(c<=n) {
	  			cout << serie ;  
	  			serie-- ;  
	 			 c++;  
	 	}

 	getch(); 

}


