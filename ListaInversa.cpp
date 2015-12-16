#include <stdio.h>  
int main(){  
     int cont=0,w=0,i,s,k,tem,c,num;  
     printf("ingresa longitud del arreglo\n");  
       scanf("%d",&c);  
       int N[c];  
       while(cont!=c){  
       printf("Ingresa numero\n");  
       scanf("%d",&num);  
       N[cont]=num;  
       cont++;  
       }  
       for(i=0;i<c;i++){  
       printf("%d ",N[i]);  
       }  
       printf("\nSeleccione: \n");  
       printf("(1) Orden Decreciente\n");  
       printf("(2) Orden Creciente\n");  
       scanf("%d",&s);  
       if(s==1){  
       while(w!=(c-1)){  
  w=0;  
  for (k=0;k<(c-1);k++){  
   if(N[k]>=N[k+1]){  
    w=w+1;  
                       }else{  
                    tem=N[k];  
                    N[k]=N[k+1];  
                    N[k+1]=tem;  
                 }  
               }  
          }  
       for(i=0;i<c;i++){  
       printf("%d ",N[i]);  
       }  
       }else{  
       while(w!=(c-1)){  
  w=0;  
  for (k=0;k<(c-1);k++){  
   if(N[k]<=N[k+1]){  
    w=w+1;  
                       }else{  
                    tem=N[k];  
                    N[k]=N[k+1];  
                    N[k+1]=tem;  
                 }  
               }  
          }  
       for(i=0;i<c;i++){  
       printf("%d ",N[i]);  
       }  
       }  
      return 0;  
}  
