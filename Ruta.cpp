#include "Ruta.h"

Ruta::Ruta() {
	origen = "indefinido";
	destino = "indefinido";
	precio = 0.0;
	horaPtr = NULL;
}
Ruta::Ruta(string orig, string dest, double prec) {
	origen = orig;
	destino = dest;
	precio = prec;
}
Ruta::Ruta(string orig, string dest, double prec, Hora* hPtr) {
	origen = orig;
	destino = dest;
	precio = prec;
	horaPtr = hPtr;
}
Ruta::~Ruta() {
	if (horaPtr != NULL) delete horaPtr;
}

void Ruta::setOrigen(string org) { origen = org; }
void Ruta::setDestino(string dest) { destino = dest; }
void Ruta::setPrecio(double prec) { precio = prec; }
void Ruta::setHora(Hora* ptr) {
	if (horaPtr != NULL) delete horaPtr;
	horaPtr = ptr;
}

string Ruta::getOrigen() { return origen; }
string Ruta::getDestino() { return destino; }
double Ruta::getPrecio() { return precio; }
Hora* Ruta::getHora() { return horaPtr; }

string Ruta::toString() {
	stringstream s;
	s << "-------------RUTA--------------" << endl
		<< "Origen..." << origen << endl
		<< "Destino..." << destino << endl
		<< "Precio..." << precio << endl;
	if (horaPtr != NULL)//Si hay una hora vinculada a la ruta...
		s << "La hora de salida es: " << horaPtr->toString() << endl;

	return s.str();
}