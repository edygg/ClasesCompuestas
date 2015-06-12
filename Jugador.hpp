#pragma once 
#include <string>

using namespace std;

class Jugador
{
public:
	Jugador(string nombre, string apellido, int numero);
	~Jugador();
	void setNombre(string nombre);
	string getNombre() const;
	void setApellido(string apellido);
	string getApellido() const;
	void setNumero(int numero);
	int getNumero() const;
private:
	string nombre;
	string apellido;
	int numero;		
};