/*El siguiente programa solicita informaci�n de entrada al usuario y muestra en la salida est�ndar
el resultado de la expresi�n matem�tica: a+(b/(c-d))*/

#include <iostream> //Librer�a est�dar de entrada y salida de datos
#include <locale.h> //Librer�a de localizaci�n (regionalizaci�n)

using namespace std; //Acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish");
	float a,b,c,d,operacion = 0; //Declaramos las variables principales y la variable que realizar� la operaci�n, esta �ltima la iniciamos en 0.
	cout<<"Ingrese el valor de a: "<<endl; //Solicitamos el valor de la variable "a"
	cin>>a; //Almacenamos el valor de a
	cout<<"Ingrese el valor de b: "<<endl; //Solicitamos el valor de la variable "b"
	cin>>b; //Almacenamos el valor de b
	cout<<"Ingrese el valor de c: "<<endl; //Solicitamos el valor de la variable "c"
	cin>>c; //Almacenamos el valor de c
	cout<<"Ingrese el valor de d: "<<endl; //Solicitamos el valor de la variable "d"
	cin>>d; //Almacenamos el valor de d
	operacion = a+(b/(c-d)); //Realizamos la expresi�n matem�tica y con ella las operaciones
	cout.precision(2); //Damos una precisi�n de 2 decimales a la salida de la operaci�n
	cout<<operacion; //Imprimimos el valor de la operaci�n
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
