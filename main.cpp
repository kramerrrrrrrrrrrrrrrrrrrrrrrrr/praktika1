#include <stdio.h>
#include <stdlib.h> 
#define SIZE 1024 
int main(int argc, char** argv) { 
    char* str = (char*)malloc(sizeof(char) * SIZE); 
    printf("Введите своё имя: \n");  // Из merging: добавлен пробел после двоеточия
    str = gets(str);                 // Из main: изменен способ ввода
    printf("Привет, %s", str); 
    return 0; 
}


