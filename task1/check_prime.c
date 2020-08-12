#include<stdio.h>

int checkprime(int);

int main()
{
    int number,result;
    printf("Enter the number to be checked;\n");
    scanf("%d",&number);

    result=checkprime(number);

    if (result==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

}

    int checkprime(int a)
    {
            int i,factor=0;
            for(i=1;i<=a;i++)
            {
                if((a%i)==0)
                {
                    factor+=1;
                }
            }
            if(factor==2)
            {
                    return 1;
            }
            else
            {
                    return 0;
            }

    }



