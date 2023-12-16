#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int n;
    printf("Введите количество элементов: ");
    scanf("%d", &n);

    int a[n];
    int i;
    for (i = 0; i < n; i++) {
        a[i] = rand() % 101 - 50;
    }
    printf("Массив: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    int mult;
    int sum;
    for (i = 0; i < n; i++) {
        mult = 1;
        sum = 0;
        int k;
        for (k = i + 1; k < n; k++) {
            if (a[i] == a[k]) {
                sum += a[k - 1];
                mult *= a[k - 1];
            }
        }
        printf("Между элементами %d и %d: ", i, k);
        printf("Сумма равна: %d\n", sum);
        if (mult == 1) {
            printf("Произведение равно 0\n");
        } else {
            printf("Произведение равно: %d\n", mult);
        }
        printf("\n");
    }

    return 0;
}
    
    
