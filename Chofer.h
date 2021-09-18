#pragma once
#include<iostream>
#include<sstream>
#include<string>
using namespace std;



// Esta es la declaraci�n de la clase Chofer... (interfaz de la clase chofer)...



class Chofer {
private:
	string cedula;
	string nombre;
	int edad;
public:
	Chofer(string, string, int);
	virtual ~Chofer();
	// Mutadores (set's)
	void setCedula(string);
	void setNombre(string);
	void setEdad(int);
	// Accesores(get's)
	string getCedula();
	string getNombre();
	int getEdad();
	//toString(),
	string toString();
};