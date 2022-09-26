#include <stdio.h>

int main()
{
    int i,in,input=2;
    printf("what number that do you want to multiply : \n");
    scanf("%d",&in);

    do{
        for(i=1;i<=12;i++)
        {
        printf("%d * %d = %d \n",input,i,i*input);
        }
        input++;
    printf("---------------\n");
    }while (input<=in);
}