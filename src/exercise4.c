#include <stdio.h>
#include <stdlib.h>
#define s 10
void print_s(float array[]){
    for(int i = 0; i < s; ++i)
        printf("%.2f\n", array[i]);
    printf("\n");
}
int main(int argc, char** argv){
    int k;
    float x;
    float array[s];
    printf("Введите десять   чисел:\n");
    for(int i = 0; i < s; ++i) {
        scanf("%f", &array[i]);
    }
    printf("Введите число X:\n");
    scanf("%f", &x);
    printf("Введите число K:\n");
    scanf("%d", &k);
    if (k > 0){
        //for (int i =0; i <k; i++){
            //float d = array[s -1];
        for(int i = s -1; i>= k; i--){
            array[i]= array[i -1];
        }
        //array[0] = d;  
    }
    array[k] = x;
    printf("\n");
    print_s(array);  
}

