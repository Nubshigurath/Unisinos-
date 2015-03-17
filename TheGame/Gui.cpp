#include "Gui.h"


Gui::Gui()
{
		if (!fonte.loadFromFile("Resource\\Font\\NEUROPOL.ttf"))
			cout << "A fonte não foi carregada" << endl;
		if (!somClick.loadFromFile("Resource\\Audio\\click2.wav"))
			cout << "Não localizado arquivo de audio Click do mouse" << endl;		
}


Gui::~Gui()
{
	
}

void Gui::addBotao(Vector2f posicao, string titulo)
{
		tamanho.x = (800 * 0.15); // Receber tamanho das telas
		tamanho.y = (600 * (float)0.07); // Ele esta desenhando 62px de botão  sendo que o valor era para ser 42px MENTIROSO!

		botao.setPosition((posicao.x - (tamanho.x/2)),(posicao.y - (tamanho.y/2))); // seta a posicao centralizado em relação ao meio da tela
		botao.setSize(tamanho);
		botao.setOutlineThickness(3);
		botao.setOutlineColor(Color::Black);
		botao.setOrigin(0 , botao.getSize().y / 2); // questionar o porque disso amanhã bizzonho
	

		Titulo.setString(titulo); //  quando usa ponteiro acaba com tudo
		Titulo.setFont(fonte);
		Titulo.setPosition((posicao.x - (tamanho.x / 2)), (posicao.y - (tamanho.y / 2)));
		Titulo.setOrigin(-20, botao.getSize().y / 2);
		Titulo.setColor(Color::Red);

		click.setBuffer(somClick);

	//Alinhamento perfeito de titulo e botão requer calculo considerando tamanho da fonte, tamanho ideal do botao etc 
	//fazer isso quando terminar o jogo
}

void Gui::setTamanho(Vector2f Tamanho) 
{
	this->tamanho = Tamanho;
}

RectangleShape Gui::desenhaBotao()
{
	return botao;
}

Text Gui::desenhaTitulo()
{
	return Titulo;
}

void Gui::MouseOver(RenderWindow *janela)
{
	posicaoMouse = (Mouse::getPosition() - janela->getPosition()); // calcula posição do mouse em relação a posição da janela
	//cout << posicaoMouse.x << "\t" << posicaoMouse.y << endl;
	if (posicaoMouse.x >= botao.getPosition().x &&
		posicaoMouse.x <= (botao.getPosition().x + botao.getSize().x) &&
		posicaoMouse.y >= botao.getPosition().y &&
		posicaoMouse.y <= (botao.getPosition().y + botao.getSize().y))
	{
			botao.setFillColor(Color::Yellow);
			if (!isTocando)
			{
				click.play();
				isTocando = true;
			}
	}
	else
	{
		isTocando = false;
		botao.setFillColor(Color::Transparent);
		
	
	}
//cout << "Mouse X: " << posicaoMouse.x << "Mouse Y: " << posicaoMouse.y << endl;
	

}

/*

MouseOver deve checar se o mouse está em cima do objeto alvo. O objetvo alvo deve ter atributo que bool e função de alteração de estado 
caso o mouse esteja  sobre ele

*/