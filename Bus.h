#pragma once
#include "Ruta.h"
#include "Chofer.h"
//Esta será la declaración de la clase Bus..(o la interfaz)
class Bus {
private:
	string placa;
	string modelo;
	string marca;
	int numPasajeros;
	//Vinculaciones
	Ruta* rutPtr; //vincula con una ruta
	Chofer* chofPtr; //vincula con un chofer
public:
	//Tarea moral
	Bus(); //Por defecto sin parametros
	Bus(string, string, string, int, Ruta*, Chofer*);
	/*Bus();
	Bus();*/

	//Mutadores

	//Accesores

	//llevar metodos a bus.cpp y desarrollarlos

	//Luego se cre un contenedor.h y contenedor.cpp (forma N.4) para guardar buses

	//Finalmente se hace el main donde se prueba el modelo
};
