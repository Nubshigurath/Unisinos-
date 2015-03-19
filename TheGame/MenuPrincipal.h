
#include "Tela.h"
#include "Gui.h"
#include "Evento.h"


using namespace std;
using namespace sf;

class MenuPrincipal : public Tela
{
private:
	Texture bg;
	Sprite bg_spt;
	Vector2u tamanhoImg;
	Gui newGameBt, loadGameBt;
	Vector2f posicao;
	Evento tarefa;



public:

	MenuPrincipal(void);
	~MenuPrincipal(void);

	Tela* desenha(RenderWindow *janela); 
	void Update(Gui botoes, RenderWindow &janela);

};

 
