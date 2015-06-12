#pragma once

#include <vector>
#include <string>
#include <sstream>
using namespace std;

#include "Jugador.hpp"
#include "Entrenador.hpp"
class Equipo
{
public:
	Equipo(vector<Jugador*> jugadores, Entrenador* entrenador, string nombre);
	~Equipo();
	string toString() const;
private:
	vector<Jugador*> jugadores;
	Entrenador* entrenador;
	string nombre;
};