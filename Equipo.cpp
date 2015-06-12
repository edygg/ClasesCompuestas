#include "Equipo.hpp"

Equipo::Equipo(vector<Jugador*> jugadores, Entrenador* entrenador, string nombre) {
	this->jugadores = jugadores;
	this->entrenador = entrenador;
	this->nombre = nombre;
}

Equipo::~Equipo() {
	for (int i = 0; i < jugadores.size(); i++) {
		Jugador* current = jugadores[i];
		delete current;
	}

	delete entrenador;
}

string Equipo::toString() const {
	stringstream ss;

	for (int i = 0; i < jugadores.size(); i++) {
		Jugador* current = jugadores[i];

		ss << "Jugador: " << current->getNombre() << endl;
	}

	ss << "Entrenador: " << entrenador->getNombre() << endl;
	return ss.str();
}