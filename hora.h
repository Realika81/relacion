#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

//Interfaz de la clase hora
class Hora {
private:
	int h;
	int m;
	int s;
public:
	Hora(int, int, int);
	virtual ~Hora();
	//Mutadores (set's)
	void setHoras(int);
	void setMinutos(int);
	void setSegundos(int);
	//Accesores get's

	int getHoras();
	int getMinutos();
	int getSegundos();
	//toString

	string toString();
};
