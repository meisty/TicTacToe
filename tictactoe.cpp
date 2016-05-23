#include <iostream>

using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
char e;

//function that draws the initial board for tic tac toe
void Draw()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j];
        }
        cout << endl;
    }

}


//Function that takes the users input and then determines if it can be entered on the board
char Input()
{
    char a;
    cout << "Enter your choice: ";
    cin >> a;


        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (a == matrix[i][j])
                {
                    if (matrix[i][j] != player)
                            matrix[i][j] = player;
                    else
                    {
                        //cout << "That has already been chosen.  Please select another number" << endl;
                        //e = 'y';
                        //return e;
                    }
                }
            }
        }

}

//function that changes the player when their turn is over
void TogglePlayer()
{
    if (player == 'X')
    {
        player = 'O';
    }
    else
    {
        player = 'X';
    }
}

//Checks to see if there is a winner by checking rows/columns/diagnols for 3 of the same letter like X or O
char Win(){
    if(matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
        return 'X';
    if(matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
        return 'X';
    if(matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if(matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
        return 'X';
    if(matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
        return 'X';
    if(matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
        return 'X';

    if(matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
        return 'X';
    if(matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
        return 'X';

        if(matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
        return 'O';
    if(matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
        return 'O';
    if(matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if(matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
        return 'O';
    if(matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
        return 'O';
    if(matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
        return 'O';

    if(matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
        return 'O';
    if(matrix[0][2] == 'O' && matrix[1][1] == 'O' && matrix[2][0] == 'O')
        return 'O';

    return '/';
}


int main()
{

    Draw();

    while(1)
    {
        Input();
        Draw();
        if (Win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if(Win() == 'O')
        {
            cout << "O wins!" << endl;
            break;
        }
        if (e != 'y')
            TogglePlayer();
        else
            e = 'n';
    }

    return 0;
}
