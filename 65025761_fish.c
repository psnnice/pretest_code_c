#include <stdio.h>

int main()
{
    int menu,customer=0;
    char end;
    float   DA,AA,A,AAA,all_tal_money=0,tal_money=0,weith,
            weith1,weith2,weith3,weith4,allweith1=0,allweith2=0,allweith3=0,allweith4=0,
            totalaaa=0,totalaa=0,totala=0,totalDa=0;    
    do
    {
    AAA=0; AA=0; A=0; DA=0;
    weith=0;weith1=0;weith2=0;weith3=0;weith4=0;
    customer++;
    printf("customer #%d\n",customer);
        do
        { 

            printf("Please Select sales menu :\n");
            printf("1. Sales Longan grade AAA (Large)       20.75 THB/KG\n");
            printf("2. Sales Longan grade AA (medium)       15.50 THB/KG\n");
            printf("3. Sales Longan Grade A (small)         12.40 THB/KG\n");
            printf("4. Sales Longan downgrade               5.50 THB/KG\n");
            printf("0. calculate payment\n");

            printf("Select menu :\n");
            scanf("%d",&menu);
            
            if (menu == 0)
                break;
            
            printf("Enter weight to sell :\n");
            scanf("%f",&weith);
           
            if (menu == 1)
            {
                weith1+=weith;
            }
            else if (menu == 2)
            {
                weith2+=weith;
            }
            else if (menu == 3)
            {
                weith3+=weith;
            }
            else if (menu == 4)
            {
                weith4+=weith;
            }
            else
                printf("!!!Error!!! not have menu in this program\n\n");

            AAA=weith1*20.75; AA=weith2*15.50; A=weith3*12.40; DA=weith4*5.50; 
            tal_money=AAA+AA+A+DA;
            allweith1+=weith1; allweith2+=weith2; allweith3+=weith3; allweith4+=weith4;
            totalaaa+=AAA; totalDa+=DA; totala+=A; totalaa+=AA;

            printf("Farmer #%d SALES\n",customer);
    		printf("1. Sales Longan grade AAA (Large)       20.75 THB*%.2f\t\t%.2f THB\n",allweith1,totalaaa);
    		printf("2. Sales Longan grade AA (medium)       15.50 THB*%.2f\t\t%.2f THB\n",allweith2,totalaa);
    		printf("3. Sales Longan Grade A (small)         12.40 THB*%.2f\t\t%.2f THB\n",allweith3,totala);
    		printf("4. Sales Longan downgrade               5.50 THB*%.2f\t\t%.2f THB\n",allweith4,totalDa);
            printf("                                          Total earning :       %.2f Bath\n",tal_money);
            printf("\n\n");
        
        } while (2);
            printf("!!!Calculate payment. . .\n");
    		printf("1. Sales Longan grade AAA (Large)       20.75 THB*%.2f\t\t%.2f THB\n",allweith1,totalaaa);
    		printf("2. Sales Longan grade AA (medium)       15.50 THB*%.2f\t\t%.2f THB\n",allweith2,totalaa);
    		printf("3. Sales Longan Grade A (small)         12.40 THB*%.2f\t\t%.2f THB\n",allweith3,totala);
    		printf("4. Sales Longan downgrade               5.50 THB*%.2f\t\t%.2f THB\n",allweith4,totalDa);
            printf("                                          Total earning :     %.2f Bath\n",tal_money);
            all_tal_money+=tal_money;

        printf("press n or N for end days : \n");
        scanf("%s",&end);

    } while(end!='n'&&end!='N');
    printf("Total Farner have : %d\n",customer);
    printf("EXPENSES OF PhuangThong Longan\n");
    printf("1. Sales Longan grade AAA (Large)       20.75 THB*%.2f\t\t%.2f THB\n",allweith1,totalaaa);
    printf("2. Sales Longan grade AA (medium)       15.50 THB*%.2f\t\t%.2f THB\n",allweith2,totalaa);
    printf("3. Sales Longan Grade A (small)         12.40 THB*%.2f\t\t%.2f THB\n",allweith3,totala);
    printf("4. Sales Longan downgrade               5.50 THB*%.2f\t\t%.2f THB\n",allweith4,totalDa);
    printf("                               Total Expenses for PhuangThong : %.2f THB\n",all_tal_money);
    return 0;
}
