#include <stdio.h>
#include "operaciones.h"

int main ()
{
	struct nodo lista;
	int buscar;
	int valor = 1;
	while(valor < 10){
		insertar_al_final(&lista,valor);
		valor++;
	}

	printf("escribe el numero a borrar de la siguiente lista\n");
	imprimir_lista(&lista);
	printf("\n");
	scanf("%d", &buscar);
	eliminar_nodo(&lista,buscar);
	imprimir_lista(&lista);

	return 0;
}
