#include "arvore.h"
bool insere_elemento(struct no** a, t_dado x) {
	if (*a==NULL) {
		*a = (struct no*)malloc(sizeof(struct no));
		(*a)->direito = NULL;
		(*a)->esquerdo = NULL;
		(*a)->dado = x;
		return 1;
	}
	else {
		if (x >= (*a)->dado)
			insere_elemento(&(*a)->direito, x);
		else
			insere_elemento(&(*a)->esquerdo, x);
	}
	return 0;
}
bool busca_elemento(struct no** a, t_dado x) {
	if (*a == NULL) {
		printf(t_print, x);
		printf(" nao esta contido.\n");
		return 0;
	}
	else {
		if ((*a)->dado == x) {
			printf(t_print, x);
			printf(" esta contido.\n");
			return 1;
		}
		else {
			if (x >= (*a)->dado)
				busca_elemento(&(*a)->direito, x);
			else
				busca_elemento(&(*a)->esquerdo, x);
		}
	}
}