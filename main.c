#include <stdio.h>
#include <math.h>

int main(void)
{
    int number;
    int in;
    printf("Poradi:\n");
    while((in=scanf("%d",&number))!=EOF)
    {

        if(number<1 || in!=1)
        {
            printf("Nespravny vstup.\n");
            return 0;
        }
    }
    


    return 0;
}