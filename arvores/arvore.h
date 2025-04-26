#ifndef _ARVORE_H
#define _ARVORE_H
#define t_print "%d"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
typedef int t_dado;
struct no {
	struct no* esquerdo;
	struct no* direito;
	t_dado dado;
};
void insere_elemento(struct no** a, t_dado x);
bool busca_elemento(struct no** a, t_dado x);
#endif
