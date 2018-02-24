#include<stdio.h>
#define R 100
#define C 100
#include<conio.h>

int main(){
	char ch;
	while(ch != 'n')
	{
	
	FILE *fname;
	char array[R][C];
	char file[9] ;
	char name[10];
	int i=0 , j = 0 ;
	int std=0;
	system("color 70");
	printf("\t\t\t********** WELCOME TO DHA SUFFA UNIVERSITY COURSE MASH **********");
	printf("\n\n\n\n");
	printf("To Search For student Press 1\n\n");
	printf("To Enter  student Data Press 2\n\n");
	printf("To search by course press 3\n\n");
	scanf("%d",&std);

	switch(std)
	{
	
	case 1:
	{
		
	printf("Enter Roll Number to search:");
	scanf("%s",name);
	printf("\n");
	
	fname=fopen(name,"r");
	if(fname==NULL)
	{
		printf("\n");
		printf("Sorry data of this student not available");
	}
	if(fname != NULL)
	{
	for(i = 0 ; i < 9 ; i++)
	{
		fgets(array[i],100,fname);
	}
	printf("Name:");
	puts(array[0]);
	printf("\n");
	printf("Semester:");
	puts(array[1]);
	printf("\n");
	printf("Course1:");
	puts(array[2]);
	printf("\n");
	printf("Course2:");
	puts(array[3]);
	printf("\n");
	printf("Course3:");
	puts(array[4]);
	printf("\n");
	printf("Course4:");
	puts(array[5]);
	printf("\n");
	printf("Course5:");
	puts(array[6]);
	printf("\n");
	printf("Phone Number:");
	puts(array[7]);
	printf("\n");
	printf("E-mail:");
	puts(array[8]);
	printf("\n");
	}
	}
	fclose(fname);
	break;
	
	case 2:
	{
			
	printf("Please Enter your data");
	printf("\n\n");
	printf("Enter Roll Number:");
	scanf("%s",file);
	fname=fopen(file,"a");
	printf("\n");
	gets(array[0]);
	printf("Enter Full Name:");
	gets(array[0]);
	printf("\n");
	printf("Enter Semester:");
	gets(array[1]);
	printf("\n");
	printf("Enter course1 in abbrevation like ITC :");
	gets(array[2]);
	printf("\n");
	printf("Enter course2 in abbrevation:");
	gets(array[3]);
	printf("\n");
	printf("Enter course3 in abbrevation :");
	gets(array[4]);
	printf("\n");
	printf("Enter course4 in abbrevation :");
	gets(array[5]);
	printf("\n");
	printf("Enter course5 in abbrevation :");
	gets(array[6]);
	printf("\n");
	printf("Enter phone Number:");
	gets(array[7]);
	printf("\n");
	printf("Enter E-mail:");
	gets(array[8]);
	printf("\n");
	
	for(i=0;i<9;i++)
	{
			fprintf(fname,array[i]);
			fprintf(fname,"\n");
			
			
	}
		fclose(fname);
		fname=fopen(array[2],"a");
		fprintf(fname,array[0]);
		fprintf(fname,"\t");
		fprintf(fname,file);
		fprintf(fname,"\n");
		fclose(fname);
		fname=fopen(array[3],"a");
		fprintf(fname,array[0]);
		fprintf(fname,"\t");
		fprintf(fname,file);
		fprintf(fname,"\n");
		fclose(fname);
		fname=fopen(array[4],"a");
		fprintf(fname,array[0]);
		fprintf(fname,"\t");
		fprintf(fname,file);
		fprintf(fname,"\n");
		fclose(fname);
		fname=fopen(array[5],"a");
		fprintf(fname,array[0]);
		fprintf(fname,"\t");
		fprintf(fname,file);
		fprintf(fname,"\n");
		fclose(fname);
		fname=fopen(array[6],"a");
		fprintf(fname,array[0]);
		fprintf(fname,"\t");
		fprintf(fname,file);
		fprintf(fname,"\n");
		fclose(fname);
		break;	
	}
	case 3:
		{
			printf("Enter Subject to search:");
			scanf("%s",name);
			printf("\n");
			
			fname=fopen(name,"r");
			if(fname==NULL)
			{
				printf("\n");
				printf("Sorry no one study this subject");
			}
			 while(fgets(array[i],100,fname)!= NULL)
			{
				i++;
			}
			for(j=0;j<i;j++)
			{
				printf("%s",array[j]);
			}
			
		}
}	
	printf("\n");
	printf("Would you like to continue using Course Mash y/n :");
	scanf("%s",&ch);
	printf("\n\n\n");
}

	{
		printf("Thank You for using DSU Course Mash\n");
	}
	
}
