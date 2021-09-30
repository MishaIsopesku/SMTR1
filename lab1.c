#include <stdio.h>
int main()
{
    int size_i;
    int size_j;

    printf("Ширина: ");
    scanf("%d", &size_i);
    printf("Висота: ");
    scanf("%d", &size_j);

    int max_elements = 2; //можна змінювати (кількість елементів які замінятся на 0)
    int a[size_i][size_j];

    /* ввід  даних */
    for (int j = 0; j<size_j; j++) {
        for (int i = 0; i<size_i; i++) {
            printf("a[%d][%d] = ", j, i);
            scanf("%d", &a[i][j]);
        }
    }

    /* вивід даних */
    for (int j = 0; j<size_j; j++) {
        for (int i = 0; i<size_i; i++) {
        printf("%d ", a[j][i]);
        }
    printf("\n");
    }

    for (int k = 0; k<max_elements; k++) {
        int max_element = a[0][0];

        /* пошук максимального елемента */
        for (int i = 0; i<size_i; i++) {
            for (int j = 0; j<size_j; j++) {
                if (max_element < a[i][j]) {
                    max_element = a[i][j];
                }
            }
        }
        
        /* заміна елемента на 0 */
        for (int i = 0; i<size_i; i++) {
            for (int j = 0; j<size_j; j++) {
                if (max_element == a[i][j]) {
                    a[i][j] = 0;
                }
            }
        }

        printf("%d", max_element);
    }

    
    printf("\nРезультат:\n");
    
    /* вивід даних */
    for (int j = 0; j<size_j; j++) {
        printf("|");
        for (int i = 0; i<size_i; i++) {
            printf("%d ", a[i][j]);
        }
        printf("|\n");
    }
}