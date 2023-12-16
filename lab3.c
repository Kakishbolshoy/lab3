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

    int mult;
    int sum;
    for (i = 0; i < n; i++) {
        mult = 1;
        sum = 0;
        int k;
        for (k = 2; k < n; k++) {
            if (a[i]==a[k]) {
                sum += a[k - 1];
                mult *= a[k - 1];
            }
        }
        printf("Сумма равна: %d\n", sum);
        if (mult==1){
            printf("произведение равно 0 \n");
        }
        else{
        printf("Произведение равно: %d\n", mult);
        printf("\n");
        }
    }

    return 0;
}

    