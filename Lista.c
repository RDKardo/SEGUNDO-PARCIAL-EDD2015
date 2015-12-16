#include <stdio.h>
#include <stdlib.h>
struct registro{
int valor;
struct registro *sig;

};
typedef struct registro _nodo;

_nodo *CrearLista(_nodo *apuntador){
return (apuntador = NULL);
}
_nodo *insertarEnLista(int numero, _nodo *apuntador){

_nodo *registroNuevo, *apuntadorAuxiliar;
registroNuevo = (_nodo *)malloc(sizeof(_nodo));

if (registroNuevo != NULL){
        registroNuevo -> valor = numero;
        registroNuevo -> sig = NULL;



        if(apuntador == NULL)
            apuntador= registroNuevo;
        else{
           apuntadorAuxiliar = apuntador;
           while(apuntadorAuxiliar ->sig !=NULL)
           apuntadorAuxiliar= apuntadorAuxiliar -> sig;

           apuntadorAuxiliar -> sig = registroNuevo;


        }





}

return apuntador;

}


void imprimirLista(_nodo *apuntador){
_nodo *apuntadorAuxiliar;

apuntadorAuxiliar = apuntador;
printf("Contenido de la lista  : ininioLista->");

while (apuntadorAuxiliar != NULL){
printf("%d -> ", apuntadorAuxiliar -> valor);
    apuntadorAuxiliar = apuntadorAuxiliar ->sig;



}

printf("NULL \n");
return;
}


int main(){
_nodo *inicioLista;

inicioLista = CrearLista(inicioLista);
inicioLista = insertarEnLista(5,inicioLista);
inicioLista = insertarEnLista(7,inicioLista);
inicioLista = insertarEnLista(8,inicioLista);
inicioLista = insertarEnLista(2,inicioLista);


imprimirLista(inicioLista);



return EXIT_SUCCESS;

}
