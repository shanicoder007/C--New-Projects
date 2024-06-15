#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char turn;
bool draw = false;
int choice;
int row, column;
int num = 1;

void display_board()
{
    system("cls");
    cout << "\t\n\n T i c k  C r o s s  G a m e ";
    cout << "\n\n\n";
    cout << "\t Player1 [X] \n\t Player2 [O]";
    cout << "\n\n\n";
    for (int i = 0; i < 1; i++) // creates 10 rows
    {

        cout << "" << board[0][0] << "      |    " << board[0][1] << "  |   " << board[0][2] << "\n"; // print each number
        cout << "_______|_______|______\n";

        for (int j = 0; j < 1; j++)
        {
            cout << "" << board[1][0] << "      |    " << board[1][1] << "  |   " << board[1][2] << "\n";
            cout << "_______|_______|______\n";
        }
        for (int k = 0; k < 1; k++)
        {
            cout << "" << board[2][0] << "      |    " << board[2][1] << "  |   " << board[2][2] << "\n";
            cout << "_______|_______|______\n";
        }
    }
}

void initialize_turn()
{
    cout << "\n\n\t\t**Would you like to take Sign 'X' OR 'O'";
    cout << "\nEnter 'X' for X or 'O' for O: ";
    cin >> turn;

    while (turn != 'X' && turn != 'O')
    {
        cout << "INvaliD choice . Plz try again \n";
        turn = 'X';
        if (turn = 'X')
        {
            cout << "Player 1 start with X " << endl;
        }
        else
            cout << " Player 1 will start with O " << endl;
    }
}

void player_turn()
{
    if (turn == 'X')
    {
        cout << "\t\n Player 1 [X] Turn: ";
    }
    else
    {
        cout << "\t\n Player 2 [O] Turn: ";
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
{
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[i][0] == board[1][i] && board[i][0] == board[2][i])
            return false;

    for (int j = 0; j < 3; j++)
        if (board[j][0] == board[j][1] && board[j][0] == board[j][2] || board[0][j] == board[1][j] && board[0][j] == board[2][j])
            return false;

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
        return false;

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
        return false;

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return true;

    draw = true;
    return false;
}

int main()
{
    initialize_turn();

    while (gameover())
    {
        display_board();
        player_turn();
    }

    if (turn == 'X' && draw == false)
        cout << "Player 2 [O] Wins!! **Congratulations" << endl;
    else if (turn == 'O' && draw == false)
        cout << "Player 1 [X] Wins!! **Congratulations" << endl;
    else
        cout << "\t\t *GAME DRAW* " << endl;

    return 0;
}