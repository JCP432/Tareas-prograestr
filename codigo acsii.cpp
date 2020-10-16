#include <stdio.h>

int main (){
	char caracter = 'g';
	int valor_ascii = (int) caracter;
	//printf("el valor ascii es: %d", valor_ascii);
	if(valor_ascii >= 48 && valor_ascii <= 57){
	
		printf("El valor %c es digito", caracter);
	
	}else{
		if(valor_ascii >= 65 && valor_ascii <= 90){
			printf("El valor %c es mayuscululas", caracter);
		}
		else{
		if(valor_ascii >= 97 && valor_ascii <= 122){
			printf("El valor %c es minuscula", caracter);
	}else {
		if (valor_ascii >= 33 && valor_ascii <= 47 ){
			printf("El valor %c es un caracter", caracter);
		}
	}
}
	return 0;
}
}
