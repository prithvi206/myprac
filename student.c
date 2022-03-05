#include<stdio.h>
#include<stdlib.h>
#include<string.h>  

struct student
{
    char name[10];
   int reg_no;
   int m1,m2,m3;
   int average_marks;
} s[7];

void input(struct student s[7],int n)
{
 printf("enter information of students\n");
 int i;

    for(i=0;i<n;i++)
    {
       
        printf("enter the reg number of student\n");
        scanf("%d",&s[i].reg_no);
        printf("enter the name of the student\n");
        scanf("%s",s[i].name);
       
            printf("enter the 1st test marks\n");
            scanf("%d",&s[i].m1);
            printf("enter the 2nd test marks\n");
            scanf("%d",&s[i].m2);
            printf("enter the 3rd test marks\n");
            scanf("%d",&s[i].m3);
        
    }

}


void display(struct student s[7],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        int small;
       int a=s[i].m1;
       int b=s[i].m2;
      int  c=s[i].m3;

    small = a>b?b>c?c:b:a>c?c:a;
    int avg = (a + b + c-small)/2;

        s[i].average_marks = avg;
        printf("\tindex \t reg_no \t name \t test1 \t test2 \t test3 \t average marks \n");
        printf("\t%d \t %d \t ",(i+1),s[i].reg_no);
        printf("\t %s \t %d \t%d \t%d \t%d \n",s[i].name,s[i].m1,s[i].m2,s[i].m3,
        s[i].average_marks);
    }
}

int main()
{
    int i,j,n,choice;

    printf("enter the number of students\n");
    scanf("%d",&n);
    for(;;)
    {
        printf(" menu \t");
        printf("\n 1.input\n 2.display \n 3.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: input(s,n);
                    break;
            case 2:display(s,n);
                    break;
            case 3:exit(0);

            default : printf("invalid choice\n");
        }
    }

   
}



