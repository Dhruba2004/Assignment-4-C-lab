#include<stdio.h>
int main (){
    float a ,b,c,d,x;
    int count;
    printf("Enter the four distinct numbers:");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    printf("Enter x");
    scanf("%f",x);
    if ((x==a)&&(x==b)&&(x==c)&&(x=d)){
        count=4;
    }
    else if (((x==a)&&(x==b)&&(x==c)||(x==a)&&(x==b)&&(x==d)||(x==b)&&(x==c)&&(x==d)||(x==a)&&(x==c)&&(x==d))){
        count=3;
    }
    else if (((x==a)&&(x==b)||(x==a)&&(x==c)||(x==a)&&(x==d)||(x==b)&&(x==c)||(x==b)&&(x==d)||(x==c)||(x=d))){
    count =2;
    }
    else if ((x==a)||(x==b)||(x==c)||(x==d)){
        count =1;
    }
    else {
        count=0;
    }
    printf("Among the four numbers,%d numbers are equal to x",count);
    return 0;
    }