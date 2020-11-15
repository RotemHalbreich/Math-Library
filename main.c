#include <stdio.h>
#include "myMath.h"

int main(){

    double x;

    printf("Please insert a number: \n");
    scanf("%lf",&x);
   
    printf("The first function to calculate: f(x)=e^x+x^3-2: \n");
    double ans1 = add(Exponent((int)x),sub(Power(x,3), 2.0));
    printf("Answer 1 = %0.4lf\n", ans1);

    printf("The second function to calculate: f(x)=3x+2x^2: \n");
    double ans2 = add(mul(x,3), mul(Power(x,2), 2));
    printf("Answer 2 = %0.4lf\n", ans2);

    printf("The third function to calculate: f(x)=(4x^3)/5-2x: \n");
    double ans3 = sub(div(mul(Power(x,3),4),5), mul(x,2));
    printf("Answer 3 = %0.4lf\n", ans3);

    return 0;
}