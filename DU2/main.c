#include <stdio.h>
#include <math.h>

int squareInt(int number)
{
    int orderNumber=0;
    orderNumber=0;
    for (int i = 1;i<=1000000; i++)
    {

        int freeIntegerNumber=1;
        for (int j = 2; j*j <= i; j++)
        {
            if (i%(j*j)==0)
            {
                freeIntegerNumber=0;
                break;
            }
            
        }   
        if (freeIntegerNumber)
        {
            orderNumber++;
            if (orderNumber==number)
            {
                return  i;
            }    
            
        }   
                
    }

    return 0; 
       
}


int main(void)
{
    int number;
    int in;
    int result;
    //int orderNumber=0;
    //int freeIntegerNumber=1;
    printf("Poradi:\n");
    while((in=scanf("%d",&number))!=EOF)
    {

        if(number<1 || in!=1)
        {
            printf("Nespravny vstup.\n");
            return 0;
        }
        result=squareInt(number);
        printf("= %d\n",result);
              
        
        
        
    }
    return 0;
}