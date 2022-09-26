#include <stdio.h>
#include <string.h>
#include <conio.h>
typedef struct
{
	char add_no[20],vil,sub,dis,pro;
}address;

typedef struct 
{
	float w_a,w_b,w_c,w_d,mw_a,mw_b,mw_c,mw_d,tal_w,tal_m;
	int e;
}product;

typedef struct
{
	char name[30],sur,mo,age,gen;
	int no;
	float weight; 
	address add;
	product duct;

}famer;

char type;
int i=0,a,b,c,d;
float total_allm,total_allw,alla,allb,allc,alld,allma,allmb,allmc,allmd;
famer *ptr[5000];
famer person[5000];

float price_cal(int i)
{

	if(type=='a')
	{
		a=1;
		ptr[i]->duct.w_a=(ptr[i]->duct.w_a+ptr[i]->weight);	
		ptr[i]->duct.mw_a=ptr[i]->duct.w_a*9.50;
		return ptr[i]->weight*9.50;
	}
	if(type=='b')
	{
		b=1;
		ptr[i]->duct.w_b=(ptr[i]->duct.w_b+ptr[i]->weight);	
		ptr[i]->duct.mw_b=ptr[i]->duct.w_b*3.50;
		return ptr[i]->weight*3.50;
	}
	if(type=='c')
	{
		c=1;
		ptr[i]->duct.w_c=(ptr[i]->duct.w_c+ptr[i]->weight);	
		ptr[i]->duct.mw_c=ptr[i]->duct.w_c*8.3;
		return ptr[i]->weight*8.30;
	}
	if(type=='d')
	{
		d=1;
		ptr[i]->duct.w_d=(ptr[i]->duct.w_d+ptr[i]->weight);	
		ptr[i]->duct.mw_d=ptr[i]->duct.w_d*1;
		return ptr[i]->weight*1;
	}
	ptr[i]->duct.e=(a+b+c+d);
	ptr[i]->duct.tal_w=ptr[i]->duct.w_a+ptr[i]->duct.w_b+ptr[i]->duct.w_c+ptr[i]->duct.w_d;
	ptr[i]->duct.tal_m=ptr[i]->duct.mw_a+ptr[i]->duct.mw_b+ptr[i]->duct.mw_c+ptr[i]->duct.mw_d;
	total_allm=ptr[i]->duct.mw_a+ptr[i]->duct.mw_b+ptr[i]->duct.mw_c+ptr[i]->duct.mw_d;
	total_allw=ptr[i]->duct.w_a+ptr[i]->duct.w_b+ptr[i]->duct.w_c+ptr[i]->duct.w_d;
	alla+=ptr[i]->duct.w_a;
	allb+=ptr[i]->duct.w_b;
	allc+=ptr[i]->duct.w_c;
	alld+=ptr[i]->duct.w_d;
	allma+=ptr[i]->duct.mw_a;
	allmb+=ptr[i]->duct.mw_b;
	allmc+=ptr[i]->duct.mw_c;
	allmd+=ptr[i]->duct.mw_d;
}

get(int i)
{
	ptr[i]->no=i+1;
	printf("enter name : ");
	scanf("%s",&ptr[i]->name);
	printf("enter num house : ");
	scanf("%s",&ptr[i]->add.add_no);
while(type!='z')
{   
	printf("---------------------------\n");
	printf("        kg     bath\n");
	printf(" a.    %.2f    %.2f\n",ptr[i]->duct.w_a,ptr[i]->duct.mw_a);
	printf(" b.    %.2f    %.2f\n",ptr[i]->duct.w_b,ptr[i]->duct.mw_b);
	printf(" c.    %.2f    %.2f\n",ptr[i]->duct.w_c,ptr[i]->duct.mw_c);
	printf(" d.    %.2f    %.2f\n",ptr[i]->duct.w_d,ptr[i]->duct.mw_d);
	printf(" z.finish order\n");
	printf("enter type : ");
	scanf("%s",&type);	
	printf("enter weight : ");
	scanf("%f",&ptr[i]->weight);
	price_cal(i);
	printf("---------------------------\n");
}
type='m';a=0;b=0;c=0;d=0;

	
}

show(int i)
{
	printf(" No. %d\n",ptr[i]->no);
	printf(" name : %s\n",ptr[i]->name);
	printf(" num house : %s\n",&ptr[i]->add.add_no);
	printf(" type : %d\n",ptr[i]->duct.e);
	printf("---------------------------\n");
	printf("          kg     bath\n");
	printf(" a.      %.2f    %.2f\n",ptr[i]->duct.w_a,ptr[i]->duct.mw_a);
	printf(" b.      %.2f    %.2f\n",ptr[i]->duct.w_b,ptr[i]->duct.mw_b);
	printf(" c.      %.2f    %.2f\n",ptr[i]->duct.w_c,ptr[i]->duct.mw_c);
	printf(" d.      %.2f    %.2f\n",ptr[i]->duct.w_d,ptr[i]->duct.mw_d);
	printf(" total:  %.2f    %.2f\n",ptr[i]->duct.tal_w,ptr[i]->duct.tal_m);
	printf("---------------------------\n");	

}
main()
{
	int select;
	for (int i = 0;i<5000;i++)
	{
		ptr[i]=&person[i];
	}
	
	do
	{
		printf("1.add\n2.show\n3.end program\n");
		scanf("%d",&select);
		switch(select)
		{
		case 1:
				{
				get(i);
				i++;
				break;
				}
		case 2:
				{
				for (int g=0; g < i; g++)
					{
					show(g);
					}
				break;
				}
		default:
				printf("error");
		}
		
	}while(select!=3);
	printf("        kg     bath\n");
	printf(" a.      %.2f    %.2f\n",alla,allma);
	printf(" b.      %.2f    %.2f\n",allb,allmb);
	printf(" c.      %.2f    %.2f\n",allc,allmc);
	printf(" d.      %.2f    %.2f\n",alld,allmd);
	printf(" total:  %.2f    %.2f\n",total_allw,total_allm);
}


