#include "arvore.h"

int main() {
	struct no* a=NULL;
	insere_elemento(&a, 15);
	insere_elemento(&a, 19);
	insere_elemento(&a, 12);
	insere_elemento(&a, 8);
	busca_elemento(&a, 9);
	return 1;
}