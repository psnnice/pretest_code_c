#include<stdio.h>
#include<math.h>

#include<stdio.h>
struct bankok{
    char name[10][20],lastname[10][20],gender[10][20],address[10][20];
    int     order,age;
    float height,weight,distance,sending_cost;
};
Keep_Pid_inform (struct bankok *deceased){        //human dead=deceased
    printf("Enter name deceased : ");
    scanf("%s",&deceased->name);
    printf("Enter lastname deceased : ");
    scanf("%s",&deceased->lastname);
    printf("Enter gender deceased : ");
    scanf("%s",&deceased->gender);
    printf("Enter address deceased : ");
    scanf("%s",&deceased->address);
    printf("Enter order : ");
    scanf("%d",&deceased->order);
    printf("Enter age : ");
    scanf("%d",&deceased->age);
    printf("Enter height : ");
    scanf("%f",&deceased->height);
    printf("Enter distance : ");
    scanf("%f",&deceased->distance);
    printf("Enter sending_cost : ");
    scanf("%f",&deceased->sending_cost);


}



main(){

    int n,m,nu,g=0;
    scanf("%d",&n);
    struct bankok p[n];
    struct bankokptr *ptr[n];
    for(int i=0;i<n;i++)
    {
        ptr[i]=&p[i];
    }

    printf("1.add infor");
    scanf("%d",&m);

    if (m==1)
    {
            Keep_Pid_inform(ptr[g]);
            g++;
    }
    
    

}

/*struct name
{
    char name[20],lastname[20],classs[5],gender[7];
};

struct std
	{ int order,age;
	  struct name nn;
	  float weight,height,bmi;
	};
float BMI_Calculation(float w,float h)
	{ 
         return w/pow(h/100,2);
	}
Keep_Std_inform (struct std *student)
	{  
	   printf("Enter order student :");
	   scanf("%d",&student->order);
	   printf("Enter age student :");
	   scanf("%d",&student->age);
	   printf("Enter name student :");
	   scanf("%s",&student->nn.name);
	   printf("Enter lastname student :");
	   scanf("%s",&student->nn.lastname);
	   printf("Enter class student :");
	   scanf("%s",&student->nn.classs);
	   printf("Enter gender student :");
	   scanf("%s",&student->nn.classs);
	   printf("Enter weight student :");
	   scanf("%f",&student->weight);
	   printf("Enter height student :");
	   scanf("%f",&student->height);
	   student->bmi=BMI_Calculation(student->weight,student->height);
	
	}
showdata(struct std *student)
{ printf("\norder: %d\n",student->order);
  printf("age: %d\n",student->age);  
  printf("name: %s %s\n",student->name,student->lastname);
  printf("class: %s\n",student->classs);
  printf("gender: %s\n",student->gender);
  printf("weight: %f\n",student->weight);
  printf("height: %f\n",student->height);
  printf("BMI : %f\n\n",student->bmi); 
  
  
}



void main()
	{ 
	 int n,m,nu,g=0;
	 		  	
			printf("Enter amount student :");
			scanf("%d",&n);	  
	        struct std sssss[n];
			struct std *Std_prt[n];
			for(int i=0;i<n;i++)
			{
                Std_prt[i]=&sssss[i];
			}
			  
	 do{ printf("***MENE***\n1.ADD DATA STUDENT\n2.SHOW DATA STUDENT\n3.SHOW DATA ALL STUDENT\n0.end program\n");
	 printf("enter menu:");
	 scanf("%d",&m);
	 
	 switch(m)
		 { case 1:for(int i=0;i<1;i++)
					 {
					  Keep_Std_inform(Std_prt[g]);
					  g++;
					 }
		 		  break;
		   case 2:printf("Enter order student :");
		   		  scanf("%d",&nu);
		   		  showdata(Std_prt[nu-1]);
		   		  break;
		   case 3:for(int i=0;i<g;i++)
			          {showdata(Std_prt[i]);
					  }
		  		  break;
		   
		 		  
    
		  }
	 }while(m!=0);
	 
	 
	}
*/