#include <stdio.h>
#define s 10
void print_s(float array[]){
    for(int i = 0; i < s; ++i)
        printf("%.2f\n", array[i]);
    printf("\n");
}
int main(int argc, char** argv) {
    float array[s];
    printf("Введите десять   чисел:\n");
    for(int i = 0; i < s; ++i) {
        scanf("%f", &array[i]);
    }  
    for (int i = 0; i < s /2; i++){
        float d = array[i];
        array[i] = array[s - 1 - i];
        array[s - 1 - i] = d;
    }
    print_s(array);
}

