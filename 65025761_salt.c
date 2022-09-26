#include <stdio.h>

int main()
{
    int product,customer=1,end;
    float   black,pink,flo,com,rock,tal_weiht=0,all_tal_money=0,tal_money=0,weith,
            weith1,weith2,weith3,weith4,weith5,allweith1=0,allweith2=0,allweith3=0,allweith4=0,allweith5=0,
            totalblack=0,totalpink=0,totalflo=0,totalcom=0,totalrock=0;    
    do
    {
    black=0; pink=0; flo=0; com=0; rock=0;
    weith=0;weith1=0;weith2=0;weith3=0;weith4=0;weith5=0;
    printf("customer #%d\n",customer);
        do
        { 

            printf("Please choose tpye of salt that you want to pay :\n");
            printf("1. Black salt                        300.00 Bath:Kilogram\n");
            printf("2. Pnik salt                         250.75 Bath:Kilogram\n");
            printf("3. Flower of salt that we made        55.25 Bath:Kilogram\n");
            printf("4. Common salt                        20.22 Bath:Kilogram\n");
            printf("5. Rock salt                           5.40 Bath:Kilogram\n");
            printf("0. calculate payment\n");

            printf("Select product list :\n");
            scanf("%d",&product);
            printf("How much do you want :\n");
            scanf("%f",&weith);

            if (product == 1)
            {
                weith1+=weith;
            }
            else if (product == 2)
            {
                weith2+=weith;
            }
            else if (product == 3)
            {
                weith3+=weith;
            }
            else if (product == 4)
            {
                weith4+=weith;
            }
            else if (product == 5)
            {
                weith5+=weith;
            }
            else if (product == 0)
            {
                break;
            }
            else
                printf("it isn't in list\n\n");

            tal_weiht = weith1+weith2+weith3+weith4+weith5;
            black=weith1*300.00; pink=weith2*250.75; flo=weith3*55.25; com=weith4*20.22; rock=weith5*5.40;
            tal_money=black+pink+flo+com+rock;

            printf("----YOU PRODUCT LIST----             kilogram           price\n",customer);
            printf("1. Black salt                          %.2f\t\t%.2f Bath\n",weith1,black);
            printf("2. Pnik salt                           %.2f\t\t%.2f Bath\n",weith2,pink);
            printf("3. Flower of salt that we made         %.2f\t\t%.2f Bath\n",weith3,flo);
            printf("4. Common salt                         %.2f\t\t%.2f Bath\n",weith4,com);
            printf("5. Rock salt                           %.2f\t\t%.2f Bath\n",weith5,rock);
            printf("\n\n");
        
        } while (1);
            printf("customer %d payment                  kilogram           price\n",customer);
            printf("1. Black salt                          %.2f\t\t%.2f Bath\n",weith1,black);
            printf("2. Pnik salt                           %.2f\t\t%.2f Bath\n",weith2,pink);
            printf("3. Flower of salt that we made         %.2f\t\t%.2f Bath\n",weith3,flo);
            printf("4. Common salt                         %.2f\t\t%.2f Bath\n",weith4,com);
            printf("5. Rock salt                           %.2f\t\t%.2f Bath\n",weith5,rock);
            printf("                                      total             %.2f Bath\n",tal_money);
        all_tal_money+=tal_money;
        customer++;
        allweith1+=weith1; allweith2+=weith2; allweith3+=weith3; allweith4+=weith4; allweith5+=weith5;
        totalblack+=black; totalcom+=com; totalflo+=flo; totalpink+=pink; totalrock+=rock;
        printf("press 0 for end this day : ");
        scanf("%d\n",&end);
    } while (end!=0);
    printf("-------------------------------------------------------------------------------\n");
    printf("ALL PRODUCT LIST&MONY THAT YOU GOT       List           Money\n");
    printf("1. Black salt                          %.2f\t\t%.2f Bath\n",allweith1,totalblack);
    printf("2. Pnik salt                           %.2f\t\t%.2f Bath\n",allweith2,totalpink);
    printf("3. Flower of salt that we made         %.2f\t\t%.2f Bath\n",allweith3,totalflo);
    printf("4. Common salt                         %.2f\t\t%.2f Bath\n",allweith4,totalcom);
    printf("5. Rock salt                           %.2f\t\t%.2f Bath\n",allweith5,totalrock);
    printf("                             total customer %d            %.2f Bath\n",customer,all_tal_money);
}
