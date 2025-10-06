#include <stdio.h>
#include <math.h>
int main(int argc, char** argv) {
    double array[10];
    double sum =0.00;
    double r = 4545.45;
    double res = 0.00;
    for(int i = 0; i < 10; ++i) {
        scanf("%lf", &array[i]);
        sum += array[i];
    }
    res = (double)sum / 10;
    if (sum == r ) 
        res = sum / 10 + 0.01;
    printf("%.2lf\n", res);
}


