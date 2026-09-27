/*
    system("color 3A"); // Black background, Light Green text

       -Write a small game program for Stone-Paper-Scissor

       Requirements.

» Ask for how many rounds the game will be.

» Start each round Player vs Computer.

* Show the results with each round.

« If computer wins the round ring a bill , and screed red.
+ If player won the round show green screen.

» After all rounds show game over the print game results,
    then ask the user if s/he want to play again?


*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

// first will using the enum to define the element of the game play 
enum en_game {stone=1 ,paper=2,scissor=3};

// define the players 
enum players_type {person=1 ,pc=2};

// define the wine state 
enum en_victory_sit {person_win=1 ,pc_win=2 ,no_winer=3};


struct scores
{
   short person;
    short pc;
    short draw;
};

// to generat the random number from 1 to 3 in this program
int gen_random(int from ,int to) 
{  
   return rand()% (to-from +1) +from; 
}

// we will using to enter numbers from 32 sousand to -32 sousand
short enter_num(string mes) 
{
    short num=0;
    cout<<mes;
    cin>>num;
    return num;
}

// type the function to malking the subtraction of the two number
int subtract(int a, int b) {
    return a - b; // Uses the built-in '-' operator
}

// to return the lowest number from two number
en_victory_sit get_low(int person,int pc)
{
    if(person <pc)
        return en_victory_sit::person_win;
    else 
    return en_victory_sit::pc_win;
}

// define the upper number of two numbers
en_victory_sit get_upper(int person,int pc)
{
    if(person >pc)
        return en_victory_sit::person_win;
    else 
    return en_victory_sit::pc_win;
}

// the target is returning the winner in the round 
 en_victory_sit who_win(int person ,int pc)
{
    short val=abs(subtract(person,pc));

    if(val==1)
        return get_low(person,pc);
    else if(val==2)
        return get_upper(person,pc);
    else
        return en_victory_sit::no_winer;
        
}

void counter(en_victory_sit x,short& person_wins,short& pc_wins,short& nowin)
{
    if(x==en_victory_sit::person_win)
        person_wins ++;
    else if(x==en_victory_sit::pc_win)
        pc_wins ++;
    else 
        nowin ++;

}

void typer(short x)
{
    if(x==1)
        cout<<"paper"<<endl;
    else if(x==2)
        cout<<"stone"<<endl;
    else if(x==3)
        cout<<"scissor"<<endl;

}

string typer2(en_victory_sit x)
{
    if(x==en_victory_sit::person_win)
        return "person";
    else if(x==en_victory_sit::pc_win)
       return "pc";
    else if(x==en_victory_sit::no_winer)
        return "faire";

    return "unknown";

}


void round_result(int person ,int pc,int round_num,string x)
{
    cout<<"\t"<<"\t"<<"\t"<<"------------------------------------------------------------------"<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"the Round["<<round_num<<"]"<<"\t"<<"\t"<<"\t"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"------------------------------------------------------------------"<<"\n"<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"the person choise =";
    typer(person);
    cout<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"the pc choise=";
    typer(pc);
    cout<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"the winer="<<x<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"___________________________________________________________________"<<"\n"<<endl;
}

void rounds_result(short person ,short pc,short rounds,short draw)
{
    cout<<"\t"<<"\t"<<"\t"<<"------------------------------------------------------------------"<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"\t"<<"[final result]"<<"\t"<<"\t"<<"\t"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"------------------------------------------------------------------"<<"\n"<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"the number of rounds ="<<rounds;
    cout<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"the person win times ="<<person;
    //typer(person);
    cout<<"\n";
    cout<<"\t"<<"\t"<<"\t"<<"the pc win times="<<pc;
    //typer(pc);
    cout<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"the draw time="<<draw<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"final winner="; 
        if(person>pc)
            cout<<"person"<<endl;
        else if(pc>person)
            cout<<"computer"<<endl;
        else
            cout<<"draw"<<endl;
    cout<<"\t"<<"\t"<<"\t"<<"___________________________________________________________________"<<"\n"<<endl;
}



void core_game()
{
    
    do{
        short rounds=0, n=0;
    short pc_num,per_num;

    scores f;
    f.person=0 ,f.pc=0,f.draw=0 ;

    en_victory_sit c;
     rounds=enter_num("enter the time of rounds =");
    do
    {
        ++n;
        
        per_num=enter_num("enter the number of choise stone[1] , paper[2] ,scissor[3] =");

        pc_num=gen_random(1,3);

        c=who_win(per_num,pc_num);

        round_result(per_num ,pc_num,n,typer2(c));
        counter(c,f.person,f.pc,f.draw);
        
    }while(n<rounds);

    rounds_result(f.person,f.pc,rounds,f.draw);

    }while(enter_num("number you enter no=0,yes=anynumber =")!=0);
    
}

int main()
{
    srand((unsigned)time(NULL));

    core_game();

    

}


/**
it's wery good and atchivement for me to finish the first project in my life withe out lock to the mentor selution 
    it's only a first step 
        i will inhance it again 
            before and after locking to the round of best bractise



 */