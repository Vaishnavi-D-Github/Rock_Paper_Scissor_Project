#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int game(char human){
    int a;
    char comp;
    srand(time(NULL));
    a = rand()%100;
    if(a>=0&&a<=33)
    {
    comp = 'r';
    printf("Computer has chosen rock");
    }
    else if(a>=34&&a<=66)
    {
    comp = 'p';
    printf("Computer has chosen paper");
    }
    else if(a>=67&&a<=100)
    {
    comp = 's';
    printf("Computer has chosen scissor\n");
    }
    if(human=='r'&&comp=='r'||human=='p'&&comp=='p'||human=='s'&&comp=='s')
    return 1;
    else if(human=='r'&&comp=='p'||human=='p'&&comp=='s'||human=='s'&&comp=='r')
    return 0;
    else
    return -1;
}

void main(){
    char human;
    int result;
    printf("Enter 'r' for Rock, 's' for Scissor, 'p' for Paper: ");
    scanf("%c",&human);
    result = game(human);
    if (result==1)
    printf("\nIt is a tie!");
    else if(result==0)
    printf("\nSorry:( try next time");
    else
    printf("\nCongratulations:) you won!");

}