#include "Evento.h"

Evento::Evento(void)
{

}
Evento::~Evento(void)
{

}

void Evento::Processa(Event &evento,  RenderWindow &janela)
{


	            switch(evento.type)
	            {
	                case Event::Closed:
	                	cout << "Acessou o evento com sucesso" << endl;
	                    janela.close();
	                break;

	                case Event::TextEntered:
	                    cout << (char)evento.text.unicode;
	                    cout.flush(); // Sincroniza a sequencia de output
	                 break;

	                case Event::KeyPressed:
	                	if(evento.key.code == Keyboard::Escape)
	                		janela.close();      
						if (evento.key.code == Keyboard::BackSpace)
							system("cls");
	                	break;
	                case Event::MouseEntered:
	                	cout << "Mouse dentro das janela" << endl;
	                	break;
	                case Event::MouseLeft:
	                	cout << "Mouse saiu da janela" << endl;
	                	break;
				 

	            }


}
