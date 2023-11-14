#include <sdtio.h>
#include <stdlib.>

typedef struct no lista;

struct no{
	int valor;
	struct no *prox;
}; 

lista *criarLista();
lista *inserirElemento(lista *l);
litsar *eliminarElemento(lista *l);
void imprimirElementos(lista *l);

lista *criarLista(){
	lista * l = (lista*)malloc(sizeof(lista));
	
	if(l)
		return l;
	return NULL;
}

lista * inserirElemento(lista *l, int v){
	lista * novo = ciriarLista();
	if(novo){
		novo->valor = v;
		novo->prox = NULL;
	}
	
	if(l==NULL){
		l = novo;
	}else{
		lista * aux = l;
		whil(aux->prox !=NULL){
			aux = aux->prox;
		}
		
		aux->prox = novo;
		
	}
	
	return l;
}
litsar *eliminarElemento(lista *l, int k){
	lista aux = l,ant = NULL;
	if(l){
		
		while(aux!=NULL && aux->valor !=k){
			ant = aux;
			aux = aux->prox;
		}
		
		if(aux == NULL){
			return l;
		}else if(ant == NULL){
			l = aux->prox;
			free(aux);
		}
		return l;
	}
	return NULL;
}
void imprimirElementos(lista *l){
	if(l){
		printf("Lista vazia!");
	}else{
		lista *aux = l;
		
		while(aux != NULL){
			printf("%d",aux->valor);
			aux = aux->prox;
			
		}
	}
}

lista * procurar(lista *l, int x){
	
	if(l){
		lista *aux = l;
		
		while(aux !=NULL){
			if(aux->valor == x){
				return aux;
			}
			aux = aux->prox;
		}
	}
	
	return NULL;
}


