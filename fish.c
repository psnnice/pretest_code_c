#include <stdio.h>

void main(){
    int m1=0,m2=0,m3=0,m4=0,m5=0,m6=0,menu=0,customer=0;
    char name[30],last[30],letter2;
    float total_money=0.0,money=0.0,vat=0.0,total_day=0.0;
        do{
            customer++;
            m1=0,m2=0,m3=0,m4=0,m5=0,m6=0;
            printf("%d. Enter name and surname : ",customer);
            scanf("%s\t%s",name,last );

                do{
                    printf("\nMENU : \n");
                    printf("1. Shokubutsu 500 ml 350 Bath\n");
                    printf("2. Tsubaki 500 ml 499 Bath\n");
                    printf("3. Oral B 160 g 170 Bath\n");
                    printf("4. Fom Shokubutsu 100 g 120 Bath\n");
                    printf("5. Listerine 250 ml 125 Bath\n");
                    printf("6. Vassaline 600 ml 220 Bath\n");
                    printf("0. Calculate Money\n");
                    printf("Select menu : ");
                    scanf("%d",&menu);

                    if(menu==1)
                    m1++;
                    else if(menu==2)
                    m2++;
                    else if(menu==3)
                    m3++;
                    else if(menu==4)
                    m4++;
                    else if(menu==5)
                    m5++;
                    else if(menu==6)
                    m6++;

                    printf("\nU have \n");
                    printf("1. Shokubutsu 500 ml %d * 350 : %d Bath\n",m1,m1*350);
                    printf("2. Tsubaki 500 ml %d * 499 : %d Bath\n",m2,m2*499);
                    printf("3. Oral B 160 g %d * 170 : %d Bath\n",m3,m3*170);
                    printf("4. Fom Shokubutsu 100 g %d * 120 : %d Bath\n",m4,m4*120);
                    printf("5. Listerine 250 ml %d * 125 : %d Bath\n",m5,m5*125);
                    printf("6. Vassaline 600 ml %d * 220 : %d Bath\n\n",m6,m6*220);

                    money = (m1*350)+(m2*499)+(m3*170)+(m4*120)+(m5*125)+(m6*220);
                    }while(menu!=0);
                    vat = money *0.07;
                    total_money = money + vat;
                    printf("Name : %s\t%s\n",name,last);
                    printf("Price : %.2f Bath\n",money);
                    printf("Price + Vat 7 %% : %.2f Bath\n\n",total_money);

                    printf("END DAY y or Y ? : ");
                    scanf("%s",&letter2);
                    total_day += total_money;
            }while(letter2!='y'&&letter2!='Y');
            printf("\n****************\n");
            printf("To day Have Customer [%d]\n",customer);
            printf("Today Have money : %.2f Bath\n",total_day);
}