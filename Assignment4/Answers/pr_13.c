#include<stdio.h>
int main (){
float i,tax;
printf("Enter income:")  
scanf("%f",i);
if(i>15000){
    tax=(((i-15000)*30)/100)+1900
    printf("Tax is :%0.2f",tax);
}
else if(i>6000 && i<15000){
    tax=(((i-6000)*20)/100)+100;
    printf("Tax is %0.2f,tax");
}
else if (i>5000 && i<=6000){
    tax=((i-5000)*10/100);
    printf("Tax is %0.2f",tax);
}
else {
    printf("No tax is needed");
}
return 0;
}