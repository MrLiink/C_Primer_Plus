#include <stdio.h>

int main(void){
    int increment_odd = 0, increment_even = 0;
    int sum_odd = 0, sum_even = 0;
    int n_odd = 0, n_even = 0;
    int num;
    printf("enter the number:\n");
    while(scanf("%d", &num) == 1){
        if(num % 2 == 0){
            increment_even++;
            n_even++;
            sum_even += num;
        }
        else{
            increment_odd++;
            n_odd++;
            sum_odd += num;
        }
    }
    printf("%d odd number, average is: %.2f\n", n_odd, (float)sum_odd/n_odd);
    printf("%d even number, average is: %.2f\n", n_even, (float)sum_even/n_even);

    return 0;
}