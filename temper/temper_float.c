#include <stdio.h>

/* ����� ������� ���������� �� ������� � ����������
        ��� fahr = 0, 20, ..., 300 */

int main() {

        float fahr, celsius;
        float lower, upper, step;

        lower = -17.8;   /* ������ ������� ����������� � ������� */
        upper = 148.9; /* ������� ������� ����������� � ������� */
        step = 11.1;   /* �������� ���� */

        celsius = lower;

        printf("\tProgramm of temperature\n\n");

        while (celsius <= upper) {
                fahr = (9.0/5.0) * celsius + 32.0;
                printf("%5.1f %6.0f\n", celsius, fahr);
                celsius = celsius + step;
        }
}
