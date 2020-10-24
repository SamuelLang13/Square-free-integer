#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int in;
    int powNumber;
    int restNumber;
    int freeIntegerNumber;
    printf("Poradi:\n");
    while((in=scanf("%d",&number))!=EOF)
    {

        if(number<1 || in!=1)
        {
            printf("Nespravny vstup.\n");
            return 0;
        }

        for (int i = 1; i<=number; i++)
        {
            powNumber=i*i;
            restNumber=number%i;
            //printf("%d\n",restNumber);
            if(powNumber*restNumber!=number)
            {
                freeIntegerNumber=1;
            }
            else
            {
                freeIntegerNumber=0;
            }
            
        }
        if(freeIntegerNumber==1)
        {
            printf("= %d\n",number);
        }
        

    }
    


    return 0;
}