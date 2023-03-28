#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void findstreak(float a[], int n){
    int streak=1,maxstreak=1,maxstreakpos=0,i;

    for(i=1;i<n;i++){
        if(a[i]>a[i-1]){
            streak++;
            if(streak>maxstreak){ maxstreak=streak; maxstreakpos=i;}
        }
        else{
            streak=1;
        }
    }
    printf("\nstreak is %d \n",maxstreak);
    for(i=maxstreakpos-maxstreak+1;i<maxstreak;i++){
        printf("%f  ",a[i]);
    }
}
