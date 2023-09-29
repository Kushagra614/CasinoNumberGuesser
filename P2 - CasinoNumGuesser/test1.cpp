#include<iostream>
#include<time.h>
using namespace std;

int N=100;
int nom ;
int input;
int bet;
int wb;

void betting(){
    cout<<"HERE AT GRAND CASINO, THE BETTINGS ARE AS FOLLOWS: "<<endl;
    cout<<"1. MINIMUM BET = Rs1000"<<endl;
    cout<<"2. MAXIMUM BET = Rs100000"<<endl;
    cout<<"3. IF YOU WIN, YOU GET 2x YOUR BET"<<endl;
    cout<<"4. IF YOU LOSE, YOU WILL LOSE YOUR MONEY"<<endl;
    cout<<"ENTER THE BETTING AMOUNT: "<<endl;
    cin>>bet;
    cout<<"YOUR BETTING AMOUNT IS: "<<bet<<endl;
}

void randnom(){
    srand(time(0));
    nom = rand() % N;
}

void uinput(){
    cout<<"NOW SELECT A NUMBER BETWEEN 0 TO 100"<<endl;
    cin>>input;
    cout<<"The no. you have chosen is: "<<input<<endl;
}

void game(){
    wb = bet*2;
    if (input==nom)
    {
        cout<<"WOW CONGRATS!!! YOU GUESSED THE RIGHT"<<endl;
        cout<<"YOU WON :"<<"Rs"<<wb<< endl;

    }
    else{
        cout<<"OHH!!! YOU GUESSED IT WRONG"<<endl;
        cout<<"The number was: "<< nom <<endl;
        cout<<"OOPS!! YOU LOST YOUR BET"<<endl;
        cout<<"BETTER LUCK NEXT TIME"<<endl;
   }
    
}




int main(){
cout<<"HELLO!"<<endl;
cout<<"WELCOME TO THE GRAND CASINO"<<endl;
cout<<"HERE ARE THE RULES OF THE GAME"<<endl;
cout<<"YOU WILL HAVE THE GUESS THE NUMBER ................... "<<endl;
randnom();
betting();
uinput();
game();

   return 0;
}