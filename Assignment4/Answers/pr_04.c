#include<stdio.h>
#include<math.h>
int main (){
    float a,b,c;
    printf("Enter sides of a triangle:");
    scanf("%f%f%f",&a,&b,&c);
if (((pow(a,2))== (pow(b,2))+(pow(c,2))||(pow(b,2))==(pow(a,2))+(pow(c,2)))||((pow(c,2))==(pow(a,2))+(pow(b,2))))
{
    printf("Angle A is 90 degrees");
} else {
    printf("Angle A is not 90 degrees");
}
return 0;
}