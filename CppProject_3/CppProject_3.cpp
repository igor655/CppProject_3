#include<iostream>
#include<Windows.h>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// указатель на константу
	// константный указатель
	// константный указатель на константу
	// Прата стр 333

	int a = 45;

	const int* ptr_a = &a;

	cout << "указатель на константу = " << *ptr_a << endl;

	char ch[10];

	cin >> ch;

	cout << ch << endl;
	


	return 0;
}