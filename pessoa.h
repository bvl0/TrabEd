#ifndef PESSOA_H
#define PESSOA_H

#include "playlist.h"

typedef struct pessoa Pessoa;

typedef struct tipolista TipoLista;

TipoLista* InicializaListaDePessoas();

void InserePessoa (Pessoa* aluno, TipoLista* lista);

// Pessoa* Retira (TipoLista* lista, ""fator de busca p/ retirar""); // Se for preciso retirar

void ImprimePessoa (Pessoa* p);

void ImprimeLista (TipoLista* lista);

TipoLista* Libera (TipoLista* lista);

Pessoa* InicializaPessoa(char* nome, Playlist* musicas);

#endif //PESSOA_H
