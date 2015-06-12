#include "Jugador.hpp"

Jugador::Jugador(string nombre, string apellido, int numero) {
	this->nombre = nombre;
	this->apellido = apellido;
	this->numero = numero;
}

Jugador::~Jugador() { /* nada */}

void Jugador::setNombre(string nombre) {
	this->nombre = nombre;
}

string Jugador::getNombre() const {
	return this->nombre;
}

void Jugador::setApellido(string apellido) {
	this->apellido = apellido;
}

string Jugador::getApellido() const {
	return this->apellido;
}

void Jugador::setNumero(int numero) {
	this->numero = numero;
}

int Jugador::getNumero() const {
	return this->numero;
}
