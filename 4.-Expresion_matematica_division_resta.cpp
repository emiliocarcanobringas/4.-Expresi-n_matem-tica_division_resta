/*El siguiente programa solicita información de entrada al usuario y muestra en la salida estándar
el resultado de la expresión matemática: a+(b/(c-d))*/

#include <iostream> //Librería estádar de entrada y salida de datos
#include <locale.h> //Librería de localización (regionalización)

using namespace std; //Acceso al espacio de nombres

main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish");
	float a,b,c,d,operacion = 0; //Declaramos las variables principales y la variable que realizará la operación, esta última la iniciamos en 0.
	cout<<"Ingrese el valor de a: "<<endl; //Solicitamos el valor de la variable "a"
	cin>>a; //Almacenamos el valor de a
	cout<<"Ingrese el valor de b: "<<endl; //Solicitamos el valor de la variable "b"
	cin>>b; //Almacenamos el valor de b
	cout<<"Ingrese el valor de c: "<<endl; //Solicitamos el valor de la variable "c"
	cin>>c; //Almacenamos el valor de c
	cout<<"Ingrese el valor de d: "<<endl; //Solicitamos el valor de la variable "d"
	cin>>d; //Almacenamos el valor de d
	operacion = a+(b/(c-d)); //Realizamos la expresión matemática y con ella las operaciones
	cout.precision(2); //Damos una precisión de 2 decimales a la salida de la operación
	cout<<operacion; //Imprimimos el valor de la operación
	return 0; //Fin del programa
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
