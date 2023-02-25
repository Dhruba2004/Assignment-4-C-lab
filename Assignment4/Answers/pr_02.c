#include<stdio.h>
#include<math.h>
int main (){
    double a,b,c,det,root1,root2,realPart,imagPart;
    printf("\nGive a b c");
    scanf("%lf%lf%lf",&a,&b,&c);
det=(b*b)-(4*a*c);
if(det>0){
    root1=(-b+sqrt(det))/(2*a);
    root2=(-b-sqrt(det))/(2*a);
    printf("root1=%lf and root2=%lf",root1,root2);
}else if (det==0){
    root1=root2=-b/(2*a);
    printf("root1=root2=%lf",root1);
} else {
    realPart=-b/(2*a);
    imagPart=sqrt(-det)/(2*a);
    printf("root1=%lf+%lfi and root2=%2f-%2fi",realPart,imagPart,realPart,imagPart);
}
return 0;
}
