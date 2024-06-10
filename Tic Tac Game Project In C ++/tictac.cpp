#include <iostream>
using namespace std;

// Error was declaring because the variable 'board' was not declared in the scope --
//-- an array is always contained within a pair of brakets, so an error occurs when --
//--wrting it inside the brakets.
// So we write the "Board Variable" in the globle side So, that there is no error.
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn = 'X'; // for Two people turns
bool draw = false;

int row;
int column; // we describe a variables
// Now we will use 'Functions' here to shorten the code
void display_board()
{
    cout << "\t\n\n T i c k  C r o s s  G a m e ";
    cout << "\n\n\n";
    cout << "\t Player1 [x] \n\t Player2 [O]";
    cout << "\n\n\n";
    cout << "\t\t\t      |      |       \n";
    cout << "\t\t\t " << board[0][0] << "    | " << board[0][1] << "    |" << board[0][2] << "     \n";
    cout << "\t\t\t______|______|______ \n";
    cout << "\t\t\t      |      |       \n";
    cout << "\t\t\t " << board[1][0] << "    | " << board[1][1] << "    |" << board[1][2] << "     \n";
    cout << "\t\t\t______|______|_______\n";
    cout << "\t\t\t      |      |       \n";
    cout << "\t\t\t " << board[2][0] << "    | " << board[2][1] << "    |" << board[2][2] << "     \n";
    cout << "\t\t\t      |      |       \n";
}

//"****MOCK TABLE FOR UNDERSTANDING 2D ARRAY***"
//         Col 1        Col 2      Col 3
//                  |           |
//   Row 1 Arr[0][0]| Arr[0][1] | Arr[0][2]
//        __________|___________|___________
//   Row 2 Arr[1][0]| Arr[1][1] | Arr[1][2]
//        __________|___________|___________
//   Row 3 Arr[2][0]| Arr[2][1] | Arr[2][2]
//                  |           |

void player_turn()
{
    int choice;

    if (turn == 'X')
    {
        cout << "\t \n Player 1 [X] Turn : ";
    }
    if (turn == 'O')
    {
        cout << "\t\n Player 2 [O] Turn : ";
    }

    cin >> choice;
    switch (choice)
    {
    case 1:
        row = 0;
        column = 0;
        break;
    case 2:
        row = 0;
        column = 1;
        break;
    case 3:
        row = 0;
        column = 2;
        break;
    case 4:
        row = 1;
        column = 0;
        break;
    case 5:
        row = 1;
        column = 1;
        break;
    case 6:
        row = 1;
        column = 2;
        break;
    case 7:
        row = 2;
        column = 0;
        break;
    case 8:
        row = 2;
        column = 1;
        break;
    case 9:
        row = 2;
        column = 2;
        break;

    default:
        cout << "Invalid Choice \n";
        break;
    }
    if (turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'X';
        turn = 'O';
    }
    else if (turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O')
    {
        board[row][column] = 'O';
        turn = 'X';
    }
    else
    {
        cout << "Box already filled \nPlease try again\n\n";
        player_turn();
    }
    display_board();
}
bool gameover()

// if the value is true than the data type will be "BOOLEAN"
// there are 3 scenarios of game over
// 1 : Check Win
// 2: Game Playing
// 3: Game Draw
// Check Win
{
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[i][0] == board[1][i] && board[i][0] == board[2][i])
            return false;
    for (int j = 1; j < 3; j++)
        if (board[j][0] == board[j][1] && board[j][0] == board[j][2] || board[0][j] == board[1][j] && board[0][j] == board[2][j])
            return false;
    for (int k = 2; k < 3; k++)
        if (board[k][0] == board[k][1] && board[k][0] == board[k][2] || board[0][k] == board[1][k] && board[0][k] == board[2][k])
            return false;
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return (false);
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return (false); // Here it is we return the value in function

    // If there is any box is not filled
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    // Draw
    draw = true;
    return false;
}

int main()
{
    while (gameover()) // And we call the function in while loop
    {

        /* Here we use "Two dimensional arrays" which we will name "Board".
        And here we have only '3' rows and '3' columns.
        And Now we use arrays to create all number in one variable
        There are two Dimensions in arrays
        1: Single dimension
        2: two dimension
        ***In SINGLE DIMENSIONAL WE HAVE ONLY "ONE" AND "MULTIPLES" COLUMNS.***
        ***BUT IN two dimensional arrays used when we have more than 'ONE' row and --
        -- more than 'ONE' columns.
        Here we will used two dimension arrays because in this program --
        -- we have more than one rows and more than multiples columns.*/
        // 2D Array Intialised to different Rows
        // char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}}; //{{We WRITE FOR EXAMPLE}}

        display_board(); // by summerising the code we created a function variable

        /* Here it is we add " Switch" condition because we have too many choices --
        -- a switch condition is used where when there are too many choices */
        // one more we add a function
        player_turn();

        // This is interface of my Tic tac game program
        // one more we add a function

        gameover();
    }
    if (turn == 'X' && draw == false)
        cout << "Player 2 [O] Wins!! ***Congratulations***" << endl;
    else if (turn == 'O' && draw == false)
        cout << "Player 1 [X] Wins!! ***Congratulations***" << endl;
    else
        cout << "\t\t ***GAME DRAW*** " << endl;
    return 0;
}