#pragma once 
#include <string>

using namespace std;

class Entrenador
{
public:
	Entrenador(string nombre, string apellido);
	~Entrenador();
	void setNombre(string nombre);
	string getNombre() const;
	void setApellido(string apellido);
	string getApellido() const;
private:
	string nombre;
	string apellido;	
};