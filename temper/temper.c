#include <stdio.h>

/* Вывод таблицы температур по Цельсию и Форенгейту
        для fahr = 0, 20, ..., 300 */

int main()
{
        int fahr, celsius;
        int lower, upper, step;

        lower = 0;   /* нижняя граница температуры в таблице */
        upper = 300; /* верхняя граница температуры в таблице */
        step = 20;   /* величина шага */

        fahr = lower;
        
        while (fahr <= upper) {
                celsius = 5 * (fahr - 32) / 9;
                printf("%3d %6d\n", fahr, celsius);
                fahr = fahr + step;
        }
}
