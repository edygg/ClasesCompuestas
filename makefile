rm: ejecutable
	rm *.o

ejecutable: Equipo.o Jugador.o Entrenador.o
	g++ Main.cpp Equipo.o Jugador.o Entrenador.o -o exe

Equipo.o: Jugador.o Entrenador.o
	g++ -c Equipo.cpp

Jugador.o:
	g++ -c Jugador.cpp

Entrenador.o:
	g++ -c Entrenador.cpp
