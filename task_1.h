#include <stdio.h>
#include <stdlib.h>

void generatearray(float ** b,int *n) {
    int i;
    float q;
    scanf("%d",&*n);
    *b = malloc(sizeof(float)*(*n));
    for (i=0;i<*n;i++){
        scanf("%f",&q);
        (*b)[i] = q;
    }
}

void findmaxmin(float a[], int n, float *max, float *min, int *maxin, int *minin){
    int i;
    *max=a[0];
    *min=a[0];
    *maxin=0;
    *minin=0;
    for (i=0;i<n;i++){
        if (a[i]>*max) {*max=a[i]; *maxin=i;}
        if (a[i]<*min) {*min=a[i]; *minin=i;}}
}

void rotateminmax(float b[], int n, float *max, float *min, int *maxin, int *minin){
    int q,mmaxin,mminin;
    int i;
    mmaxin=*maxin;
    mminin=*minin;
    q=b[mmaxin];
    b[mmaxin]=b[mminin];
    b[mminin]=q;
    printf("\n");
    for(i=0;i<n;i++){
        printf("%f ",b[i]);
    }
}
