
#include "Tela.h"
#include "Gui.h"

using namespace std;
using namespace sf;

class MenuPrincipal : public Tela
{
private:
	Texture bg;
	Sprite bg_spt;
	Vector2u tamanhoImg;
	Gui StartBt;
	Vector2f posicao;



public:

	MenuPrincipal(void);
	~MenuPrincipal(void);

	Tela* desenha(RenderWindow *janela);

};

 
