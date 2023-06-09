﻿#include "tasks.h"

/*	Task X. Caterpillar [гусиница]
*
*	Гусиница ползёт по вертикальному шесту высотой H метров,
*	поднимаясь за день на A метров, а за ночь спускаясь на B метров.
*	На какой день гусиница доползёт до вершины шеста?
*
*	Примечание
*	Все величины должны быть положительными и удовлетворять условиям: H > B и A > B
* 
*	Формат входных данных [input]
*	Функция получает на вход целые числа H, A, B, причем H > B и A > B.
*
*	Формат выходных данных [output]
*	Функция должна вывести одно натуральное число или 0 в случае некорректных данных.
*
*	[Sample function input]: 10 3 2
*	[Sample function output]: 8
*/

int taskX(int h, int a, int b) {
	if (a < b || h < b || h < 0 || b < 0 || a < 0) {
		return 0;
	}

	int i = 1;

	for (int height = a; height < h; height += a - b) {
		cout << i;
		i++;
	}

	return i;
}