#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int in;
    int tmp;
    //int i;
    //int prev;
    //int powNumber;
    //int sqrtNumber;
    //int restNumber;
    //int freeIntegerNumber=0;
    printf("Poradi:\n");
    while((in=scanf("%d",&number))!=EOF)
    {

        if(number<1 || in!=1)
        {
            printf("Nespravny vstup.\n");
            return 0;
        }

        /*for (int i = 1; i <= number; i++)
        {
            
        }*/
        

        if(number%2==0)
        {
            number=number/2;
        }
        if(number%2==0)
        {
            printf("Neni to bezstvorcove cislo\n");        
        }
        for (int j = 3; j <= sqrt(number); j=j+2)
        {
            if(number%j==0)
            {
                number=number/j;

                if(number%j==0)
                {
                    printf("Neni to bezstvorcove cislo\n");
                }

            }
        }

    }
    


    return 0;
}