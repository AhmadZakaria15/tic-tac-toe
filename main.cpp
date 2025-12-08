#include <iostream>
#include <ctime>
using namespace std;

void Design(char *spaces);
void Player(char *spaces , char player);
void Computer(char *spaces , char computer);
bool check();


int main(){
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool run = true;

    while (run){
        
        Design(spaces);
        Player(spaces ,player);
        Computer(spaces ,computer );

    // if (check()){
    //     run = false;
    //     break;}
    }

    Design(spaces);
    return 0;
}

void Design(char *spaces){
    
    cout << endl;
    cout << "   |    |" << endl;
    cout << spaces[0] << "  | " << spaces[1] << "  | " << spaces[2] << endl;
    cout << "___|____|___"<<endl;
    cout << "   |    |\n";
    cout << spaces[3] << "  | " << spaces[4] << "  | " << spaces[5] << endl;
    cout << "___|____|___"<<endl;
    cout << spaces[6] << "  | " << spaces[7] << "  | " << spaces[8] << endl;
    cout << "   |    |" << endl;
    cout << "   |    |" << endl;
    cout << endl;
    
}

void Player(char *spaces , char player ){

    int num;
cout << "Enter a spot to place a marker (1-9): ";
cin >> num;
num--;
do{
if (spaces[num]==' '){

    spaces[num] = player;
    break;
}
else {cout << "wrong place try again " ; main();}
}  
while (num >0 || num <8);
}

void Computer(char *spaces ,char computer){

 int num;
    srand(time(0));

    while(true){
        num = rand() % 9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}

// bool check(char *spaces ,char player ,char computer){}

   
    
   






