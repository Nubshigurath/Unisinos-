#include "Evento.h"
#include "GerenteTelas.h" 
#include "MenuPrincipal.h"


using namespace sf;
using namespace std;

int main()
{

	Event jogo;
	Evento tarefa;
	GerenteTelas *g = new GerenteTelas;
	RenderWindow *janela = new RenderWindow;
	MenuPrincipal *menu = new MenuPrincipal;
	Vector2i posicaoMouse;
 


	janela->create(VideoMode(800, 600), "The Game"); // Cria a janela
	janela->setFramerateLimit(30);
	janela->setKeyRepeatEnabled(false); // Faz com que aceite 01 input por vez
	g->adicionarTela(menu);

	while (janela->isOpen()) // roda o jogo enquanto a janela estiver aberta
	{

		while (janela->pollEvent(jogo))     // poolEvent joga um evento na pilha para ser processado
		{
			tarefa.Processa(jogo, *janela);
			
		}

		posicaoMouse = (Mouse::getPosition() - janela->getPosition()); // calcula posição do mouse em relação a janela 
		//cout <<  "Mouse X: " << posicaoMouse.x << " Mouse Y: " << posicaoMouse.y <<  endl;      
		janela->clear();
		g->desenha(janela);
		janela->display();



	}

	return 0;
}
