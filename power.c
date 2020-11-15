#include <stdio.h>
#include "myMath.h"
#define e 2.71828


double Power(double x, int y){
    double ans = 1;

    if(y == 0){
      return 1;   
    }

    if(y > 0){
        for(int i = 1; i <= y; i++){
            ans = ans*x;
        }
    }
    if(y < 0){
        for(int i = -1; i >= y; i--){
            ans = ans*x;
            if(i==y){
                ans = 1/ans;
            }
        }
    }
    return ans;

}

double Exponent(int x){
    return Power (e,x);
  
}
