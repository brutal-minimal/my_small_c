﻿//дано натуральное число n. вывести цифры числа по одной в строке, начиная с разряда едениц. определить сколько цифр в числе.
#include <stdio.h>
int main ()
{
    char n [11];
    puts ("введите число не более 10 знаков");
    scanf ("%s", &n);
    printf ("%s", n);
    return 0;
    
}
