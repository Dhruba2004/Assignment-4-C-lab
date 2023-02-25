#include<stdio.h>
int main (){
float a,b,c,d,x;
printf("Enter the four distinct numbers:");
scanf("%f%f%f%f",&a,&b,&c,&d);
printf("\nEnter x:");
scanf("%f",&x);
if(x==a){
    printf("x is equal to a");
}
else if (x==b){
    printf("x is equal to b");
}
else if (x==c){
    printf("x is equal to c");
}
else if (x==d){
    printf("x is equal to d");
}
else {
    printf("x is not equal to a or b or c or d");
}
return 0;
}