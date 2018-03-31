    #include<stdio.h>

    int main(){


        int a1[3],b1[3],i,j,loop, a_score=0, b_score=0;
        for(i = 0; i<3; i++){
            scanf("%d", &a1[i]);
        }
        for(j = 0; j<3; j++){
            scanf("%d", &b1[j]);
        }
        for(loop =0 ; loop<3; loop++){
            if(a1[loop]>b1[loop]){
                a_score++;
            }
            else if(a1[loop]<b1[loop]){
                b_score++;
            }
        }
        printf("%d %d",a_score,b_score);
        return 0;

    }
