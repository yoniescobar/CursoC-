//Ejemplo: De pase de parametros.. llamada por valor copia el valor de un argumento en el par�metro de la funci�n

#include <iostream>
#include <conio.h>

using namespace std;

void sumar(int x, int y);

int main(){
		
	
	sumar(30,20); //invocar la funcion.
	
	getch();
	return 0;
}

void sumar(int x, int y){

  int suma = x + y;
  cout<<"\n la suma es: "<<suma;
  
		
}
