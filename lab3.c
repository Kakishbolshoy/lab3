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
printf("начальный массив: ");
for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }
printf("\n");

int start = -1;
int end = -1;
int mult = 1;
int sum = 0;
for (i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
        if (a[i] == a[j]) {
            start = i;
            end = j;
            break;
            }
}
for (int k = start + 1; k < end; k++) {
    sum += a[k];
    mult *= a[k];
    
break;
}
}

printf("Между индексами %d и %d: ", start, end);
printf("Сумма равна: %d\n", sum);
printf("Произведение равно: %d\n", mult);
printf("\n");


a[start] = sum;
a[end] = mult;
    

printf("конечный массив: ");
for (i = 0; i < n; i++) {
    printf("%d ", a[i]);
    }
printf("\n");

return 0;
}
