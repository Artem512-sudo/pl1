#include <stdio.h>
#include <math.h>
int main() {
    double array[10];
    double sum =0;
    double res = 0;
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    res = (double)sum / 10;
    
    printf("%.2lf\n", res);
}
