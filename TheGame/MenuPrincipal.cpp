#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(void)
{
		// Carregar imagens
	if (!bg.loadFromFile("Resource\\BG\\bg_menu.png"))
		cout << "Não conseguiu carregar o background_menu" << endl;
	else
		//Prepara sprites com a imagem para desenho
		bg_spt.setTexture(bg);
	
	posicao.x = 400, posicao.y = 300;
	StartBt.addBotao(posicao, "Start");
	
}

MenuPrincipal::~MenuPrincipal(void)
{

}


Tela * MenuPrincipal::desenha(RenderWindow *janela)
{	
		//tamanhoImg = ( bg.getSize() - janela->getSize());
		//cout << tamanhoImg.x << "\t" << tamanhoImg.y << endl;
	
	janela->draw(bg_spt);
	janela->draw(StartBt.desenhaBotao());
	janela->draw(StartBt.desenhaTitulo());
	StartBt.MouseOver(janela);
	return NULL;
}

