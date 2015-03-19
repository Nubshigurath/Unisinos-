#include "MenuPrincipal.h"

MenuPrincipal::MenuPrincipal(void)
{
		// Carregar imagens
	if (!bg.loadFromFile("Resource\\BG\\bg_menu.png"))
		cout << "Não conseguiu carregar o background_menu" << endl;
	else
		//Prepara sprites com a imagem para desenho
		bg_spt.setTexture(bg);
	
	posicao.x = 400, posicao.y = 250;
	newGameBt.addBotao(posicao, "New Game");
	loadGameBt.addBotao(400, 350, "Load");

	
	
}

MenuPrincipal::~MenuPrincipal(void)
{

}


Tela * MenuPrincipal::desenha(RenderWindow *janela)
{	
		//tamanhoImg = ( bg.getSize() - janela->getSize());
		//cout << tamanhoImg.x << "\t" << tamanhoImg.y << endl;
	
	janela->draw(bg_spt);
	janela->draw(newGameBt.desenhaBotao());
	janela->draw(newGameBt.desenhaTitulo());
	janela->draw(loadGameBt.desenhaBotao());
	janela->draw(loadGameBt.desenhaTitulo());
	newGameBt.MouseOver(janela);
	loadGameBt.MouseOver(janela);
	Update(newGameBt, *janela );
	Update(loadGameBt, *janela);
	
	return NULL;
}

void MenuPrincipal::Update(Gui botao, RenderWindow &janela)
{
	if (tarefa.soltouBotaoEsquerdo(janela) && botao.isAtivo())
		cout << "DEU CERTO" << endl;
		//if (botao.isAtivo() && sf::Event::MouseButtonReleased:left)
		//cout << "Clicou no botão: " << botao.getNome() << endl;
}
