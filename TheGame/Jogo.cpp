#include "Evento.h"
#include "GerenteTelas.h" 
#include "MenuPrincipal.h"


using namespace sf;
using namespace std;

int main()
{
	Evento tarefas;
	GerenteTelas *g = new GerenteTelas;
	RenderWindow *janela = new RenderWindow;
	MenuPrincipal *menu = new MenuPrincipal;
	Image icon;
	if (!icon.loadFromFile("Resource\\img\\icone.png"))
		cout << "Não conseguiu carregar icone" << endl;

	janela->create(VideoMode(800, 600, 32 ), "The Game" ); // Cria a janela
	janela->setFramerateLimit(30);
	janela->setKeyRepeatEnabled(false); // Faz com que aceite 01 input por vez
	janela->setIcon(256, 256, icon.getPixelsPtr());
	g->adicionarTela(menu);

	while (janela->isOpen()) // roda o jogo enquanto a janela estiver aberta
	{
		tarefas.Checar(*janela); // Por performance o ideal seria verificar apenas o Quit aqui no "main"
		janela->clear();
		g->desenha(janela);
		janela->display();

	}

	return 0;
}
