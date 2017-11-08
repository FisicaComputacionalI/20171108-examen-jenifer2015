//Dorantes Garcia Jenifer
//Examen parte tres
//Realizar un programa que reciba como entrada la distancia y el tiempo y calcule la velocidad.
#include <iostream>
 using namespace std;
 int main (){
 	float velocidad=0, distancia=0, tiempo=0;
 	
 	cout<<"Digite la distancia recorrida en metros: "; cin>>distancia;
 	cout<<"Digite el tiempo que se tardo en recorrer dicha distancia en segundos : "; cin>>tiempo;
 	
 	
 	
 	velocidad= distancia/ tiempo;
 	
 	
 	
 	cout<<"La velocidad  es: "<< velocidad<< "m/s";
 	
 	
 	
 	
  	
 	return 0;
 	
}
