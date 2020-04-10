/*
 * Operaciones.c
 *
 *  Created on: 9 abr. 2020
 *      Author: Facundo
 */


//CUERPO


float SumaDosNumeros(float num1, float num2){

	float res;
	res = num1 + num2;
	return res;
}

float RestaDosNumeros(float num1, float num2){

	float res;
	res = num1 - num2;
	return res;
}
float DivisionDosNumeros(float num1, float num2){

	float res;
	res = num1 / num2;
	return res;
}
float MultiDosNumeros(float num1, float num2){

	float res;
	res = num1 * num2;
	return res;
}
int Factorial1Num(int num1){
	int res;
	res = num1;
	for(int i = 1  ; i <= num1 ; i++){
		res = res * i;
	}
return res;
}
int Factorial2Num(int num2){
	int res;
	res = num2;
	for(int i = 1  ; i  <= num2 ; i++){
		res = res * i;
	}
return res;
}
