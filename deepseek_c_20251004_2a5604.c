#include <stdio.h>  
int main(){
    double result = 0.0;
    int n;
    scanf("%d", &n); 
    for (; n > 0; n--){
        result += 1.0/n;     
    }
    printf("sum = %f\n", result);
    return 0;
}