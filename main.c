#include <stdio.h>
#include <stdlib.h>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"

void zdachalabi();
void execute_task_1();
void execute_task_2();
void execute_task_3();
void execute_task_4();
void execute_task_5();


int main()
{
    zdachalabi();
}

void zdachalabi(){
    int number;
    do{
        printf("\nInput nomer labi: ");
        scanf("%d",&number);
        switch(number){
            case 1:{
                printf("Задано одновимірний масив А розміру N. Поміняти місцями максимальний та мінімальний елемент масиву.\n");
                execute_task_1();
                break;}

            case 2:{
                printf("Знайти номер першого максимального елемента серед додатних елементів, розташованих до першого від’ємного елемента.\n");
                execute_task_2();
                break;}
            case 3:{
                printf("Задано масив цілих чисел 𝐴 𝑛 , 𝑛 ≤ 300. Розробити програму, яка знаходить у цьому масиві й друкує найдовший ланцюжок чисел, упорядкованих за зростанням.\n");
                execute_task_3();
                break;}
            case 4:{
                printf("Дано натуральні n, m (n<m) та дійсні числа a1,a2,…,an, b1, b2, …, bm. Визначити: a) члени, які належать обом послідовностям; b) сукупність значень членів, з яких складаються обидві послідовності; c) чи всі члени послідовності a1,a2,…,an входять у послідовність b1, b2, …, bm; d) які члени послідовності a1,a2,…,an не входять у послідовність b1, b2, …, bm; e) які члени послідовності b1,b2,…,bm не входять у послідовність a1, a2, …, an.\n");
                execute_task_4();
                break;}
            case 5:{
                printf("Визначити суму елементів, що розташовані по зовнішньому контуру таблиці A[i,j], де i=1,2,…,n; j=1,2,…,m.\n");
                execute_task_5();
                break;}
            default:{
                printf("Ta kudi stilki lab");
                break;}
        }
    }while((number>0)&&(number<6));
}

void execute_task_1(){
    int n, i,q;
    float* a;
    float max,min;
    int maxin,minin;

    generatearray(&a,&n);
    findmaxmin(a,n,&max,&min,&maxin,&minin);
    rotateminmax(a,n,&max,&min,&maxin,&minin);

    free(a);
}

void execute_task_2(){
    float* a;
    int n,i,maxin;
    float max;
    generatearray(&a,&n);
    findmax(a,n,&max,&maxin);
    free(a);
}

void execute_task_3(){
    float* a;
    int n;

    generatearray(&a,&n);
    findstreak(a,n);
    free(a);
}

void execute_task_4(){
    float* a;
    float* c;
    int n,i,m,identiccount;

    generatearray(&a,&n);
    generatearray(&c,&m);
    executeoperations(a,c,n,m);


    free(a);
}

void execute_task_5(){
    int i,j,p;
    float** a;

    spaceformatrix(&i,&j,&a);
    generatematrix(i,j,a);
    sumofborderelements(i,j,a);
    for (p=0;p<i;p++){
        free(a[p]);
    free(a);
}
