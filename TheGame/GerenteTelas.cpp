#include "GerenteTelas.h"

GerenteTelas::GerenteTelas()
{
	pilhaTelas = new stack<Tela*>;
}


GerenteTelas::~GerenteTelas(void)
{
}


void GerenteTelas::adicionarTela(Tela *t)
{
	pilhaTelas->push(t);

}


void GerenteTelas::desenha(RenderWindow *janela)
{
	Tela *nova = pilhaTelas->top()->desenha(janela);

	if (nova != NULL)
	{
		this->adicionarTela(nova);
	}
	else{
		if (pilhaTelas->top()->possoVoltar())
		{
			pilhaTelas->pop();
		}
	}
}
