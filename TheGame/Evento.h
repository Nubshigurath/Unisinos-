#ifndef EVENTO_H
#define EVENTO_H

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <cstdio>

using namespace sf;
using namespace std;

class Evento
{
private:
	 Event evento;

public:
	 Evento(void);
	 ~Evento(void);
	 void Processa(Event &evento, RenderWindow &janela);
};




#endif
