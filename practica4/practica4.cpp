#include <iostream>
using namespace std;

//showarr
template <typename T> void showarr(T arr[], int length) {
	cout << "Массив: \n[";
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
//cleararr
template <typename T> void cleararr(T arr[], int length, int num) {
	cout << "Новый массив: \n[";
	for (int i = 0; i < length; i++) {
		if (arr[i] == num)
			arr[i] = 0;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n";
}
// index sum
int indexsum(int arr1[],int length, int arr2[], int length2,  int index) {
	int sum = 0;
	if (index > length - 1 || index > length2 - 1 || index < 0) {
		cout << "ERROR\n";
		return 0;
	}
	else
	for (int i = 0; i < length; i++) {
			if (i == index)
				sum = arr1[i] + arr2[i];
	}
	cout << "Сумма чисел по индексу " << index << " = ";
		return sum;
}
// max sum
template <typename T> T maxsum (T arr[], int length){
	T max = arr[0];
	T max1 = arr[0];
	for (int i = 0; i < length; i++) {
		if (arr[i] > max) 
			max = arr[i];	
	}
	for (int i = 0; i < max1 ; i++) {
		if (arr[i] >= max)
			max1 = arr[i];
	}
	cout << "Сумма двух максимальных элементов массива = ";
	return max + max1;

}
// prime range
void primerange(int num1, int num2) {
	for (int i = num1; i <= num2; i++) {
		int count = 1;
		for (int j = 1; j <=i / 2; j++) 
			if (i % j == 0)
				count++;
		if (count == 2)
			cout << i << ", ";
	}
}



int main() {
	setlocale(LC_ALL, "ru");

	// Задача 1
	cout << "Задача 1\n";
	int n;
	int z1[10]{ 1, 2, 3, 5, 6, 4, 7, 5, 5, 0 };
	showarr(z1, 10);
	cout << "\nВведите элемент, который хотите обнулить: ";
	cin >> n;
	cleararr(z1, 10, n);
	cout << endl;

	// Задача 2
	cout << "Задача 2\n";
	int ix;
	int z21[5]{ 4, 6, 7, -9, 1};
	int z22[5]{ 8, 7, -5, 2, 4};
	showarr(z21, 5);
	showarr(z22, 5);
	cout << "\nВведите индекс: ";
	cin >> ix;
	cout << indexsum(z21, 5, z22, 5, ix);
	cout << endl << endl;

	// Задача 3
	cout << "Задача 3\n";
	int z3[10]{ 1,2,3 ,4 ,5, 5,6,7, 6, 4 };
	showarr(z3, 10);
	cout << maxsum(z3, 10);
	cout << endl << endl;
	
	// Задача 4
	cout << "Задача 4\n";
	int b, e;
	cout << "Введите начало диапазона: ";
	cin >> b;
	cout << "Введите конец диапазона: ";
	cin >> e;
	primerange(b, e);
	return 0;
}