#include "Gui.h"


Gui::Gui()
{
		if (!fonte.loadFromFile("Resource\\Font\\NEUROPOL.ttf"))
			cout << "A fonte não foi carregada" << endl;
		if (!somSelecionar.loadFromFile("Resource\\Audio\\buzz\\click2.wav"))
			cout << "Não localizado arquivo de audio Click do mouse" << endl;
		isSobre = false;
		
}


Gui::~Gui()
{
	
}

void Gui::addBotao(Vector2f posicao, string titulo)
{
		tamanho.x = (800 * 0.26); // Receber tamanho das telas
		tamanho.y = (600 * (float)0.07); 
		this->nome = titulo;
		 

		botao.setPosition((posicao.x - (tamanho.x/2)),(posicao.y - (tamanho.y/2))); // seta a posicao centralizado em relação ao meio da tela
		botao.setSize(tamanho);
		botao.setOutlineThickness(3);
		botao.setOutlineColor(Color::Black);
		botao.setOrigin(0 , botao.getSize().y / 2);
	

		Titulo.setString(titulo); //  quando usa ponteiro acaba com tudo - Verficar Sf:String
		Titulo.setFont(fonte);
		Titulo.setPosition((posicao.x - (tamanho.x / 2)), (posicao.y - (tamanho.y / 2)));
		Titulo.setOrigin(-20, botao.getSize().y / 2); // Origin é o centro da primitiva em relação o centro da posição onde esta da tela 
		Titulo.setColor(Color::Red);

		selecionar.setBuffer(somSelecionar);

	//Alinhamento perfeito de titulo e botão requer calculo considerando tamanho da fonte, tamanho ideal do botao etc 
	//fazer isso quando terminar o jogo
}

void Gui::addBotao(float x, float y, string titulo) // outro construtur para facilitar
{
	Vector2f posicao;
	posicao.x =   x,	posicao.y =   y;
	this->nome = titulo;
	addBotao(posicao, titulo);
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
 	return this->Titulo;
}
bool Gui::isAtivo()
{
	return this->isSobre;
}
 
string Gui::getNome()
{
	return this->nome;
}

void Gui::MouseOver(RenderWindow *janela)
{
	posicaoMouse = (Mouse::getPosition() - janela->getPosition()); // calcula posição do mouse em relação a posição da janela
	if (posicaoMouse.x >= botao.getPosition().x &&
		posicaoMouse.x <= (botao.getPosition().x + botao.getSize().x) &&
		posicaoMouse.y >= botao.getPosition().y &&
		posicaoMouse.y <= (botao.getPosition().y + botao.getSize().y))
	{
		isSobre = true;
		botao.setFillColor(Color::Yellow);
			if (!isTocando)
			{
				selecionar.play();
				isTocando = true;
			}
	}
	else
	{
		isSobre = false;
		isTocando = false;
		botao.setFillColor(Color::Transparent);
	}	

}

void Gui::botaoClicked(RectangleShape botao)
{
	botao.setFillColor(Color::Green);
}
/*

MouseOver deve checar se o mouse está em cima do objeto alvo. O objetvo alvo deve ter atributo que bool e função de alteração de estado 
caso o mouse esteja  sobre ele

*/