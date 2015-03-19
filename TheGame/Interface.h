#pragma once
#include "Tela.h"
using namespace std;
using namespace sf;

class Interface :
	public Tela
{
public:
	Interface();
	Tela* desenha(RenderWindow *janela);
	~Interface();
};

