#include <iostream>
using namespace std;

int main() {
    int dia;
  	
  	//El usuario ingresa los datos
	cout <<"Ingrese un numero del 1 al 7 para el dia de la semana",
	cin >> dia;
	  
	//Evalua la cantidad de dias
	switch(dia) {
	   	case 1: cout <<"Lunes"<< endl; break;
	   	case 2: cout <<"Martes"<< endl; break;
	   	case 3: cout <<"Miercoles"<< endl; break;
	   	case 4: cout <<"Jueves"<< endl; break;
	   	case 5: cout <<"Viernes"<< endl; break;
		case 6: cout <<"Sabado"<< endl; break;
	   	case 7: cout <<"Domingo"<< endl; break;
		default: cout << "Dia Invalido. Ingrese un numero entero entre 1 y 7." << endl;
	
	} 	
	
	return 0; 
	  
 }
