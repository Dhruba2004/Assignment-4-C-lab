#include<stdio.h>
int main (){
    int X,Y,Z,r;
    printf("Enter X,Y,Z:");
    scanf("%d%d%d",&X,&Y,&Z);
switch (X){
    case 0:
    r=Y+Z;
    printf("The result is %d",r);
    break;
    case 1:
    r=Y-Z;
    printf("The result is %d",r);
    break;
    case 2:
    r=Y*Z;
    printf("The result is %d",r);
    case 3:
    r=Y/Z;
    printf("The result is %d",r);
    break;
    default:
    printf("Not specified for the value of X given");
}
return 0;
}