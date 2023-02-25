#include<stdio.h>
#include<math.h>
#include<complex.h>
int main (){
float a,b,c,det,x1,x2;
printf("Enter three numbers:");
scanf("%f%f%f",&a,&b,&c);
det=(b*b)-(4*a*c);
if(det>0){
    x1=(-b+sqrt(det))/(2*a);
    x2=(-b-sqrt(det))/(2*a);
    printf("The roots are real and they are %f and %f",x1,x2);
}
else if(det<0){
    complex x1=(-b+sqrt(det))/(2*a);
    complex x2=(-b-sqrt(det))/(2*a);
    printf("The roots are :%f+%fi and %f%fi",creal(x1),cimag(x1),creal(x2),cimag(x2));
}
else {
    x1=(-b/(2*a));
    printf("The root are equal and the root is %f",x1);
}
return 0;
}
