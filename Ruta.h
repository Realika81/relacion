#pragma once
#include "hora.h" //LA ruta ve a la hora ruta-->hora

class Ruta {
private:
	string origen;
	string destino;
	double precio;
	//Vinculaciones

	Hora* horaPtr; //Es una lecha que nos vincula a una hora determinada.
public:
	Ruta(); //constructor por defecto sin parámetros
	Ruta(string, string, double); //Constructor con parametros sin hora asociada
	Ruta(string, string, double,Hora*); //Constructor con parametros con hora asociada
	virtual ~Ruta();
	
	void setOrigen(string);
	void setDestino(string);
	void setPrecio(double);
	void setHora(Hora*);

	string getOrigen();
	string getDestino();
	double getPrecio();
	Hora* getHora();

	string toString();
};