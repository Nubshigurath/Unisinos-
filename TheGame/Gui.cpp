#include "Gui.h"


Gui::Gui()
{
	if (!fonte.loadFromFile("resource/neuropol.ttf"))
		cout << "A fonte não foi carregada" << endl;
}


Gui::~Gui()
{
}

void Gui::addBotao(Vector2f posicao, string titulo)
{
	tamanho.x = (800 * 0.12); // Receber tamanho das telas
	tamanho.y = (600 * 0.06);

	botao.setPosition(posicao);
	botao.setSize(tamanho);

	Text Titulo(titulo, fonte);
}

void Gui::desenhaBotao()
{

}