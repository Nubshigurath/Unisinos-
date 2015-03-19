#include "Evento.h"

Evento::Evento(void)
{
	jogo = new Event;
}
Evento::~Evento(void)
{

}
/*
void Evento::Processa(Event &evento,  RenderWindow &janela)
{


	            switch(jogo->type)
	            {
	                case Event::Closed:
	                	cout << "Acessou o evento com sucesso" << endl;
	                    janela.close();
	                break;

	                case Event::TextEntered:
	                    cout << (char)jogo->text.unicode;
	                    cout.flush(); // Sincroniza a sequencia de output
	                 break;

	                case Event::KeyPressed:
	                	if(jogo->key.code == Keyboard::Escape)
	                		janela.close();      
						if (jogo->key.code == Keyboard::BackSpace)
							system("cls");
	                	break;
	                case Event::MouseEntered:
	                	cout << "Mouse dentro das janela" << endl;
	                	break;
	                case Event::MouseLeft:
	                	cout << "Mouse saiu da janela" << endl;
	                	break;
					case Event::MouseButtonReleased:left :
						cout << "Aé! Left button PORRA" << endl;
						break;
				 

	            }


}
*/

void Evento::Checar(RenderWindow &janela)
{
	while (janela.pollEvent(*jogo))
	{
		switch (jogo->type)
		{
		case Event::Closed:
			cout << "Acessou o evento com sucesso" << endl;
			janela.close();
			break;

		case Event::TextEntered:
			cout << (char)jogo->text.unicode;
			cout.flush(); // Sincroniza a sequencia de output
			break;

		case Event::KeyPressed:
			if (jogo->key.code == Keyboard::Escape)
				janela.close();
			if (jogo->key.code == Keyboard::BackSpace)
				system("cls");
			break;
		case Event::MouseEntered:
			cout << "Mouse dentro das janela" << endl;
			break;
		case Event::MouseLeft:
			cout << "Mouse saiu da janela" << endl;
			break;
	/*	case Event::MouseButtonReleased:left:
			cout << "Aé! Left button PORRA" << endl;
			break;
			*/


		}
	}
}
bool Evento::soltouBotaoEsquerdo(RenderWindow &janela)
{

	
	if (jogo->type == sf::Event::MouseButtonPressed)
		{
			if (jogo->mouseButton.button == sf::Mouse::Right)
				return true;

		}

		else
		{
			return false;
		}
	
	
		
}