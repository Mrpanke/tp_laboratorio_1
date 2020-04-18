/*
 * Operaciones.c
 *
 *  Created on: 9 abr. 2020
 *      Author: Facundo
 */


//CUERPO

#include <stdio.h>
#include <stdlib.h>

float SumaDosNumeros(float* pResultado, float num1, float num2){

	int retorno = -1;
	if(pResultado != NULL){
		*pResultado = (float)num1 + num2;
		 retorno = 0;
	}

	return retorno;
}

float RestaDosNumeros(float* pResultado, float num1, float num2){

	int retorno = -1;
	if(pResultado != NULL){
		*pResultado = (float)num1 - num2;
		 retorno = 0;
	}

	return retorno;
}
float DivisionDosNumeros(float* pResultado, float num1, float num2){

	int retorno = -1;
	if(pResultado != NULL && num2 != 0){
		*pResultado = (float)num1 / num2;
		 retorno = 0;
	}

	return retorno;
}
float MultiDosNumeros(float* pResultado, int num1, int num2){

	int retorno = -1;
	if(pResultado != NULL){
		*pResultado = (float)num1 * num2;
		 retorno = 0;
	}

	return retorno;
}
int Factorial1Num(int* pResultado, int num1){
	int retorno = -1;
	int res;
		if(pResultado != NULL){
			res = num1;
			for(int i = 1  ; i <= num1 ; i++){
				res = res * i;
			}
			pResultado = res;
			retorno = 0;
		}
return retorno;
}
int Factorial2Num(int* pResultado, int num2){
	int retorno = -1;
	int res;
		if(pResultado != NULL){
			res = num2;
			for(int i = 1  ; i <= num2 ; i++){
				res = res * i;
			}
			pResultado = res;
			retorno = 0;
		}
return retorno;
}
