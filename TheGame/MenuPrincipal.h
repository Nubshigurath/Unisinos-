
#include "Tela.h"

using namespace std;
using namespace sf;

class MenuPrincipal : public Tela
{
private:
	Texture bg;
	Sprite bg_spt;
	Vector2u tamanhoImg;
	



public:

	MenuPrincipal(void);
	~MenuPrincipal(void);

	Tela* desenha(RenderWindow *janela);

};

 
