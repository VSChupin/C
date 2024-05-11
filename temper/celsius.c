#include <stdio.h>

// Перевод температур по Цельсию в шкалу Фаренгейта и вывода соответствующей таблицы.

int main() {
    
    float fhar, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 100;
    step = 10;

    printf("\tProgram of temperature\n\n");

    celsius = lower;
    
    while (celsius <= upper) {

        fhar = (9.0/5.0) * celsius + 32.0;
        printf("%6.0f %6.0f\n", celsius, fhar);

        celsius = celsius + step;

    }
}