#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>


using namespace sf;
using namespace std;

class Tela
{
public:
    Tela(void)
    {
		voltar = false;
    }
    ~Tela(void){}

    virtual Tela* desenha(RenderWindow *janela) = 0;
    bool possoVoltar()
    {
		return voltar;
    }
protected:

	bool voltar;
};

 
