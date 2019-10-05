#include "pessoa.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa{
  char* nome; // Nome da pessoa
  /*
  outras informaçoes de pessoa
  */
  Pessoa* amigos; // Lista de amigos
  Playlist* playlists; // Lista de playlists
};

struct tipolista{
  TipoLista* prox; // Apontador (lista sem sentinela)
  Pessoa* person; // Item
};

TipoLista* InicializaListaDePessoas(){
  TipoLista* lst = (TipoLista*)malloc(sizeof(TipoLista));
  lst->prox = NULL;
  // lst->pessoa = ?;
  return lst;
}

void InserePessoa (Pessoa* aluno, TipoLista* lista){
  // Insere dada pessoa na Lista de Pessoas (futura Friendlist)
}

void ImprimePessoa (Pessoa* p){
  // Imprime pessoa P
}

void ImprimeLista (TipoLista* lista){
  // Imprime Lista de Pessoas
}

TipoLista* Libera (TipoLista* lista){
  // Libera Lista de Pessoas
}

Pessoa* InicializaPessoa(char* nome, Playlist* musicas){
  /* Inicializa dada pessoa e sua lista de musicas (Talvez outra abordagem
   seja mais adequada. ex.: insere_playlist_em_pessoa)*/
}
