#include <stdio.h>
#include <iostream>
#include <time.h>
#include <locale.h>



void main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "");

	/*
	1.	Дан квадратный массив из n элементов. 
	Найти произведение элементов первой строки
	*/

	/*int x[2][3] = { 0 }, sum=1;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}

	for (size_t i = 0; i < 3; i++)
	{
			sum *= x[0][i];
	}
	printf("%d;\n", sum);*/

	/*
	3.	Дана целочисленная матрица размера 5×10.
	Найти минимальное значение среди сумм элементов всех ее строк
	*/

	/*int x[5][10] = { 0 }, sum = 0, min = 10;
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 10; j++)
		{
			sum += x[i][j];
		}
		if (sum < min)
		{
			min = sum;
		}
	}
	printf("min = %d\n", min);*/

	/*
	4.	В произвольной матрице - отсортировать по убыванию элементы последовательности,
	расположенные после второго отрицательного числа.
	*/

	/*int x[2][3] = { 0 };
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			x[i][j] = -10 + rand() % 60;
			printf("%d\t", x[i][j]);
		}
		printf("\n");
	}

	
	for (size_t k = 0; k < 2; k++)
	{
		for (size_t r = 0; r < 3; r++)
		{
			for (int i = 0; i <= 2; i++)
			{
				for (int j = 0; j <= 3; j++)
				{
					if (x[i][j] > x[k][r])
					{
						int tmp = x[i][j];
						x[i][j] = x[k][r];
						x[k][r] = tmp;
					}
				}
			}
		}
	}

	printf("Отсортированный массив: \n");
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d\n", x[i][j]);
		}
	}*/

	/*
	5.	Дан массив A(n,m).
	Удалить строки массива, не имеющие ни одного повторяющегося элемента
	*/

	/*int x[3][3] = { 0 }, count = 0;
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			x[i][j] = 1 + rand() % 100;
			printf("%d\n", x[i][j]);
		}
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3 - 1; j++)
		{
			if (x[i][j] == x[i][j+1])
			{
				count++;
			}
		}
		if (count == 0)
		{
			for (size_t j = 0; j < 3; j++)
			{
				
				x[i][j] = 0;
			}
		}
		count = 0;
	}
	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			printf("%d\t", x[i][j]);
		}
	}*/

	/*
	6.	Элементы матрицы A сделать с помощью генератора случайных чисел. 
	Сделать новую матрицу B , в которой удалить с матрицы А ряд,  
	в котором минимальный элемент среди элементов главной диагонали
	*/

	/*int x[2][2] = { 0 }, min = 20;
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}

	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			if (x[i][j] < min)
			{
				min = x[i][j];
			}
			
		}
		printf("min %d\n", min);
		if (x[i][i] == min)
		{
			for (size_t j = 0; j < 3; j++)
			{
				x[i][j] = 0;
			}
			min = 100;
		}
	}
	for (size_t i = 0; i < 2; i++)
	{
		for (size_t j = 0; j < 2; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}*/


	/*
	8.	Написать программу, 
	которая в матрице чисел A(N,M) находит все элементы,
	равные числу, введенному с клавиатуры. 
	Подсчитать число таких элементов
	*/

	/*int x[5][5] = { 0 }, s, count=0;
	printf("Введите число: ");
	scanf_s("%d", &s);
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			x[i][j] = 1 + rand() % 50;
			printf("%d\n", x[i][j]);
		}
	}
	for (size_t i = 0; i < 5; i++)
	{
		for (size_t j = 0; j < 5; j++)
		{
			if (x[i][j] == s)
			{
				count++;
			}
		}
	}
	printf("Подсчет: %d\n", count);*/

	system("pause");
}