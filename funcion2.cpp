#include <stdio.h>
#include <stdlib.h>

int funcion_ImprimeCuadrilatero (int *, int *);

int main (int no_d_arg, char **valores){
       
	    int largo, alto;
        largo = atoi(valores[1]);
        alto = atoi(valores[2]);
        funcion_ImprimeCuadrilatero (&largo, &alto);
}

int funcion_ImprimeCuadrilatero (int * largo, int * alto){
  
  char vertical = '|', horizontal = '-', esquina = '+';

  int  cont_horizontal, alto_contador;
  printf("\n\n");

  for (alto_contador = 0; alto_contador < (*alto); alto_contador ++){
       
	    for (cont_horizontal = 0; cont_horizontal < (*largo); cont_horizontal ++){
       
	        if (alto_contador == 0 || alto_contador == (*alto) - 1){
       
	            if (cont_horizontal == 0 || cont_horizontal == (*largo) - 1){
                    printf("%c", esquina);
    } else {
                    printf("%c", horizontal); }
} else {
                if (cont_horizontal == 0 || cont_horizontal == (*largo) - 1){
                    printf("%c", vertical);
     } else {
                    printf(" "); }
}
}
printf("\n" );
}
}
