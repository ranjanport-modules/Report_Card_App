/*
 ============================================================================
 Name        : Report_card_generator_App.c
 Author      : Aman Ranjan
 Version     :v1.0
 Copyright   : This code is freeware and can be used without prior notice.
 Description : Program to generate Report card.
 ============================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);			//clearing buffer

	char name[45];
	int class;
	char section, grade='P';
	int maths, english, hindi, science, s_science,total;

	puts("----------------------------------------------");
																		//Greeting Message
	puts("\tJawahar Navodaya Vidyala");
	puts("\tAnnual Report Card");
////////////////////////////////////////////////////////////////////////////////////////
	puts("Enter the Name of Student :  ");
	scanf("%[^\n]%*c", name);
																//Basic Details
	puts("Enter the calss (1~12) :  ");
	scanf("%d",&class);

	while ((getchar() != '\n'));

	puts("Enter Section A,B,C :  ");
	scanf("%c",&section);

	////////////////////////////////////////////////////////////////////////////////////////

	printf("Enter marks secured in Mathematics : ");
	scanf("%d",&maths);

		printf("Enter marks secured in English : ");
		scanf("%d",&english);
																		//Marks details
			printf("Enter marks secured in Hindi : ");
			scanf("%d",&hindi);

				printf("Enter marks secured in science : ");
				scanf("%d",&science);

					printf("Enter marks secured in Social Science : ");
					scanf("%d",&s_science);
//////////////////////////////////////////////////////////////////////////////////////////////

					total = maths + english + hindi + science + s_science;

					puts("----------------------------------------------");

puts("\tJawahar Navodaya Vidyala");

	puts("\t   Annual Report Card");

		printf(" Name of Student : %s \n ",name);

		printf("Standard : %d \n ",class);

		printf("Section : %c \n\n\n ",section);						//Printing Report

		printf("Marks Secured out of 100 \n ");

		printf("Mathematics : %d \n",maths);

			printf(" English : %d\n", english);

				printf(" Hindi : %d\n", hindi);

					printf(" Science : %d\n ", science);

						printf("Social Science : %d \n\n\n", s_science);

							printf("Total Marks Secured : %d \n",total);
///////////////////////////////////////////////////////////////////////////////////////////////////

							if (total >=450 && total<=500)
								{
									grade='A';
								}
								else if(total >=400 && total<=499)
								{
									grade='B';
								}
								else if(total >=350 && total<=399)
								{
									grade='C';
								}
								else if(total >=300 && total<=349)			//Checking Grade
								{
									grade='D';
								}
								else if(total >=200 && total<=299)
								{
									grade='E';
								}
								else if(total <200 && total>=0)
								{
									grade='F';
								}
								else
								{
									printf("Input Marks between a scale of 0--500.");
									exit(0);
								}
								if(grade != 'P')
								{

								       printf("\nThe Grade Secured is %c ",grade);
								}
					puts("\n----------------------------------------------");
/////////////////////////////////////////////////////////////////////////////////////////////
			return 0;
}
