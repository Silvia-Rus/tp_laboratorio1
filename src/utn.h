/*
 * utn.h
 *
 *  Created on: 7 sept. 2020
 *      Author: usuario
 */

#ifndef UTN_H_
#define UTN_H_

//FUNCIONES PARA TOMAR VALORES
int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);
//CALCULADORA
int sumar(int* resultado, int operador1, int operador2);
int restar(int* pResultado, int operador1, int operador2);
int multiplicar(int* pResultado, int operador1, int operador2);
int dividir(float* pResultado, int operador1, int operador2);
int factorial(int* pResultado,int operador);


#endif /* UTN_H_ */