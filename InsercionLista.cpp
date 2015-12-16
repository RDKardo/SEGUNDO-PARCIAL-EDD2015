#include <stdlib.h>

struct lista
{
  int clave;
  struct lista *sig;
};

int main(void)
{
  struct lista *L;
  struct lista *p;
  int i;
  L = NULL; /* Crea una lista vacia */

  for (i = 4; i >= 1; i--)
  {
    /* Reserva memoria para un nodo */
    p = (struct lista *) malloc(sizeof(struct lista));
    p->clave = i; /* Introduce la informacion */

    p->sig = L; /* reorganiza */
    L = p;      /* los enlaces */
  }
  return 0;
}
