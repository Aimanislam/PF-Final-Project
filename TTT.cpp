#include <iostream>
using namespace std;
// GLOBAL ARRAY
char number [10] = {'0','1','2','3','4','5','6','7','8','9'}; 

// FUNCTION DECLERATION
void board();
int checkwin ();
   int main()
 {
   int player = 1, i, choice;
   char mark;

   do {
    board();
    if (player % 2)
    player = 1;   
    else
    player = 2; 
    cout << "Player " << player <<" enter a number: ";
    cin >> choice;
    if (player == 1)
    {
      mark = 'X';
    }
    else
    {
      mark = 'O';
    }
     if (choice == 1 && number [1] == '1')
     number [1] = mark;
     else if (choice == 2 && number [2] == '2')
     number [2] = mark;
     else if (choice == 3 && number [3] == '3')
     number [3] = mark;
     else if (choice == 4 && number [4] == '4')
     number [4] = mark;
     else if (choice == 5 && number [5] == '5')
     number [5] = mark;
     else if (choice == 6 && number [6] == '6')
     number [6] = mark;
     else if (choice == 7 && number [7] == '7')
     number [7] = mark;
     else if (choice == 8 && number [8] == '8')
     number [8] = mark;
     else if (choice == 9 && number [9] == '9')
     number [9] = mark;
     else {
       cout << "Invalid move because you entered an invalid number";
       player --;
       cin.ignore();
       cin.get();
     }
      i=checkwin();
      player ++;
     }
     while (i==-1);
     {
      board();
      if  (i==1)
      cout << "==> \a Player " <<--player <<" win ";
      else 
      cout << "==> \a  Game Draw ";
      cin.ignore();
      cin.get();
     }
         return 0;
    }
int checkwin()
{
  if (number [1]== number[2] && number [2]== number[3])
  return 1;
  else if  (number [4]== number[5] && number [5]== number[6])
  return 1;
  else if  (number [7]== number[8] && number [8]== number[9])
  return 1;
  else if  (number [1]== number[4] && number [4]== number[7])
  return 1;
  else if  (number [2]== number[5] && number [5]== number[8])
  return 1;
  else if  (number [3]== number[6] && number [6]== number[9])
  return 1;
  else if  (number [1]== number[5] && number [5]== number[9])
  return 1;
  else if  (number [3]== number[5] && number [5]== number[7])
  return 1;
  else if (number [1] != '1' && number[2] != '2' && number[3] != '3' && number[4] != '4' 
  && number[5] != '5' && number[6] != '6' && number[7] != '7' && number[8] != '8' && number[9] != '9'  )
  return 0;
  else 
  {
    // "-1" is used for processing, when our system is in processing.
    return -1;
  }
}
// FUNCTION DEFINATION
void board()
{
  // GAME PATTERN
  system("cls");
cout << " ====================== " <<endl;
cout << "      Tic Tac Toe    "<<endl;
cout << " ====================== " <<endl;
cout << " Player 1 (X) & Player 2 (O) "  <<endl <<endl;
cout << "     |     |     "   <<endl;
cout << "  " << number[1] << "  |  " << number[2] << "  |  " << number[3] <<endl;

cout << "  ___|_____|___  "   <<endl;
cout << "     |     |     "   <<endl;   

cout << "  " << number[4] << "  |  " << number[5] << "  |  " << number[6] <<endl;
cout << "  ___|_____|___  "   <<endl;
cout << "     |     |     "   <<endl;   

cout << "  " << number[7] << "  |  " << number[8] << "  |  " << number[9] <<endl;
cout << "     |     |     "   <<endl;   
}