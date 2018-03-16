#include <stdio.h>
#define COLS 4

int sum(int ar[], int n);
int sum2d(int (*ar)[COLS], int rows);
int main(void){
    int * ptr1;
    int (* ptr2)[COLS];
    int total1, total2, total3;
    ptr1 = (int [2]){10, 20};
    ptr2 = (int [2][COLS]){{1,2,3,-9}, {4,5,6,-8}};
    total1 = sum(ptr1, 2);
    total2 = sum2d(ptr2, 2);
    total3 = sum((int []){4,4,4,5,5,5}, 6);
    printf("total1 = %d\n", total1);
    printf("total2 = %d\n", total2);
    printf("total3 = %d\n", total3);

}
int sum(int a[], int n){
    int total = 0;
    for(int i =0;i<n;i++){
        total += a[i];
    }
    return total;
}
int sum2d(int a[][COLS], int rows){
    int total = 0;
    for(int i = 0;i<rows;i++){
        for(int j = 0;j<COLS;j++){
            total += a[i][j];
        }
    }
    return total;
}
