#include <stdio.h>
#include<time.h>

void main() {
    //Start
    int comp, user, choice,  x=0, y =0, w;
    //Initial Prompt
    printf("Welcome to Advanced Rock Paper Scissors\n");
    printf("What Variant Would You Like To Play With?\n7, 9, 11 or 15 ");
    
    printf("\nEnter Your Choice : ");
    scanf("%d",&choice);
        
    
    
    
    //Function for all the rules
    int determine_winner(int comp, int user ) {
        
        //printf("Score %d",w);
        for (int i = 0; i<3;i++){
            //random number generator for comp
            srand(time(NULL));
            
            //Computer choice
            //https://arstechnica.com/science/2014/05/win-at-rock-paper-scissors-by-knowing-thy-opponent/
            
            comp = (rand() % choice)+1;
            
            

            printf("\n\nScores :\nComp = %d \tYou = %d", x,y);
            printf("\nEnter Your Choice : ");
            scanf("%d",&user);
        //Ensures user picks valid number 
        if(user < 1 || user> choice){
            printf("\nEnter Valid Number\nRound is not Valid\n");
            i--;
        }
        //All Draws
        if(comp==1&& user==1){
            printf("Rock X Rock\n>>It's a DRAW");
            i --;
        }else if(comp==2 && user==2){
            printf("Paper X Paper\n>>It's a DRAW");
            i --;
        }else if(comp==3 && user==3){
            printf("Scissor X Scissor\n>>It's a DRAW");
            i --;
        }
        else if(comp==4 && user==4){
            printf("Fire X Fire\n>>It's a DRAW");
            i --;
        }
        else if(comp==5 && user==5){
            printf("Water X Water\n>>It's a DRAW");
            i --;
        }
        else if(comp==6 && user==6){
            printf("Air X Air\n>>It's a DRAW");
            i --;
        }
        else if(comp==7 && user==7){
            printf("Sponge X Sponge\n>>It's a DRAW");
            i --;
        }
        else if(comp==8 && user==8){
            printf("Gun X Gun\n>>It's a DRAW");
            i --;
        }
        else if(comp==9 && user==9){
            printf("Gun X Gun\n>>It's a DRAW");
            i --;
        }
        else if(comp==10 && user==10){
            printf("Wolf X Wolf\n>>It's a DRAW");
            i --;
        }
        else if(comp==11 && user==11){
            printf("Devil X Devil\n>>It's a DRAW");
            i --;
        }
        else if(comp==12 && user==12){
            printf("Lightning X Lightning\n>>It's a DRAW");
            i --;
        }
        else if(comp==13 && user==13){
            printf("Snake X Snake\n>>It's a DRAW");
            i --;
        }
        else if(comp==14 && user==14){
            printf("Dragon X Dragon\n>>It's a DRAW");
            i --;
        }
        else if(comp==15 && user==15){
            printf("Tree X Tree\n>>It's a DRAW");
            i --;
        }
        
        
        
        //If user chooses Rock
        else if(comp == 2 && user ==1){
            printf("Rock X Paper\n You Lose!");
            x++;
        }
        else if(comp ==3 && user ==1){
            printf("Rock X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==1){
            printf("Rock X Fire\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==1){
            printf("Rock X Lizard\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==1){
            printf("Rock X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==1){
            printf("Rock X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==1){
            printf("Rock X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==1){
            printf("Rock X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==1){
            printf("Rock X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==1){
            printf("Rock X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==1){
            printf("Rock X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==1){
            printf("Rock X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==1){
            printf("Rock X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==1){
            printf("Rock X Tree\n You Win!");
            y++;
        }


        //If user chooses Paper
        else if(comp == 1 && user ==2){
            printf("Paper X Rock\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==2){
            printf("Paper X Scissors\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==2){
            printf("Paper X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==2){
            printf("Paper X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==2){
            printf("Paper X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==2){
            printf("Paper X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==2){
            printf("Paper X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==2){
            printf("Paper X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==2){
            printf("Paper X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==2){
            printf("Paper X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==2){
            printf("Paper X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==2){
            printf("Paper X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==2){
            printf("Paper X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==2){
            printf("Paper X Tree\n You Lose!");
            x++;
        }

        //If user chooses Scissors
        else if(comp == 1 && user ==3){
            printf("Scissors X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==3){
            printf("Scissors X Paper\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==3){
            printf("Scissors X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==3){
            printf("Scissors X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==3){
            printf("Scissors X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==3){
            printf("Scissors X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==3){
            printf("Scissors X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==3){
            printf("Scissors X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==3){
            printf("Scissors X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==3){
            printf("Scissors X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==3){
            printf("Scissors X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==3){
            printf("Scissors X Snake\n You Win!");
            y++;
        }
        else if(comp == 14 && user ==3){
            printf("Scissors X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==3){
            printf("Scissors X Tree\n You Win!");
            y++;
        }


        //If user chooses Fire
        else if(comp == 1 && user ==4){
            printf("Fire X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==4){
            printf("Fire X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==4){
            printf("Fire X Scissor\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==4){
            printf("Fire X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==4){
            printf("Fire X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==4){
            printf("Fire X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==4){
            printf("Fire X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==4){
            printf("Fire X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==4){
            printf("Fire X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==4){
            printf("Fire X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==4){
            printf("Fire X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==4){
            printf("Fire X Snake\n You Win!");
            y++;
        }
        else if(comp == 14 && user ==4){
            printf("Fire X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==4){
            printf("Fire X Tree\n You Win!");
            y++;
        }

        //If user chooses Water
        else if(comp == 1 && user ==5){
            printf("Water X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==5){
            printf("Water X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==5){
            printf("Water X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==5){
            printf("Water X Fire\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==5){
            printf("Water X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==5){
            printf("Water X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==5){
            printf("Water X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==5){
            printf("Water X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==5){
            printf("Water X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==5){
            printf("Water X Devil\n You Win!");
            y++;
        }// 12.Lightning, 13.Snake, 14.Dragon, 15.Tree
        else if(comp == 12 && user ==5){
            printf("Water X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==5){
            printf("Water X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==5){
            printf("Water X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==5){
            printf("Water X Tree\n You Lose!");
            x++;
        }

        //If user chooses Air
        else if(comp == 1 && user ==6){
            printf("Air X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==6){
            printf("Air X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==6){
            printf("Air X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==6){
            printf("Air X Fire\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==6){
            printf("Air X Water\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==6){
            printf("Air X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==6){
            printf("Air X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==6){
            printf("Air X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==6){
            printf("Air X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==6){
            printf("Air X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==6){
            printf("Air X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==6){
            printf("Air X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==6){
            printf("Air X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==6){
            printf("Air X Tree\n You Lose!");
            x++;
        }

        //If user chooses Sponge
        else if(comp == 1 && user ==7){
            printf("Sponge X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==7){
            printf("Sponge X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==7){
            printf("Sponge X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==7){
            printf("Sponge X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==7){
            printf("Sponge X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==7){
            printf("Sponge X Air\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==7){
            printf("Sponge X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==7){
            printf("Sponge X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==7){
            printf("Sponge X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==7){
            printf("Sponge X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==7){
            printf("Sponge X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==7){
            printf("Sponge X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==7){
            printf("Sponge X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==7){
            printf("Sponge X Tree\n You Lose!");
            x++;
        }

        //If user chooses Gun
         else if(comp == 1 && user ==8){
            printf("Gun X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==8){
            printf("Gun X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==8){
            printf("Gun X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==8){
            printf("Gun X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==8){
            printf("Gun X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==8){
            printf("Gun X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==8){
            printf("Gun X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==8){
            printf("Gun X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==8){
            printf("Gun X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==8){
            printf("Gun X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==8){
            printf("Gun X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==8){
            printf("Gun X Snake\n You Win!");
            y++;
        }
        else if(comp == 14 && user ==8){
            printf("Gun X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==8){
            printf("Gun X Tree\n You Win!");
            y++;
        }

        //If user chooses Human
        else if(comp == 1 && user ==9){
            printf("Human X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==9){
            printf("Human X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==9){
            printf("Human X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==9){
            printf("Human X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==9){
            printf("Human X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==9){
            printf("Human X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==9){
            printf("Human X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==9){
            printf("Human X Gun\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==9){
            printf("Human X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==9){
            printf("Human X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==9){
            printf("Human X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==9){
            printf("Human X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==9){
            printf("Human X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==9){
            printf("Human X Tree\n You Win!");
            y++;
        }

        //If user chooses Wolf
        else if(comp == 1 && user ==10){
            printf("Wolf X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==10){
            printf("Wolf X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==10){
            printf("Wolf X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==10){
            printf("Wolf X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==10){
            printf("Wolf X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==10){
            printf("Wolf X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==10){
            printf("Wolf X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==10){
            printf("Wolf X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==10){
            printf("Wolf X Human\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==10){
            printf("Wolf X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==10){
            printf("Wolf X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==10){
            printf("Wolf X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==10){
            printf("Wolf X Dragon\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==10){
            printf("Wolf X Tree\n You Lose!");
            x++;
        }

        //If user chooses Devil
        else if(comp == 1 && user ==11){
            printf("Devil X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==11){
            printf("Devil X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==11){
            printf("Devil X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==11){
            printf("Devil X Fire\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==11){
            printf("Devil X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==11){
            printf("Devil X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==11){
            printf("Devil X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==11){
            printf("Devil X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==11){
            printf("Devil X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==11){
            printf("Devil X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==11){
            printf("Devil X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==11){
            printf("Devil X Snake\n You Win!");
            y++;
        }
        else if(comp == 14 && user ==11){
            printf("Devil X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==11){
            printf("Devil X Tree\n You Lose!");
            x++;
        }
        //If user chooses Lightning
        else if(comp == 1 && user ==12){
            printf("Lightning X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==12){
            printf("Lightning X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==12){
            printf("Lightning X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==12){
            printf("Lightning X Fire\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==12){
            printf("Lightning X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==12){
            printf("Lightning X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==12){
            printf("Lightning X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==12){
            printf("Lightning X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==12){
            printf("Lightning X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==12){
            printf("Lightning X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==12){
            printf("Lightning X Devil\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==12){
            printf("Lightning X Snake\n You Win!");
            y++;
        }
        else if(comp == 14 && user ==12){
            printf("Lightning X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==12){
            printf("Lightning X Tree\n You Win!");
            y++;
        }
        //if user chooses Snake
        else if(comp == 1 && user ==13){
            printf("Snake X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==13){
            printf("Snake X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==13){
            printf("Snake X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==13){
            printf("Snake X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==13){
            printf("Snake X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==13){
            printf("Snake X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==13){
            printf("Snake X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==13){
            printf("Snake X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==13){
            printf("Snake X Human\n You Win!");
            y++;
        }
        else if(comp == 10 && user ==13){
            printf("Snake X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==13){
            printf("Snake X Devil\n You Lose!");
            x++;
        }
        else if(comp == 12 && user ==13){
            printf("Snake X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==13){
            printf("Snake X Dragon\n You Lose!");
            x++;
        }
        else if(comp == 15 && user ==13){
            printf("Snake X Tree\n You Win!");
            y++;
        }
        //If user chooses Dragon
        else if(comp == 1 && user ==14){
            printf("Dragon X Rock\n You Win!");
            y++;
        }
        else if(comp == 2 && user ==14){
            printf("Dragon X Paper\n You Lose!");
            x++;
        }
        else if(comp == 3 && user ==14){
            printf("Dragon X Scissor\n You Win!");
            y++;
        }
        else if(comp == 4 && user ==14){
            printf("Dragon X Fire\n You Win!");
            y++;
        }
        else if(comp == 5 && user ==14){
            printf("Dragon X Water\n You Lose!");
            x++;
        }
        else if(comp == 6 && user ==14){
            printf("Dragon X Air\n You Lose!");
            x++;
        }
        else if(comp == 7 && user ==14){
            printf("Dragon X Sponge\n You Lose!");
            x++;
        }
        else if(comp == 8 && user ==14){
            printf("Dragon X Gun\n You Win!");
            y++;
        }
        else if(comp == 9 && user ==14){
            printf("Dragon X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==14){
            printf("Dragon X Wolf\n You Lose!");
            x++;
        }
        else if(comp == 11 && user ==14){
            printf("Dragon X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==14){
            printf("Dragon X Lightning\n You Win!");
            y++;
        }
        else if(comp == 13 && user ==14){
            printf("Dragon X Snake\n You Win!");
            y++;
        }
        else if(comp == 15 && user ==14){
            printf("Dragon X Tree\n You Lose!");
            x++;
        }// 12.Lightning, 13.Snake, 14.Dragon, 15.Tree
        //If user chooses tree
        else if(comp == 1 && user ==15){
            printf("Tree X Rock\n You Lose!");
            x++;
        }
        else if(comp == 2 && user ==15){
            printf("Tree X Paper\n You Win!");
            y++;
        }
        else if(comp == 3 && user ==15){
            printf("Tree X Scissor\n You Lose!");
            x++;
        }
        else if(comp == 4 && user ==15){
            printf("Tree X Fire\n You Lose!");
            x++;
        }
        else if(comp == 5 && user ==15){
            printf("Tree X Water\n You Win!");
            y++;
        }
        else if(comp == 6 && user ==15){
            printf("Tree X Air\n You Win!");
            y++;
        }
        else if(comp == 7 && user ==15){
            printf("Tree X Sponge\n You Win!");
            y++;
        }
        else if(comp == 8 && user ==15){
            printf("Tree X Gun\n You Lose!");
            x++;
        }
        else if(comp == 9 && user ==15){
            printf("Tree X Human\n You Lose!");
            x++;
        }
        else if(comp == 10 && user ==15){
            printf("Tree X Wolf\n You Win!");
            y++;
        }
        else if(comp == 11 && user ==15){
            printf("Tree X Devil\n You Win!");
            y++;
        }
        else if(comp == 12 && user ==15){
            printf("Tree X Lightning\n You Lose!");
            x++;
        }
        else if(comp == 13 && user ==15){
            printf("Tree X Snake\n You Lose!");
            x++;
        }
        else if(comp == 14 && user ==15){
            printf("Tree X Dragon\n You Win!");
            y++;
        }
    }
    }
    //If user chooses 7
    if(choice == 7){
        
        printf("Press 1.Rock, 2.Paper, 3.Scissor, 4.Fire, 5.Water, 6.Air, 7.Sponge\n");
        determine_winner( user,  comp);
    }
    //If user chooses 9
    if(choice == 9){
       
        printf("Press 1.Rock, 2.Paper, 3.Scissor, 4.Fire, 5.Water, 6.Air, 7.Sponge, 8.Gun, 9.Human\n");
        determine_winner( user,  comp);
    }
    //If user chooses 11
    if(choice == 11){
        
        printf("Press 1.Rock, 2.Paper, 3.Scissor, 4.Fire, 5.Water, 6.Air, 7.Sponge, 8.Gun, 9.Human, 10.Wolf, 11.Devil\n");
        determine_winner( user,  comp);
    }
    //If user chooses 15
    if(choice == 15){
        
        printf("Press 1.Rock, 2.Paper, 3.Scissor, 4.Fire, 5.Water, 6.Air, 7.Sponge\n8.Gun, 9.Human, 10.Wolf, 11.Devil, 12.Lightning, 13.Snake, 14.Dragon, 15.Tree\n");
        determine_winner( user,  comp);
    }
    //End
    if(y>x){
            printf("\nYou win the Game!\nThanks for Playing");
            printf("\nScores :\nComp = %d \tYou = %d\n", x,y);
        }
        else if (y < x){
            printf("\nComputer Wins the Game!\nThanks for Playing");
            printf("\n\nScores :\nComp = %d \tYou = %d", x,y);

        }

}
