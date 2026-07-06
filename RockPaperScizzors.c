# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <math.h>

char game(char pla,char comp);

int main(){
    int n;
    char pla ,comp ,result;
    //Gets Random Number
    srand(time(NULL));
    //To make Number less than 100
    n=rand()%100;
    //Computers's Answer
    if(n<33){
        comp='s';//Stone for less than 33
    }
    else if(n>33 && n<66){
        comp='p';//Paper for Between 33 and 66
    }
    else{
        comp='z';//Scizzors for greater than 66
    }

    printf("\n\n\t\tEnter s(Stone), p(Paper), z(Scizzors)\n\n\t\t");
    scanf("%c",&pla);
    result=game(pla,comp);
    //Result of the game
    if (result=='d'){
        printf("\n\n\t\tGame Draw!!!");
    }
    else if(result=='c'){
        printf("\n\n\t\tComputer Wins!! Better Luck next Time");
    }
    else{
        printf("\n\n\t\tCongrats You Won the Game!!");
    }
    printf("\n\n\t\tYour Choice: %c Computers Choice: %c",pla ,comp);
    return 0;
}

char game(char pla,char comp){

    //if both have same input
    if(pla==comp){
        return 'd';
    }
    //if player have stone
    if(pla=='s' && comp=='p'){
        return 'c';
    }
    else if(pla=='s' && comp=='z'){
        return 'p';
    }
    //if player have paper
    if(pla=='p' && comp=='z'){
        return 'c';
    }
    else if(pla=='p' && comp=='s'){
        return 'p';
    }
    //if player have scizzors
    if(pla=='z' && comp=='s'){
        return 'c';
    }
    else if(pla=='z' && comp=='p'){
        return 'p';
    }
}