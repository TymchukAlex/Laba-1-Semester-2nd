#include <stdio.h>
#include <stdlib.h>

void executeoperations(float a[], float b[], int aroz, int broz)
{
    int i,q,identiccount,necount,bnecount=0,status;
    float sum;
    float identic[100],nevhodiat[100],bnevhodiat[100];
    identiccount=0;
    sum=0;
    necount=0;
    for (i=0;i<aroz;i++){
        for (q=0;q<broz;q++){
            if (a[i]==b[q]) {identic[identiccount]=a[i]; identiccount++; sum=sum+a[i];}
        }
    }
    for (i=0;i<identiccount;i++){
        printf("%f  ",identic[i]);}
    printf("\n%f",sum);
    if(identiccount==aroz) printf("\nYes\n");
    else printf("\nNo\n");
    status=0;
    for (i=0;i<aroz;i++){
        for (q=0;q<broz;q++){
            if (a[i]==b[q]) status=1;
        }
        if (status==0) nevhodiat[necount++]=a[i];
        status=0;
    }
    for (i=0;i<necount;i++) printf("%f  ",nevhodiat[i]);
    for (i=0;i<broz;i++){
        for (q=0;q<aroz;q++){
            if (b[i]==a[q]) status=1;
        }
        if (status==0) bnevhodiat[bnecount++]=b[i];
        status=0;
    }
    printf("\n");
    for (i=0;i<bnecount;i++) printf("%f  ",bnevhodiat[i]);
}
