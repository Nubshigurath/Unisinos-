#pragma once
#include <SFML\Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;

class Gui
{

private:
	Texture botaoNormal, botaoHover, botaoClicado;
	Sprite botaoSp;
	Vector2f posicao, tamanho;
	RectangleShape botao;
	Font fonte;

public:
	Gui();
	~Gui();
	void addBotao(Vector2f Posicao, string Titulo);
	void desenhaBotao();

};