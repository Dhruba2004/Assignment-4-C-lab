#include<stdio.h>
int main (){
    float m,q;
    printf("Enter marks:");
    scanf("%f",&m);
    if (m>90)
        printf("GRADE A");
    }else if(m>70 && m<79){
        printf("GRADE B");
    }else if(m>60 && m<69){
        printf("GRADE C");
    }else if (m>50 && m<59){
        printf("GRADE D");
    }else if (m>35 && m<49){
        printf("GRADE P");
        }else {
            printf("GRADE F");
        }
    }