// write program to accept 4 marks and calculate  sum of total marks and percentage
#include<stdio.h>
   int main (){ 
     

    float m1,m2,m3,m4,sum ,percentage;
    
    printf(" \n Enter marks for subject 1 : ");
    scanf("%f", &m1);

    printf("\n Enter marks for subject 2 :  ");
    scanf("%f", &m2);

    printf("\n Enter marks for subject 3 : ");
    scanf("%f", &m3);

    printf("\n Enter marks for subject 4: ");
    scanf("%f",&m4);
    sum =m1+m2+m3+m4;

    percentage= (sum/4);
    printf("sum = %f\n",sum);
    printf("percentage =%f\n",percentage);

    return 0;
   }
    
    
  
   