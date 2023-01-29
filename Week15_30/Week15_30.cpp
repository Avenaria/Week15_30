#include <iomanip>
#include<algorithm>
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int i = 0;
int j = 0;
void del(char* str, int c) {
	int size;
	char* str2 = new char[size];
	for (i < strlen(str); i++;j++) {
		if (i != c|| j !=c ) { 
			size++;
			str2[i] = str[j];
		}
	}	 
}
void del2 (char* str, int c) {
	int size;
	char* str2 = new char[size];
	for (i < strlen(str); i++; j++) {
		if (i != c || j != c) {
			size++;
			str2[i] = str[j];
		}
	}
}

void f1(char* str) {
	int size = 0;
	char c = '.';
	char* str2 = new char[size];
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] != c) {
			size++;
			str2[j] = str[i];
		}
		else
			str2[j] = '!';
	}
	
}
void f2(char* str) {//сколько раз символ вводит 
	int count = 0;
	for (int i = 0, j = 0; i < strlen(str); i++, j++) {
		if (str[i] == str[strlen(str) - 1]) {
			count++;
		}
	}
}




int main()
{
	setlocale(LC_ALL, "");
	char* str = new char[255];
	gets_s(str, 254);
   
}

