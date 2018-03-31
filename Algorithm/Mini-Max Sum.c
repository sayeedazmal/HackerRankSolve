#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

void miniMaxSum(int arr_size, int* arr) {
    // Complete this function
  
    int res[100];
    int max=-10000,min=99999;
    for(int i =0; i<arr_size; i++){
        int sum=0;
         for(int k = 0; k<arr_size; k++){
             if(i!=k){
                 sum += arr[k];
        
             }
         }
        res[i] = sum;  
    }
    for(int p = 0; p<arr_size; p++){
    if(min>res[p]){
         min = res[p];
        }
    if(max<res[p]){
            max = res[p];
        }
    }
    printf("%d %d",min,max);
   
}

int main() {
    int *arr = malloc(sizeof(int) * 5);
    for (int arr_i = 0; arr_i < 5; arr_i++) {
       scanf("%i",&arr[arr_i]);
    }
    miniMaxSum(5, arr);
    return 0;
}
