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
    float array[s];
    printf("Введите десять   чисел:\n");
    for(int i = 0; i < s; ++i) {
        scanf("%f", &array[i]);
    }
    printf("Введите число k:\n");
    scanf("%d", &k);
    if (k<0){
        for (int i =0; i >k; i--){
            float d = array[0];
            for(int i = 0; i < s -1; i++){
                array[i]= array[i + 1];
            }
        array[s - 1] = d;
        }
    }
    else{
        for (int i =0; i <k; i++){
            float d = array[s -1];
            for(int i = s -1; i> 0; i--){
                array[i]= array[i -1];
            }
        array[0] = d;
        }
    }
    printf("\n");
    print_s(array);  
}

