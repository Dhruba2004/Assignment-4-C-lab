#include<stdio.h>
int main (){
    float a,b,c;
    printf("Enter three numbers");
    scanf("%f%f%f",&a,&b,&c);
    if(a==b && a!=c){
        printf("The different  number is %f",c);
    }
    else if 
       (b==c && b!=a){
        printf("The different number is %f",b);
    }
    else if 
       (c==a && c!=b){
        printf("The different number is %f",b);
       }
       else if 
       (a=b && a!=c){
        printf("All numbers are  same");
       }
       else {
        printf("All numbers is different");
       }
       return 0;

}