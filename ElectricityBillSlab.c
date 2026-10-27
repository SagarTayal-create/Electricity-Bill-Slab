#include<stdio.h>
int main()
{
    int u,b;
    printf("Enter the unit consumed :");
    scanf("%d",&u);

    if(u>=0 && u<=100)
    {
        b=u*2;
     printf("Electricity bill = %d",b);
    }
    else if(u>=101 && u<=200)
    {
        b=(100*2)+((u-100)*3);
     printf("Electricity bill = %d",b);       
    }
    else if (u>200)
    {
        b=(100*2)+(100*3)+((u-200)*5);
     printf("Electricity bill = %d",b);
    }
    return 0;
}