#include<stdio.h>
#include<stdlib.h>

int funcion_sum(int *elementos_maximos){
  
  int funcion_sum = 0, elem_max = *elementos_maximos;
      printf("La suma de los cuadrados del 1 al %d es:\n\n", *elementos_maximos);
      funcion_sum =  (elem_max * (elem_max + 1) * (2 * elem_max + 1))/6;
    printf("SUMA: %d", funcion_sum);
}

int funcion_sum(int *elementos_maximos){
      printf("\n\nLa serie de los cuadrados del 1 al %d es: \n\n", *elementos_maximos);
      
	  for(int i = 1; i <= *elementos_maximos; i ++){
              printf("%d, ", i * i);
      }
      printf("\n\n");
}

int main (int num_of_arg, char **val_for_sq){

  int elementos_maximos;

      for( int i = 1; i < num_of_arg; i ++){
              elementos_maximos = atoi(val_for_sq[i]);                              
              f_suma_serie(&elementos_maximos);
              f_cuadrados(&elementos_maximos);
      }

return 0;
}

