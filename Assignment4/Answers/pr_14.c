#include<stdio.h>
int main (){
    int X,Y;
    printf("Enter X:");
    scanf("%d",&X);
    switch (X)
    {
    case 6:
    Y=X+10;
    break;
    case 7:
    Y=(X*X)+6;
    break;
    case 12 :
    Y=(2*X)+4;
    default:
    Y=X*(6-1);
    break;
    }
printf("The result is %d",Y);
return 0;
}
