// #include <stdio.h>
// #include <windows.h>
// #include <conio.h>
// #include<string.h>

void line (void);
void menu(void);
void smallmenu(void);
float marksToGradePoint(float marks);
char *marksToGrade(float marks);


void main()
{

	int choose;
	char cubaan;

	while(1)
	{
		system("cls");
				line();
				printf("This program is made to calculate CGPA\n");
				printf("Please choose from the below:\n");
				printf("1. Compute CGPA\n");
				printf("2. View About\n");
				printf("3. Exit this program\n");
				line();
				scanf("%d", &choose);
				line();

	
		switch(choose)
		{
		case 1:{
					void menu(void);
					{
						int loop;
						int noOfSubject=0;
						int ch[100];
						char sn[100][10];
						int sumch=0;
						double sumchxgp=0;
						float marks[100];
						float gp[100];
						char g[100][10];

						printf("Number of subject:");
						scanf("%d",&noOfSubject);

						for(loop=0;loop<=noOfSubject-1;loop++)
						{
        
							printf("Subject Name:");
							scanf("%s",&sn[loop]);

							printf("Credit Hour:");
							scanf("%d",&ch[loop]);

							printf("Marks:");
							scanf("%f",&marks[loop]);

							gp[loop]=marksToGradePoint(marks[loop]);
							strcpy(g[loop],marksToGrade(marks[loop]));

						}

							
						system("cls");
						line();
						printf("No.\tSubjectName\tCreditHour\tMarks\tGradePoint\tGrade\n");
						line();
						for(loop=0;loop<=noOfSubject-1;loop++)
						{
							printf("%d\t%s\t\t%d\t\t%.2f\t%.2f\t\t%s\n",loop+1,sn[loop],ch[loop],marks[loop],gp[loop],g[loop]);
							line();

						}
							

						for(loop=0;loop<=noOfSubject-1;loop++)
						{
							sumch=sumch+ch[loop];
							sumchxgp=sumchxgp+ch[loop]*gp[loop];

						}

						printf("total Credit Hour is %d\n",sumch);

						printf("total Credit Hour x Grade Point is %.2f\n",sumchxgp);

						printf("Grade Point Average is %.2f\n",sumchxgp/sumch);
						
						 

					}
										break;

			   }

		case 2:{
					printf("\t\tCompute CGPA\n");
					printf("\t\tProgram Developer\n");
					printf("\t\tMohd Akmal Zaki bin Rohai Zak\n");
					printf("\t\t5111 631 3086\n");
					printf("\t\tMuhammad Luqmanul Hakim Bin Azmi\n");
					printf("\t\t51116313295\n");
					break;
			   }
		case 3:{
					printf("Wassalam\n");
					break;
			   }
		}

		printf("Do you wanna continue [y/n]:\n");
		cubaan=getch();

		if(cubaan== 'y' )
		{
			continue;
		}

		else if(cubaan='3')
		{
			break;
		}
		system("cls");
	}
}

void line (void)
{
	printf("----------------------------------------------------------------------\n");
}

float marksToGradePoint(float marks)
	{

		if(marks>=80 && marks<=100)
		{
			return (float)4.00;
		}

        else if(marks>=75 && marks<=79)
		{
			return (float)3.67;
		}

		else if(marks>=70 && marks<=74)
		{
			return (float)3.33;
		}

		else if(marks>=65 && marks<=69)
		{
			return (float)3.00;
		}

        else if(marks>=60 && marks<=64)
		{
			return (float)2.67;
		}

        else if(marks>=55 && marks<=59)
		{
			return (float)2.33;
		}

        else if(marks>=50 && marks<=54)
		{
			return (float)2.00;
		}

        else if(marks>=45 && marks<=49)
		{
			return (float)1.67;
		}

        else if(marks>=40 && marks<=44)
		{
			return (float)1.00;
		}

        else if(marks>=0 && marks<=39)
		{
			return (float)0.00;
		}

        else
		{
			return (float)0.00;
		}
	}

	
	char *marksToGrade(float marks)
	{

        if(marks>=80 && marks <=100)
		{
			return "A";
		}

        else if(marks>=75 && marks<=79)
		{
			return "A-";
		}

		else if(marks>=70 && marks<=74)
		{
			return "B+";
		}

		else if(marks>=65 && marks<=69)
		{
			return "B";
		}

        else if(marks>=60 && marks<=64)
		{
			return "B-";
		}

        else if(marks>=55 && marks<=59)
		{
			return "C+";
		}

        else if(marks>=50 && marks<=54)
		{
			return "C";
		}

        else if(marks>=45 && marks<=49)
		{
			return "C-";
		}

        else if(marks>=40 && marks<=44)
		{
			return "D";
		}

        else if(marks>=0 && marks<=39)
		{
			return "F";
		}

		else
		{
			return "error";
		}

	}


