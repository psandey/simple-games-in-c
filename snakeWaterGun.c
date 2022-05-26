// -------> Snake 🐍, Water 💧, Gun 🔫 Game <-------


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int snakeWaterGun(char you,char comp)
{
    if(you==comp)
    return 0;

    else if(you=='s' && comp=='w' || you=='w' && comp=='g' || you=='g' && comp=='s')
    return 1;

    else
    return -2;
    
}

int main(){
    char you,comp;
    srand(time(0));
    int number=rand()%100+1;

    if(number<=33)
    comp='s';

    else if(number<=66)
    comp='g';

    else
    comp='w';

    printf("\nEnter 's' ---> Snake , 'w' ---> Water , 'g' ---> Gun\n");
    scanf("%c",&you);

    int res=snakeWaterGun(you,comp);

    if(res==0)
    printf("\nDead Heat!!\n");

    else if(res==1)
    printf("\nYou Won :)\n");

    else
    printf("\nBetter Luck Next Time :(\n");

    printf("\nYou chose %c and the Computer chose %c\n\n",you,comp);
    return 0;

}