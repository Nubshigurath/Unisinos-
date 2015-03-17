#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(void)
{
		// Carregar imagens
	if (!bg.loadFromFile("Resource\\BG\\bg_menu.png"))
		cout << "Não conseguiu carregar o background_menu" << endl;
	else
		//Prepara sprites com a imagem para desenho
		bg_spt.setTexture(bg);
		

	
}

MenuPrincipal::~MenuPrincipal(void)
{

}


Tela * MenuPrincipal::desenha(RenderWindow *janela)
{	
		//tamanhoImg = ( bg.getSize() - janela->getSize());
		//cout << tamanhoImg.x << "\t" << tamanhoImg.y << endl;
	
	janela->draw(bg_spt);
	return NULL;
}

