#include<iostream>
#include<ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char player);
void showWinner(char player, char computer);

int main(){

    char player;
    char computer;

    player = getUserChoice();
    std::cout<<"Your Choice: ";
    showChoice(player);

    computer = getComputerChoice();
    std::cout<<"Computer's Choice: ";
    showChoice(computer);

    showWinner(player,computer);


    return 0;
}
char getUserChoice(){
    char player;
    do
    {
        
    std::cout<<"\nROCK-PAPER-SCISSOR GAME\n";
    std::cout<<"************************\n";
    std::cout<<"Type 'r' for ROCK\n";
    std::cout<<"Type 'p' for PAPER\n";
    std::cout<<"Type 's' for SCISSOR\n";
    std::cin>>player;
    
    }while(player == 'r' && player == 'p' && player == 's');
    
    return player;
}
char getComputerChoice(){
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';

    }
return 0;
}
void showChoice(char choice){
    
    switch(choice){
    case 'r': std::cout<<"Rock\n";
    break;
    case 'p': std::cout<<"Paper\n";
    break;
    case 's': std::cout<<"Scissors\n";
    break;
    }
}
void showWinner(char player, char computer){
    
    switch(player){
    case 'r':
        if(player == 'r' && computer == 'r'){
            std::cout<<"Its a Tie\n";
        }
        else if(player == 'r' && computer == 'p'){
            std::cout<<"Computer Won.\n";
        }
        else{
            std::cout<<"You Won.";
        }
        break;
    case 'p':
         if(player == 'p' && computer == 'r'){
            std::cout<<"You Won\n";
        }
        else if(player == 'p' && computer == 'p'){
            std::cout<<"Its a Tie.\n";
        }
        else{
            std::cout<<"You Loose.";
        }
        break;
    case 's':
        if(player == 's' && computer == 'r'){
            std::cout<<"You Loose.\n";
        }
        else if(player == 's' && computer == 'p'){
            std::cout<<"You Won.\n";
        }
        else{
            std::cout<<"Its a Tie.";
        }
        break;
    }
}