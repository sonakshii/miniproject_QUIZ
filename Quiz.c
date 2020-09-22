#include<stdio.h>
void main()
{
    int a,p=0;
    char i;
    printf("WELCOME TO QUIZ GAME \n");
    printf("PRESS S TO START THE GAME \n");
    printf("PRESS Q TO QUIT \n");
    scanf("%s",&i);
    if(i=='S' || i=='s')
    {
        printf("1. Grand Central Terminal, Park Avenue, New York is the world's \n 1.	largest railway station \n 2.	highest railway station \n 3.	longest railway station \n 4.	None of the above");
        printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==1)
        {
            p=p+1000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\nWRONG ANSWER");
            printf("\nPRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
        if(i=='C' || i=='c')
        {
        printf("\n 2. Entomology is the science that studies \n 1.	Behavior of human beings \n 2.	Insects \n 3.	The origin and history of technical and scientific terms \n 4.	The formation of rocks");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==2)
        {
            p=p+2000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
    if(i=='C' || i=='c')
        {
        printf("\n 3. Eritrea, which became the 182nd member of the UN in 1993, is in the continent of \n 1.	Asia \n 2.	Africa \n 3.	Europe \n 4.	Australia");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==2)
        {
            p=p+3000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
    if(i=='C' || i=='c')
        {
        printf("\n 5. For which of the following disciplines is Nobel Prize awarded? \n 1.	Physics and Chemistry \n 2.	Physiology or Medicine \n 3.	Literature, Peace and Economics \n 4.	All of the above");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==4)
        {
            p=p+5000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
    if(i=='C' || i=='c')
        {
        printf("\n 6. Hitler party which came into power in 1933 is known as /n 1.	Labour Party /n 2.	Nazi Party /n 3.	Ku-Klux-Klan /n 4.	Democratic Party");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==2)
        {
            p=p+6000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
     if(i=='C' || i=='c')
        {
        printf("\n 7. FFC stands for \n 1.	Foreign Finance Corporation \n 2.	Film Finance Corporation \n 3.	Federation of Football Council \n 4.	None of the above");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==2)
        {
            p=p+7000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
      if(i=='C' || i=='c')
        {
        printf("\n 8. Fastest shorthand writer was \n 1.	Dr. G. D. Bist \n 2.	J.R.D. Tata \n 3.	J.M. Tagore \n 4.	Khudada Khan");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==1)
        {
            p=p+8000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
    if(i=='C' || i=='c')
        {
        printf("\n 9. Epsom (England) is the place associated with \n 1.	Horse racing \n 2.	Polo \n 3.	Shooting \n 4.	Snooker");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==1)
        {
            p=p+9000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }
    if(i=='C' || i=='c')
        {
        printf("\n 10. First human heart transplant operation conducted by Dr. Christiaan Barnard on Louis Washkansky, was conducted in \n 1.	1967 \n 2.	1968 \n 3.	1958 \n 4.	1922");
printf("\n ENTER YOUR ANSWER");
        scanf("%d",&a);
        if(a==1)
        {
            p=p+10000;
            printf("CONGRATULATION YOUR ANSWER IS RIGHT!!");
        }
        else
            printf("\n WRONG ANSWER");
            printf("\n PRESS C TO CONTINUE AND Q TO QUIT");
        scanf("%s",&i);
    }

    else
    {
        printf("\n YOUR SCORE IS %d",p);
printf("\n THANKS FOR PLAYING THE QUIZ");
    }
}
