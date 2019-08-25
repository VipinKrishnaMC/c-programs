#include<stdio.h>
#include<string.h>
 
typedef struct student{
char name[20];
int rollno;
int class;
}student;

void main()
{

int n,i;
char l;
student s[10];
printf("\nEnter the number of students:\t");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("\nEnter student's name:\t");
	scanf("%c",&l);
	scanf("%[^\n]",s[i].name);
	printf("\nEnter student's roll no: ");
	scanf("%d",&s[i].rollno);
	printf("\nEnter student's class: ");
	scanf("%d",&s[i].class);
}

printf("\n\n\t\t\t\t****STUDENTS MANUAL****");
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
printf("\t|\tNAME\t\t|\tROLLNO\t|\tCLASS\t\t|\n");
printf("\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

for(i=0;i<n;i++)
{
	if(strlen(s[i].name)<=13)
	{
		printf("\t\t%s\t\t%d\t\t%d\t\t\n",s[i].name,s[i].rollno,s[i].class);
	}
	else
	{
		printf("\t\t%s  \t%d\t\t%d\t\n",s[i].name,s[i].rollno,s[i].class);
	}
}
//printf("\t|\t\t\t\t\t\t\t\t|");
printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
}
