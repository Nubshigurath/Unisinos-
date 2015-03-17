#pragma once
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <iostream>
using namespace sf;
using namespace std;

class Gui
{

private:
	Texture botaoNormal, botaoHover, botaoClicado;
	Sprite botaoSp;
	SoundBuffer somClick;
	Sound click;
	bool isTocando;	
	Vector2f posicao, tamanho;
	RectangleShape botao;
	Font fonte;
	Text Titulo;
	Vector2i posicaoMouse;
	

public:
	Gui();
	~Gui();
	// Sets
	void addBotao(Vector2f Posicao, string Titulo);
	void setTamanho(Vector2f Tamanho);

	//Gets
	RectangleShape desenhaBotao();
	Text desenhaTitulo();

	// Verifica e altera Estados
	void MouseOver(RenderWindow *janela);

};