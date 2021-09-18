#include "Bus.h"

Bus::Bus() {
	placa = "NA";
	modelo = "NA";
	marca = "NA";
	numPasajeros = 0;
	rutPtr = NULL;
	chofPtr = NULL;
}
Bus::Bus(string pla, string mod, string mar, int numpa, Ruta* ptrRut1, Chofer* ptrCho) {
	placa = pla;
	modelo = mod;
	marca = mar;
	numPasajeros = numpa;
	rutPtr = ptrRut1;
	chofPtr = ptrCho;
	
}