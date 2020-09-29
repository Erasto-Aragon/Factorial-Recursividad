#include<iostream> //Iniciomos el programa, incluendo la libreria
using namespace std; 

int factorial(int); //Se crea la funcion factorial de tipo entero, la cual realizara las operaciones

int main(){ //En el mmain añadiremos lo siguiente
int n; //declaramos n = numero que ingrese el usuario
cout<<"FACTORIAL DE UN NUMERO"<<endl; //un mensaje de lo que realiza el programa
cout<<"Dame un numero:  "; //Pedimos el numero que desea el usuario
cin>>n; //El valor recibido sera guardado en la variable n, antes ya declarada
cout<<"El factorial de  "<<n<<" es "<<factorial(n); //Se indica el factorial de n, seguido de llamar la funcion factorial con dicho numero

"pause()"; //Una pausa para verificar el resultado
return 0; //Finaliza el programa
}

int factorial(int n){ //Se desarrolla la funcion factorial, antes ya declarada
	if(n==0){ //la siguiente condicion, indica que si el numero añadido es igual a cero--prueba: 3==0
		n=1; //si se cumple la condicion n pasa a ser igual a uno--prueba:no se cumple la condicion
	}
	else{n=n*factorial(n-1); //y si no, n seria igual a n por el factorial de n-1, aqui es donde entra la recursividad, una funcion siendo llamada por si misma generando un bucle
	//es decir, el numero que introdujo el usuario por ese mismo numero restando uno--prueba: 3=3factorial(2) 
	//en este caso vuelve a retornar al inicio indicando 2==0 hasta cumplir--si se llega a cumplir 0=0, entonces pasaria a multiplicar 2*3=6 
	}
	return n; //finalizando asi la funcion, retornando a n 
}
