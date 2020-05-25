#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int ant;
void crear (void);
void modificar (void);
void lista (void);
void buscar (void);
void buscarSI (void);
void borrar (void);
void notas (void);

struct billetera{
 char nombre[20];
 char valor[20];
 char siglas[10];
};
struct billetera moneda[50];
int menu (void){
	printf ("\t\t\t***********************\n");
    printf ("\t\t\t\t MENU\n");
    printf ("\t\t\t***********************\n\n");
    printf ("1.-Registrar una moneda.\n");
    printf ("2.-Buscar una moneda por su nombre.\n");
    printf ("3.-Buscar una moneda por sus siglas.\n");
    printf ("4.-Borrar un moneda.\n");
    printf ("5.-Mostrar lista de monedas.\n");
    printf ("6.-Terminar.\n\n");
    printf ("Seleccione una opcion: ");
}
int main (){
 int op;
 op==menu();
 scanf ("%d", &op);
 if(op==1) {
 	system("cls");
}else{
	if(op==2){
		system("cls");
	}else{
		if(op==3){
			system("cls");
		}else{
			if(op==4){
				system("cls");
			}else{
				if(op==5){
					system("cls");
				}else{
					if(op==6){
						system("cls");
					}
				}
			}
		}
	}
}
 printf ("\n");
 while (op !=6){
 	switch(op) {
     case 1:
        printf("Ingrese Datos de la Cripto\n");
        crear();
        op==menu();
		scanf("%d", &op);
        break;
     
     case 2:
     	printf("Ingrese el nombre de la moneda que desee buscar: \n");
	    buscar();
        op==menu();
        scanf("%d", &op);
        break;

     case 3:
     	printf("Ingrese las siglas de la moneda que desee buscar: \n");
        buscarSI();
        op==menu();
        scanf("%d", &op);
        break;
     
     case 4:
     	printf("Eliminar una moneda\n");
     	borrar();
     	op==menu();
     	scanf("%d", &op);
     	break;
     	
     case 5:
	    printf("Lista de monedas\n");
		lista();
		op==menu();
     	scanf("%d", &op);
     	break;
     }
   }
}
void crear(){
 int i=0;
 int ter;
 ant=0;
 ter=0;
  for (i=ant; i<50&&ter!=1; i++){
  printf ("Introducir Cantidad: ");
  fflush (stdin);
  gets (moneda[i].valor);
  printf ("Introducir NOMBRE: ");
  fflush (stdin);
  gets (moneda[i].nombre);
  printf ("Introducir siglas: ");
  scanf ("%s", moneda[i].siglas);
  printf ("¿Termino el registro?\n");
  printf("1.-Si\n");
  printf("2.-No\n");
  scanf ("%d", &ter);
  ant==i;
  system("cls");
  }
   if (ant==50){
   printf ("\nLa lista esta llena.");
   }
}
void lista (){
 FILE *n;
 n=fopen("Lista de criptos.txt","w");
 int i;
 i=0;
 ant=0;
 printf ("\n\n Siglas     Nombre    Cantidad\n");
 for (i=ant; i<50; i++){
  printf ("  %s  ", moneda[i].siglas);
  printf ("      %s ", moneda[i].nombre);
  printf ("       %s", moneda[i].valor);
  fprintf(n, "%d\n" ,);
  ant==i;
  fclose(n);
  printf("\nSe ha creado un archivo txt de su lista de registros.");
 }
}
void buscar (){
 int i;
 char busco[30];
 printf ("\nNombre: ");
 fflush (stdin);
 gets (busco);
 for (i=0; i<50; i++){
  if (strcmp (busco, moneda[i].nombre)==0){
  	printf("\n Cantidad de la moneda que posee: %s", moneda[i].valor);
    printf ("\n Nombre de la moneda: %s", moneda[i].nombre);
    printf ("\n Siglas de la moneda: %s", moneda[i].siglas);
  }
 }
 if (strcmp (busco, moneda[i].nombre)!=0){
  printf ("\nNo hay coincidencias\n");
 }
}
void buscarSI (){
 int i;
 char busco[10];
 printf ("\nSiglas: ");
 fflush (stdin);
 gets (busco);
 for (i=0; i<50; i++){
  if (strcmp (busco, moneda[i].siglas)==0){
  	printf("\n Cantidad de la moneda que posee: %s", moneda[i].valor);
    printf ("\n Nombre de la moneda: %s", moneda[i].nombre);
    printf ("\n Siglas de la moneda: %s", moneda[i].siglas);
  }
 }
 if (strcmp (busco, moneda[i].siglas)!=0){
  printf ("\nNo hay coincidencias\n");
 }
}
void borrar (){
 int i;
 char busco[30];
 int j;
 int k;
 printf ("\n\nBuscar por nombre:   ");
 fflush (stdin);
 gets (busco);
 for (i=0; i<50; i++){
  if (strcmp (busco, moneda[i].nombre)==0){
   printf ("\n%s", moneda[i].valor);
   printf ("\n%s", moneda[i].nombre);
   printf ("\n%s", moneda[i].siglas);
 
  printf ("\n¿Esta seguro de querer borrar este registro?\n");
  printf("1.-Si. \n 2.-NO");
  scanf ("%d", &k);
  if (k=1){
   for (j=i; j<50; j++){
    moneda[j]=moneda[j+1];
    ant--;
   }
  }
  else{
  }
  }
 }
 if (strcmp (busco, moneda[i].nombre)!=0){
  printf ("\nNo se han encontrado coincidencias\n");
 }
}

