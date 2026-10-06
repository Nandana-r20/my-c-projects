#include<stdio.h>
void main()
{
int score=0;
int A,B,C,D,a,b,c,d,i;
char answer;
for(i=0;i<10;i++)
{
	if(i==0)
	{
		printf("\n 1.C is a ------ langauage \n A.funny \n B.good \n C.programming \n D. free\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'C' || answer == 'c')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
		printf("\n wrong \n The answer is 'C.programming'\n");
	}
	}

	if(i==1)
	{
		printf("\n2.int is a ------ data type \n A.built-in \n B.user-defined \n C.custom \n D.none of these\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'A' || answer == 'a')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
		printf("\n wrong \n The answer is 'A.built-in'\n");
	}
	}

	if(i==2)
	{
		printf("\n 3.Which function is used to display output in C? \n A.scanf() \n B.printf() \n C.input() \n D.scan()\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'B' || answer == 'b')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
		printf("\n wrong \n The answer is 'B.scanf()'\n");
	}
	}

	if(i==3)
	{
		printf("\n 4.Which symbol is used to end a statement in C? \n A.; \n B.: \n C..\n D.,\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'A' || answer == 'a')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
		printf("\n wrong \n The answer is 'A.; '\n");
	}
	}

	if(i==4)
	{
		printf("\n 5.Which loop executes its body at least once? \n A.for \n B.while \n C.do-while\n D.switch\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'C' || answer == 'c')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
		printf("\n wrong \n The answer is 'C.do-while'\n");
	}
	}
	
	if(i==5)
	{
		printf("\n 6.Which operator is used for assignment? \n A.== \n B.>= \n C.<=\n D.=\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'D' || answer == 'd')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
	printf("\n wrong \n The answer is 'D.='\n");
	} 
	}
	
	if(i==6)
	{
		printf("\n 7.Which header file is needed for printf() and scanf()? \n A.math.h \n B.stdlib.h \n C.stdie.h \n D.stdio.h\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'D' || answer == 'd')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
	printf("\n wrong \n The answer is 'D.stdio.h'\n");
	} 
	}
	
	if(i==7)
	{
		printf("\n 8.Which keyword is used to return a value from a function? \n A.return \n B.break \n C.exit \n D.back \n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'A' || answer == 'a')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
	printf("\n wrong \n The answer is 'A.return'\n");
	} 
	}
	
	if(i==8)
	{
	printf("\n 9.What happens when a function calls itself? \n A.Compilation always fails \n B.It creates a loop automatically \n C.It is called recursion \n D.It becomes a pointer \n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'C' || answer == 'c')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
	printf("\n wrong \n The answer is 'C.It is called recursion'\n");
	} 
	}
	
	if(i==9)
	{
	printf("\n 10.Which data structure follows the LIFO principle? \n A.Queue  \n B.Array \n C.linked list \n D.Stack\n");
		printf("\nenter your answer:");
		scanf(" %c", &answer);
	if(answer == 'D' || answer == 'd')
	{
 		score++;
 		printf("\ncorrect\n");
	}
	else
	{
	printf("\n wrong \n The answer is 'D.Stack'\n");
	} 
	}
	
}
printf("\n");
printf("\n -----TEST COMPLETED-----");
printf("\n");
	printf("\n Hey, Your Score is here.");
	if(score==0)
	{
		printf("\n score = 0");
	}
	else
	{
		printf("\n score = %d",score);
	}	
	printf("\n");
	
	if(score>=8)
	{
		printf(" Pass");
		printf("\n Excellent, Great Acheviement");
	}
	else if(score>=5)
	{
		printf(" Pass");
		printf("\n congratulations");
	}
	else
	{
		printf(" OOPS..");
		printf("\n failed");
	}
	printf("\n");
	printf("...Thank you...");
	printf("\n");
}


