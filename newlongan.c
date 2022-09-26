#include<stdio.h>
int main()
{   char end;
    int menu,customer=0;
    float aaa=20.75,aa=15.50,a=12.40,da=5.40,kg,kg1=0,kg2=0,kg3=0,kg4=0,kg11=0,kg12=0,kg13=0,kg14=0;
     
     
    printf("\nWelcome to PhuangThong Longan\n");
 	do{ 
 	       customer++;
		 	printf("\nWelcome Farmer #%d\n",customer);
 		
 			re1:
                printf("\nSelect sales menu : \n");
                printf("1. Sales Longan grade AAA (Large)\t%5.2f THB/KG\n",aaa);
                printf("2. Sales Longan grade AA (medium)\t%5.2f THB/KG\n",aa);
                printf("3. Sales Longan Grade A (small)\t\t%5.2f THB/KG\n",a);
                printf("4. Sales Longan downgrade\t\t%5.2f THB/KG\n",da);
                printf("0. Calculated payment\n");
                printf("Select menu : ");
                scanf("%d",&menu);
 			if(menu==0)
 				goto cal;
 			else if(menu==1||menu==2||menu==3||menu==4)
            {
                printf("Enter weight to sell : ");
 			    scanf("%f",&kg);
			    printf("\nyou have \n");
 			    if(menu==1)
			        kg1+=kg;
			    else if(menu==2)
			        kg2+=kg;
                else if(menu==3)
			        kg3+=kg;
                else
			        kg4+=kg;
		        goto cal1;
			}
 			else
            {
                printf("\n!!!Erorr not have menu in this program\n");
 			    goto re1;
            }
 		    cal:
 		   	    printf("\n!!!Calculate payment. . .\n");
 		   	cal1:
                printf("Farmer %d SALEs\n",customer);
                printf("1. Longan grade AAA (Large)\t%5.2f THB*%4.2f %6.2f\n",aaa,kg1,aaa*kg1);
                printf("2. Longan grade AA (medium)\t%5.2f THB*%4.2f %6.2f\n",aa,kg2,aa*kg2);
                printf("3. Longan Grade A (small)\t%5.2f THB*%4.2f %6.2f\n",a,kg3,a*kg3);
                printf("4. Longan downgrade\t\t%5.2f THB*%4.2f %6.2f\n",da,kg4,da*kg4);
                printf("\t\tTotal earning : %6.2f THB\n",aaa*kg1+aa*kg2+a*kg3+da*kg4);
 			if(menu!=0)
 			    goto re1;
			kg11+=kg1;kg12+=kg2;kg13+=kg3;kg14+=kg4;
 			kg1=0;kg2=0;kg3=0;kg4=0;
 		    printf("\nPress n or N for end days : ");
 		    scanf("%s",&end);
	  }while(end!='n'&&menu!='N');
   		    printf("\nEXPENSES OF PhuangThong Longan\n");
			printf("\nTotal Farmer have : %d\n",customer);
   		    printf("1. Longan grade AAA (Large)\t%5.2f THB*%4.2f %6.2f\n",aaa,kg11,aaa*kg11);
			printf("2. Longan grade AA (medium)\t%5.2f THB*%4.2f %6.2f\n",aa,kg12,aa*kg12);
 			printf("3. Longan Grade A (small)\t%5.2f THB*%4.2f %6.2f\n",a,kg13,a*kg13);
 			printf("4. Longan downgrade\t\t%5.2f THB*%4.2f %6.2f\n",da,kg1,da*kg14);
 			printf("\t\tTotal earning : %6.2f THB\n",aaa*kg11+aa*kg12+a*kg13+da*kg14);
}