#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 
#include <clocale>  

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int choice;
    int result;
    int i, sum;

    do {
        printf("\n=== Меню ===\n");
        printf("1. Виконати з циклом for\n");
        printf("2. Виконати з циклом while\n");
        printf("3. Виконати з циклом do-while\n");
        printf("0. Вихiд\n");
        printf("Ваш вибiр: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            sum = 0;
            for (i = 2; i <= 20; i += 2) {
                sum += i * i;
            }
            printf("Сума квадратiв парних чисел [1;20] (for): %d\n", sum);
            break;

        case 2:
            sum = 0;
            i = 2;
            while (i <= 20) {
                sum += i * i;
                i += 2;
            }
            printf("Сума квадратiв парних чисел [1;20] (while): %d\n", sum);
            break;

        case 3:
            sum = 0;
            i = 2;
            do {
                sum += i * i;
                i += 2;
            } while (i <= 20);
            printf("Сума квадратiв парних чисел [1;20] (do-while): %d\n", sum);
            break;

        case 0:
            printf("Завершення програми.\n");
            break;

        default:
            printf("Невірний вибір. Спробуйте ще раз.\n");
        }
    } while (choice != 0);

    return 0;
}
