// Персональный шаблон проекта C++
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	//int n = 10, m = 15;
 /*
	cout << &n << endl;
	n = 100;
	cout << &n << endl;*/

	/*
	int* pn; // 
	pn = &n;
	cout << pn << endl; 
	//cout << &n << endl;

	int sum = *pn + 10;
	cout << sum << endl;
	*pn = -7;
	cout << n << endl;

	cout << "---\n";
	//pn = &m;
	//cout << pn << endl;
	int* pm = &m; // Указатель pm хранит адрес переменной m
	cout << *pm << endl;

	double k = 1.1;
	double* pk = &k; */
/*
	int arr[5] = { 1, 2, 3, 4, 5 };
	//cout << arr[0] << endl;
	int* pArr = arr;
	// cout << *(pArr + 1) <<endl; // вывод 0-го элемента массива. Звёздочка выносится за скобки. Переходим на следующую ячейку в опер.памяти
	// int* pArr3 = &arr[3];
	// cout << *(pArr3 - 1) << endl;

	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(pArr + i) << ", ";
	cout << "\b\b]\n";

	int sum = *(pArr + 2) + *(pArr + 4);
	cout << sum << endl;

	*pArr = 10;
	*(pArr + 3) = 55;

	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << *(arr + i) << ", ";
	cout << "\b\b]\n";
	pArr = &sum; 
	*(arr + 3) = 111; // Так можно, потому-что arr является указателем на массив
	//arr = &sum; // Нельзя переопределить указатель 1го элемента массива
	*/

	// Задание Дз14.1
	cout << "Изначальный массив:\n[";
	int z14[10];
	int* pz14 = &z14[0]; // int *pz14 = z14; - разницы как написать нет
	for (int i = 0; i < 10; i++) {
		*(pz14 + i) = rand() % 10 + 1;
		cout << *(pz14 + i) << ", ";
	}
	cout << "\b\b]\n";
	int sum = 0, count = 0;
	for (int i = 0; i < 10; i++)
		if (*(z14 + i) % 2 == 0) { // если элемент с адресом z14 со сдвигом i делится без остатка на 2 == 0
			sum += *(z14 + i); // название массива z14 является указателем на массив
			count++;
		}

	cout << "Среднее арифметическое элементов чётных элементов массива = " << sum / count << endl;

	return 0;
}