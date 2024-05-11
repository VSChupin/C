#include <stdio.h>

/* ¬ывод таблицы температур по ÷ельсию и ‘оренгейту
        дл€ fahr = 0, 20, ..., 300 */

int main() {

        float fahr, celsius;
        float lower, upper, step;

        lower = -17.8;   /* нижн€€ граница температуры в таблице */
        upper = 148.9; /* верхн€€ граница температуры в таблице */
        step = 11.1;   /* величина шага */

        celsius = lower;

        printf("\tProgramm of temperature\n\n");

        while (celsius <= upper) {
                fahr = (9.0/5.0) * celsius + 32.0;
                printf("%5.1f %6.0f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
