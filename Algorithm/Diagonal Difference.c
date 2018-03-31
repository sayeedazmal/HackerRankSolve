#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>


int main(){
    int n,row,colum,a_i,a_j;
    scanf("%d",&n);
    int a[n][n];
    int sum = 0, sum1 =0;
    int result,mult;

    for(a_i = 0; a_i < n; a_i++){
       for( a_j = 0; a_j < n; a_j++){

          scanf("%d",&a[a_i][a_j]);
       }
    }
    //sum of first diagonal
    for(row=0,colum=0; row<n; colum++,row++){

            sum+=a[row][colum];
            
        }

    //sum of 2nd diagonal
    for(row=0, colum=n-1; row<n; colum-- , row++){
            sum1+= a[row][colum];
           
        }
        mult = sum-sum1;
        result = abs(mult);
        printf("%d", result);

    return 0;
    }