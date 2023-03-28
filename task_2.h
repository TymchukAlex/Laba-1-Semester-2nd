#include <stdio.h>
#include <stdlib.h>

void findmax(float a[], int n, float *max, int *maxin){
    int i;
    *max=a[0];
    *maxin=0;
    for (i=0;i<n;i++){
        if (a[i]>*max) {*max=a[i]; *maxin=i;}
        if (a[i]<0) break;

    }
    printf("\n%f    %d\n",*max,*maxin);
    for (i=0;i<n;i++){
        printf("%f ",a[i]);
    }
}
