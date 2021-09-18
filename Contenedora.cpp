#include "Contenedora.h"

Contenedora::Contenedora(Bus**, int) {
	for (int i = 0; i < cant; i++) {

	}
}

string Contenedora::toString() {
	stringstream s;

	for (int i = 0; i < cant; i++) {
		s << "------------Bus "<<i<<"--------" << endl;

	}
}

void Contenedora::ingresaBus(Bus* bus1) {
	cant++;

}