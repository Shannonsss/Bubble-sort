#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include "bsort.h"

int main() {

    // n = 10 random number
    int n = 10, * data;
    int i, j;
    // 判斷 'a' or 'b' ，用 char
    char input;

    srand(time(NULL));

    // 動態配置 n 個 int 空間
    data = malloc(sizeof(int) * n);

    printf("【Random number】 \n");

    // 隨機產生1~100的數並放到 data[i] 
    for (i = 0; i < n; i++) {

        data[i] = rand() % 100 + 1;
        printf("%d \n", data[i]);

    }

    printf("\n");
    printf("\n-----------------------------------\n");

    // switch 大排到小 or 小排到大
    printf("【How to sort?】\n");
    printf("'b' for order the numbers from least to greatest, and 'a' for order the nembers from greatest to least : \n ");
    
    // 輸入到正確才break
    while (1)
    {
        // input character
        scanf_s("%c", &input);

        // 是'a' or 'b'才break
        if ((input == 'a') || (input == 'b'))
            break;
        printf("Error: %c\n", input);
    }


    printf("\n");
    printf("\n-----------------------------------\n");

    // bubble sort
    bsort(data, n, input);

    printf("\n【Result】\n");

    for (i = 0; i < n; i++) {

        printf(" %d \n", data[i]);

    }

    free(data);

    printf("\n");


    return 0;


}

