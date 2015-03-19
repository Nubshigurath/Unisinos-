#pragma once
#include <stack>
#include "Tela.h"
#include "Evento.h"

using namespace std;
using namespace sf;

class GerenteTelas
{

private:

	stack<Tela*> *pilhaTelas;

public:

	GerenteTelas();
	~GerenteTelas(void);

	void desenha(RenderWindow *janela);
	void adicionarTela(Tela *);

};

