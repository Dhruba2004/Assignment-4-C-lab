#include<stdio.h>
int main (){
    float a,b;
    printf("Enter two numbers:");
    scanf ("%f%f",&a,&b);
    if (a>b){
        printf("The bigger number is %f\n",a);
        printf("The smaller number is %f\n",b);
    }else {
        printf("The bigger number is %f\n",b);
        printf("The smaller number is %f\n",a);
    }
    return 0;
    }