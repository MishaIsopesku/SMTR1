#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int x = 10, y = 10;
int i,j, a[x][y];
int i_min = 0,j_min = 0;
srand(time(NULL));
for(i=0;i<x;i++)
{
for(j=0;j<y;j++)
{
a[i][j] = rand() % 201-100;
printf("%5d",a[i][j]);
if(a[i][j] < a[i_min][j_min]) /* пошук мінімального значення */
{
i_min = i;
j_min = j;
}
}
printf("\n");
}

for(i = i_min; i < x - 1; i++)
{
for(j = 0; j < y; j++)
{
a[i][j] = a[i+1][j];
/* копіюємо дані з наступного рядка */
}
}
x--; /* зменшуємо кількість рядків */
/* виводимо, що вийшло на екран */
printf("Вивід матриці без рядка з мінімальним значенням добутку усіх його елементів ");

putchar('\n');
for(i = 0; i < x; i++)
{
for(j = 0; j < y; j++)
printf("%5d",a[i][j]);
putchar('\n');
}

return 0;
}