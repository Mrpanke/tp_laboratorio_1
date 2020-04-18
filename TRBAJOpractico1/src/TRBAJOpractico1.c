/*
 ============================================================================
 Name        : TRBAJOpractico1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Operaciones.h"
int main(void) {

	setbuf( stdout, NULL);
	float num1;
	float num2;
	int Numero1;
	int Numero2;
	float respuestaOp;
	int respuesta;
	int respuestaNum1F;
	int respuestaNum2F;

	printf("\n     Bienvenido a la calculadora\n");
printf("\n---------- ");
printf("Para una mejor precision numerica se presentan los resultados con dos decimales sean exactos o no.\n ");

	do{
		printf("\n¿Que operacion quiere realizar?\n");
		printf("\nIngrese 1 para sumar dos numeros(A+B).\n");
		printf("\nIngrese 2 para restar dos numeros(A-B).\n");
		printf("\nIngrese 3 para dividir dos numeros(A/B).\n");
		printf("\nIngrese 4 para multiplicar dos numeros(A*B).\n");
		printf("\nIgrese 5 para calcular el factorial de cada numero(Factorial de A y de B).\n");
		scanf("%d", &respuesta);
		while(respuesta >5 || respuesta < 1 ){
			printf("================================================================================\n ");
			printf("\nLa operacion que quiere realizar es inexistente.Intente nuevamente\n");
			printf("\nIngrese 1 para sumar dos numeros(A+B).\n");
			printf("\nIngrese 2 para restar dos numeros(A-B).\n");
			printf("\nIngrese 3 para dividir dos numeros(A/B).\n");
			printf("\nIngrese 4 para multiplicar dos numeros(A*B).\n");
			printf("\nIgrese 5 para calcular el factorial de cada numero(Factorial de A y de B).\n");
			scanf("%d", &respuesta);

		}
	}while(respuesta >5 || respuesta < 1 );
		switch(respuesta){
			case 1:
				printf("\nUsted eligio una suma.\n");
				printf("================================================================================\n ");
				printf("\n     Ingrese el primer numero(A).\n ");
				scanf("%f", &num1);
				printf("-------------------------------------------------------\n ");

				printf("\n     Ingrese el segundo numero(B).\n ");
				scanf("%f", &num2);
				printf("-------------------------------------------------------\n ");
				SumaDosNumeros(&respuestaOp,num1,num2);
				printf("\nLa respuesta de la suma(A+B) es de: %.2f\n",respuestaOp);
			break;
			case 2:
				printf("\nUsted eligio una resta.\n");
				printf("================================================================================\n ");
				printf("\n     Ingrese el primer numero(A).\n ");
				scanf("%f", &num1);
				printf("-------------------------------------------------------\n ");

				printf("\n     Ingrese el segundo numero(B).\n ");
				scanf("%f", &num2);
				printf("-------------------------------------------------------\n ");
				RestaDosNumeros(&respuestaOp,num1,num2);
				printf("\nLa respuesta de la resta(A-B) es de: %.2f\n",respuestaOp);
			break;
			case 3:
				printf("\nUsted eligio una division.\n");
				printf("================================================================================\n ");
				printf("\n     Ingrese el primer numero(A).\n ");
				scanf("%f", &num1);
				printf("-------------------------------------------------------\n ");

				printf("\n     Ingrese el segundo numero(B).\n ");
				scanf("%f", &num2);
				printf("-------------------------------------------------------\n ");
					if(DivisionDosNumeros(&respuestaOp,num1,num2)!= -1){
						printf("\nLa respuesta de la division(A/B) es de: %.2f\n",respuestaOp);
					}else{
						printf("No se puede dividir por cero. ");
					}
				break;
			case 4:
				printf("\nUsted eligio una multiplicacion.\n");
				printf("================================================================================\n ");
				printf("\n     Ingrese el primer numero(A).\n ");
				scanf("%f", &num1);
				printf("-------------------------------------------------------\n ");

				printf("\n     Ingrese el segundo numero(B).\n ");
				scanf("%f", &num2);
				printf("-------------------------------------------------------\n ");
				MultiDosNumeros(&respuestaOp, num1, num2);
				printf("\nLa respuesta de la multiplicacion(A*B) es de: %.2f\n",respuestaOp);
			break;
			case 5:
				printf("\nUsted eligio un factorial.\n");
				printf("================================================================================\n ");
				printf("\n     Ingrese el primer numero(A).\n ");
				scanf("%d", &Numero1);
				printf("-------------------------------------------------------\n ");

				printf("\n     Ingrese el segundo numero(B).\n ");
				scanf("%d", &Numero2);
				printf("-------------------------------------------------------\n ");
				Factorial1Num(&respuestaNum1F, Numero1);
				Factorial2Num(&respuestaNum2F, Numero2);
				printf("\nEl factorial del primer numero(A) es de: %d Y el del segundo(B) es de: %d\n",respuestaNum1F, respuestaNum2F);
			break;
		}





return 0;

}
