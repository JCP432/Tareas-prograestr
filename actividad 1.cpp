#include <stdio.h>

#include <stdlib.h>

int captura(long int(*vector)[4]){
	
  int opcion, cl=0, cont=0;
  printf("\t\tservicio de taxi\n\n");
  printf("ingresa la informacion del cliente:\n");
  
  do{
  	
    printf("\nCliente %d\n",cl+1);
    cont++;
    printf("C%cdigo del taxi: ",162);
    scanf("%ld",&vector[cl][0]);
    
    printf("ingresa la clave del cliente : ");
    scanf("%ld",&vector[cl][1]);
    
    printf("ingresa el tipo de servicio: ");
    scanf("%ld",&vector[cl][2]);
    
    printf("ingresa el costo del servicio: ");
    scanf("%ld",&vector[cl][3]);
    
    printf("\npara ingresar otro cliente presione s SI\t n NO: ");
    scanf("%d",&opcion);
    
	cl++;
  }while(opcion==1);
  return cont;
}

void imprimir_Datos(long int(*vector)[4], int mayor){
  printf("\nDatos capturados:\n");
  printf("\nCliente\t\tClave\tTipo de servicio\tCosto\n");
  
  int cl,cl2;
  for(cl= 0;cl<mayor;cl++){
    for(cl2=0;cl2<4;cl2++){
      printf("%ld\t\t",vector[cl][cl2]);
    }
    printf("\n");
  }
}

void produccio(long int(*vector)[4], int mayor){
  int suma[]={0,0,0,0,0};
  int indicador;
  
  for(indicador= 0; indicador< mayor; indicador++){
    
	switch(vector[indicador][0]){
    	
      case 1:
        suma[0]=suma[0]+vector[indicador][3];
        break;
        
      case 2:
        suma[1]=suma[1]+vector[indicador][3];
        break;
        
      case 3:
        suma[2]=suma[2]+vector[indicador][3];
        break;
        
      case 4:
        suma[3]=suma[3]+vector[indicador][3];
        break;
        
      case 5:
        suma[4]=suma[4]+vector[indicador][3];
        break;
        default:printf("Ingresar otra opcion");

    }
  }
  printf("\nTotal de producci%cn de cada taxi:\n",162);
  
  for(indicador= 0;indicador<5;indicador++){
  	
    printf("C%cdigo del taxi %d: %c %d\n",162,indicador+1,36,suma[indicador]);
    
  }
}

void servicio_que_mas_se_usa(long int(*vector)[4], int mayor){
  int servicio1=0,servicio2 = 0,servicio3 = 0, in,mayorServicio;
 
  for(in=0;in< mayor; in++){
    switch(vector[in][2]){
      case 1:
        servicio1++;
        break;
      case 2:
        servicio2++;
        break;
      case 3:
        servicio3++;
        break;
        default:printf("Otra opcion",162);
    }
  }
  mayorServicio= servicio1;
  if(servicio2>mayorServicio){
    mayorServicio= servicio2;
  }
  if(servicio3 >mayorServicio){
    mayorServicio = servicio3;
  }
  if(mayorServicio== servicio1){
  	
  	printf("\t\tCantidad de veces\n\n");
  	
    printf("\n01 Puerta a Puerta se us%c %d veces\n",162,servicio1);
  }else{
    if(mayorServicio==servicio2){
      printf("\n02 Normal se utilizo %d veces\n",servicio2);
    }else{
      if(mayorServicio==servicio3){
        printf("\n03 Especial se utilizo %d veces\n",servicio3);
      }
    }
  }
}

void Cliente_pago_mas(long int(*vector)[4], int max){
	
  int cl,ind, mayorPago;
  mayorPago= vector[0][3];
  for(cl= 0; cl < max; cl++){
    if(vector[cl][3] > mayorPago){
      mayorPago= vector[cl][3];
      ind = cl;
    }
  }
  printf("\nEl cliente que m%cs pag%c fue:\n",160,162);
  printf("Cliente: %ld\n",vector[ind][1]);
  printf("Pago: %ld\n",vector[ind][3]);
}

int main(){
	
   int datos_x_cliente[200][4];
  int clientes, datos;
  
  clientes=captura(datos_x_cliente);
  
  datos(datos_x_cliente,cliente);
  
  produccion(datos_x_cliente,clientes);
  
  servicio_que_mas_se_usa(datos_x_cliente,clientes);
  
  Cliente_que_mas_pago(datos_x_cliente,clientes);
 
 
  return 0;
}
