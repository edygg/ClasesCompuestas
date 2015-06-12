#include "Entrenador.hpp"

Entrenador::Entrenador(string nombre, string apellido) {
	this->nombre = nombre;
	this->apellido = apellido;
}

Entrenador::~Entrenador() { /* nada */}

void Entrenador::setNombre(string nombre) {
	this->nombre = nombre;
}

string Entrenador::getNombre() const {
	return this->nombre;
}

void Entrenador::setApellido(string apellido) {
	this->apellido = apellido;
}

string Entrenador::getApellido() const {
	return this->apellido;
}
