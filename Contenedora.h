#pragma once
#include "Bus.h"

class Contenedora {
private:
	Bus** vec[10];
	int cant;
public:
	Contenedora(Bus**, int);

	void ingresaBus(Bus*);

	string toString();
};