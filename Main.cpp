#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

#include "Equipo.hpp"
#include "Jugador.hpp"
#include "Entrenador.hpp"

using namespace std;

int main(int argc, char** argv) {
	string nombre1 = "Edilson";
	string apell1 = "Gonzalez";
	string nombre2 = "Walther";
	string apell2 = "Carrasco";
	Jugador* jug1 = new Jugador(nombre1, apell1, 10);
	Jugador* jug2 = new Jugador(nombre2, apell2, 0);
	Entrenador* entre = new Entrenador(nombre1, apell1);
	vector<Jugador*> jugadores;
	jugadores.push_back(jug1);
	jugadores.push_back(jug2);

	string equipo = "Equipazo FC";
	Equipo* equi = new Equipo(jugadores, entre, equipo);
	cout << equi->toString() << endl;
	return EXIT_SUCCESS;
}