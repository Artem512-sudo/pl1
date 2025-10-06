#include <stdio.h>
int main(int argc, char** argv) {
    float array[10];
    float sum =0;
    float res = 0;
    printf("Введите десять   чисел:\n");
    for(int i = 0; i < 10; ++i) {
        scanf("%f", &array[i]);
        sum += array[i];
    }
    res = sum / 10;
    printf("ответ: %.2f\n", res);
}

