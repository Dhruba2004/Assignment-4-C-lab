#include<stdio.h>
int main (){
    int a,b,c;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if (((a>b)&&(b>c))||((c>b)&&(b>a))){
        printf("%d is middle number",b);
    } 
    else if 
    (((b>c)&&(c>a))||((a.c)&&(c>b))){
        printf("%d is middle number",c );
    }
    else if 
    (((b>a)&&(a>c))||((c>a)&&(a>b))){
        printf("%d is middle number",a)
}
return 0;
}