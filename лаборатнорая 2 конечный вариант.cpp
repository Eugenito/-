﻿#include <iostream>
#include <stdio.h>
#include<locale.h>
int main()
{
	int n = 10, p; //обьявляю переменные n (ей присваиваю значение),p просто обьявляю
	int composition = 1; // создаю переменную,на которую буду умножать подходящие мне числа
	int mass[10]; // инициализирую массив в котором будет находится числовая послежовательность
	setlocale(LC_ALL, "Rus"); // устанавливаю язык текста 
	printf("Введите элементы массива"); //вывожу текст на экран
	for (int i = 0; i < 10; i++) // создаю цикл для ввода с клавиатуры элементов массива
	{
		scanf_s("%d", &mass[i]);// прошу ввести элементы массива
	}
	printf("Введите делитель");// вывожу текст на экран
	scanf_s("%d", &p);// прошу ввести делитель
	for (int i = 0; i < 10; i++)// начинаю цикл
	{
		mass[i];
		if (mass[i] % p == 0)// если i/р,то умножаю composition на mass[i]
		{
			composition = composition * mass[i];
		}
	}
	printf("%d", composition);//вывожу на экран получившийся composition
	return 0;// завершаю программу
}
