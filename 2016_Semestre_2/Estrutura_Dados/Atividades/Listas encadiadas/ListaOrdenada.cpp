#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1
 
 struct item
 {
     int info;
     struct item *prox;
 };
 
 void insereListaOrdenada(struct item **p0, int x)
 {
     struct item *p, *pa = NULL, *corr = *p0;
     int cont = TRUE;
     p = (struct item *)malloc(sizeof(struct item));
     p->info = x;
     p->prox = NULL;
     while (corr != NULL && cont)
     {
         if (x < corr->info) cont = FALSE;
         else
         {
             pa = corr;
             corr = corr->prox;
         }
     }
     p->prox = corr;
     if (pa == NULL) *p0 = p;
     else pa->prox = p;
 }
 
 void leiaLista(struct item **p0)
 {
     int i, n, val;
     *p0 = NULL;
     scanf("%d", &n);
     for (i = 1; i <= n; i = i + 1)
     {
         scanf("%d", &val);
         insereListaOrdenada(p0, val);
     }
 }
 
 void imprimaLista(struct item *p0)
 {
     struct item *p = p0;
     while (p != NULL)
     {
         printf("%d ", p->info);
         p = p->prox;
     }
     putchar('\n');
 }
 
 void removaInfoLista(struct item **p0, int val)
 {
     struct item *pa0, *pa, *p, *px, *pxx;
     int segIgualVal;
     pa0 = NULL;
     p = *p0;
     while (p != NULL)
     {
         if (p->info == val)
         {
             segIgualVal = TRUE;
             px = p;
             while (segIgualVal)
             {
                 pa = p;
                 p = p->prox;
                 if (p == NULL) segIgualVal = FALSE;
                 else segIgualVal = p->info == val;
             }
             if (pa0 == NULL) *p0 = p;
             else pa0->prox = p;
             pa->prox = NULL;
             while (px != NULL)
             {
                 pxx = px;
                 px = px->prox;
                 free(pxx);
                 pxx = NULL;
             }
             p = NULL;
         }
         else
         {
             pa0 = p;
             p = p->prox;
         }
     }
 }
 
 int main(void)
 {
     struct item *lista = NULL;
     int val;
     leiaLista(&lista);
     imprimaLista(lista);
     scanf("%d", &val);
     removaInfoLista(&lista, val);
     imprimaLista(lista);
     return 0;
 }
