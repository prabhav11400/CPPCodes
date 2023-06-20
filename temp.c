#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gen_ran_num(int n){
    srand(time(NULL));
    return rand()%n;
}
int greater(char c1,char c2){
    if(c1=c2){
        return -1;
    }
    else if((c1=='r')&& (c2=='p')){ // if c1 win return 1
        return 0;
    }
    else if((c1=='p') && (c2=='r')){
        return 1;
    }
    else if((c1=='r')&&(c2=='s')){
        return 1;
    }
    else if((c1=='s')&& (c2=='r')){
        return 0;
    }
    else if((c1=='p')&& (c2=='s')){
        return 0;
    }
    else if((c1=='s')&& (c2=='p')){
        return 1;
    }
    else{
        return 2;
    }
}
int main(){
    int playerScore=0,compScore=0;
    int temp;
    char playerChar,compChar;
    char dict[]={'r','p','s'};
    printf("Welcome to rock,paper,scissor\n");
    for(int i=0;i<3;i++){
        // taking player`s input
        printf("Player's turn:\n");
        printf("Chose 1 for rock,2 for paper and 3 for scissors\n");
        scanf("%d",&temp);
        getchar();
        playerChar=dict[temp-1];
        printf("You have chosen %c\n\n",playerChar);
        // generate computer input
        printf("Computer's turn:\n");
        temp=gen_ran_num(3)+1;
        compChar=dict[temp-1];
        printf("CPU chose %c\n\n", compChar);

        //Compare the scores 
        if(greater(compChar,playerChar)==1){
            compScore+=1;
            printf("CPU got it\n");
            printf("Current Scores:\n p--%d\n CPU--%d/n", playerScore,compScore);}
            else if(greater(compChar,playerChar)==-1){
                playerScore+=1;
                 compScore+=1;
                printf("Draw!\n");
                printf("Current Scores:\n p--%d\n CPU--%d/n", playerScore,compScore);}
            else if(greater(compChar,playerChar)==0){
                playerScore+=1;
                printf("You Got it\n");
                printf("Current Scores:\n p--%d\n CPU--%d\n", playerScore,compScore);
            }
    }
    if(playerScore>compScore){
        printf("You Won");
    }
    else if(compScore>playerScore){
        printf("CPU WON");
    }
    else if (compScore=playerScore)
       {printf("It is Draw!");
    }
}