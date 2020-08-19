/* Data de submissao: 14/05/2020
 * Nome: Lucas Henrique Oliveira Collaço
 * RA: 182558
 */

#include <stdio.h>
#include <string.h>

#define TAMANHO_WORD 1000

typedef struct {
    char letra[TAMANHO_WORD];
    int n;
} pilha, *Pilha;

void input(Pilha p) {
    p->n = 0;
}

void push(Pilha p, char c) {
    if(p->n < TAMANHO_WORD){
        p->letra[p->n]=c;
        (p->n)++;
    }
}

char pop(Pilha p) {
    char c;
    if ((p->n)>0) {
        (p->n)--;
        c = p->letra[p->n];
    }
    return c;
}


int main() {
  char c[TAMANHO_WORD];
  pilha p;
  int i=0;
  int aux=0;
  int aux0=0;
  int posicao[6];
  int k;

  input(&p);
  gets(c);

  int n0 = strlen(c);
  posicao[0] = n0;
  posicao[1] = n0;
  posicao[2] = n0;
  posicao[3] = n0;
  posicao[4] = n0;
  posicao[5] = n0;
  char o[n0];

  for(i=0;i<n0; i++){ 
	if( c[i]==' ' ) { 
		           posicao[0+aux]=i;
			   aux=aux+1; }  }
   aux=0;
   while(posicao[0+aux]!=n0) {
           k=aux0;
	   for (i=k; i<posicao[0+aux]; i++) {
					push(&p, c[i]); 
						}
	   k=aux0;
	   for (i=k; i<posicao[0+aux]; i++) {
		if(posicao[0+aux]!=n0) { 
					 o[i] = pop(&p);
					 printf("%c", o[i]); } }
	   aux0=posicao[0+aux]+1;
	   printf(" ");
	   aux++;}

   if(posicao[0+aux]==n0) {
	   for (i=k; i<posicao[0+aux]; i++) {
					push(&p, c[i]); 
						}
	   k=aux0;
	   for (i=k; i<posicao[0+aux]; i++) {
					 o[i] = pop(&p);
					 printf("%c", o[i]); }
			  }

  printf("\n");
  return 0; }





