#include <stdio.h>
#include <stdlib.h>
//Ingresar la mayor cantidad de dolares.

int main(){

int dinero;
char tipo; //P, D, L, B
int v;
int dolarMax;
int flag = 0;
int acumP = 0;
int contP = 0;
float promP = 0;

    for(v = 0; v < 5; v++){

           printf("Ingrese tipo de dinero.");

           fflush(stdin);
           scanf("%c",&tipo);

           printf("Ingrese cantidad de dinero.");

           fflush(stdin);
           scanf("%d",&dinero);

           if((dinero > dolarMax && tipo == 'd') || (flag == 0&& tipo == 'd')){

            dolarMax = dinero;

            flag = 1;


           }

           if(tipo == 'p'){

            acumP = acumP + dinero;

           contP++;


           }





      }

      if(contP != 0){

            promP = acumP / contP;

           }


      printf("\nDolar Maximo: %d",dolarMax);
      printf("\nPromedio de pesos; %f",promP);

      return 0;


}
