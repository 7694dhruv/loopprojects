//Q.2 Digit Counter

 

#include <stdio.h>

void main()
{
    int number,count,temp;

    printf("enter the number:");
    scanf("%d", &number);

    count=0;

    if (number==0)
    {
        count=1;
        printf("1");
    }
    else{
        for (temp=number;temp!=0;temp/=10)
        {
           count++;
        }
        printf("%d",count);
    }

}