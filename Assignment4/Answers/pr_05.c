#include<stdio.h>
#include<math.h>
main (){
    double a,b,c,m;
    printf("Enter:");
    scanf("%lf%lf%lf",&a,&b,&c);
    m=(-a/b);
    printf("The slope is %lf",m);
    if(m==0){
        printf("\nThe line is vertical");
    }else {
        printf("\nThe line is not vertical");
    }
}