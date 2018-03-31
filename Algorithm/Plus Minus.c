#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,arr_i,i;
    int count=0, count1=0, count2=0;
    scanf("%d",&n);
    int arr[n];
    for( arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }


    for( i = 0; i<n; i++){
        if(arr[i]<0){
            count++;


        }else if(arr[i]>0){
            count1++;


        }else{
            count2++;
        }
    }


    double result,result1,result2;

    result= (double)count/n;
    result1= (double)count1/n;
    result2= (double)count2/n;

    printf("%lf\n", result1);
    printf("%lf\n", result);
    printf("%lf\n", result2);

    return 0;
}
