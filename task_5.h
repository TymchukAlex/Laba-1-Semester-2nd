#include <stdio.h>
#include <stdlib.h>
void spaceformatrix(int *i,int *j, float ***a){

    int ii;
    printf("i - ");
    scanf("%d", i);
    printf("j - ");
    scanf("%d", j);

    *a=(float**)malloc((*i)*sizeof(float*));
    for(ii=0;ii<(*i);ii++){
        (*a)[ii]=(float*)malloc((*j)*sizeof(float));
    }
}

void generatematrix(int i,int j, float **a){
    int ii,jj;
    for(ii=0;ii<i;ii++){
        for(jj=0;jj<j;jj++) {a[ii][jj]=rand()%10; printf("%f  ",a[ii][jj]);}
        printf("\n");
    }
}

void sumofborderelements(int i,int j, float **a){
    float sum=0;
    int ii, jj;
    for (ii=0;ii<i;ii++){
        sum=sum+a[ii][0]+a[ii][j-1];
    }
    for(jj=1;jj<j-1;jj++){
        sum=sum+a[0][jj]+a[i-1][jj];
    }
    printf("%f",sum);
}
