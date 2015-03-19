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
	SoundBuffer somSelecionar;
	Sound selecionar;
	bool isTocando,isSobre;	
	Vector2f posicao, tamanho;
	RectangleShape botao;
	Font fonte;
	Text Titulo;
	Vector2i posicaoMouse;
	string nome;
	
	

public:
	Gui();
	~Gui();
	// Sets
	void addBotao(Vector2f Posicao, string Titulo);
	void addBotao(float x, float y, string Titulo);
	void setTamanho(Vector2f Tamanho);

	//Gets
	RectangleShape desenhaBotao();
	Text desenhaTitulo();
	string getNome();
	 

	// Verifica e altera Estados
	void MouseOver(RenderWindow *janela);
	bool isAtivo();
	void botaoClicked(RectangleShape botao);

};