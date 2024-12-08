#include<stdio.h>
void swap(int *A,int *B){
    int temp = *A;
    *A =*B;
    *B =temp;
    }
    int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a=%d b=%d\n",a,b);

    return 0;
    }
