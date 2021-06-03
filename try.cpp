#include <iostream>
using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
int n;
void draw()
{
    system("cls");
    cout << "TIC TAC TOE" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void Input()
{
    int a;
    cout << "It's " << player << " turn. "
         << "Press the number of the field" << endl;
    cin >> a;

    if (a == 1)
    {
        if (matrix[0][0] == '1')
        {
            matrix[0][0] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 2)
    {
        if (matrix[0][1] == '2')
        {
            matrix[0][1] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 3)
    {
        if (matrix[0][2] == '3')
        {
            matrix[0][2] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 4)
    {
        if (matrix[1][0] == '4')
        {
            matrix[1][0] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 5)
    {
        if (matrix[1][1] == '5')
        {
            matrix[1][1] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 6)
    {
        if (matrix[1][2] == '6')
        {
            matrix[1][2] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 7)
    {
        if (matrix[2][0] == '7')
        {
            matrix[2][0] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 8)
    {
        if (matrix[2][1] == '8')
        {
            matrix[2][1] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
    else if (a == 9)
    {
        if (matrix[2][2] == '9')
        {
            matrix[2][2] = player;
        }
        else
        {
            cout << "Field is already in use, try again!" << endl;
            Input();
        }
    }
}
void togglePlayer()
{
    if (player == 'X')
    {
        player = '0';
    }
    else
    {
        player = 'X';
    }
}
char win()
{
    //player1
    if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
    {
        return 'X';
    }
    if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
    {
        return 'X';
    }
    if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
    {
        return 'X';
    }
    if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
    {
        return 'X';
    }
    if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
    {
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
    {
        return 'X';
    }
    if(matrix[0][0]=='X' && matrix[1][2]=='X' && matrix[2][2]=='X')
    {
        return 'X';
    }
    if (matrix[0][2] == 'X' && matrix[1][1] == 'X' && matrix[2][0] == 'X')
    {
        return 'X';
    }

    //player2
    if (matrix[0][0] == '0' && matrix[0][1] == '0' && matrix[0][2] == '0')
    {
        return '0';
    }
    if (matrix[1][0] == '0' && matrix[1][1] == '0' && matrix[1][2] == '0')
    {
        return '0';
    }
    if (matrix[2][0] == '0' && matrix[2][1] == '0' && matrix[2][2] == '0')
    {
        return '0';
    }
    if (matrix[0][0] == '0' && matrix[1][0] == '0' && matrix[2][0] == '0')
    {
        return '0';
    }
    if (matrix[0][1] == '0' && matrix[1][1] == '0' && matrix[1][2] == '0')
    {
        return '0';
    }
    if (matrix[0][2] == '0' && matrix[1][2] == '0' && matrix[2][2] == '0')
    {
        return '0';
    }
    if(matrix[0][0]=='0' && matrix[1][2]=='0' && matrix[2][2]=='0')
    {
        return '0';
    }
    if (matrix[0][2] == '0' && matrix[1][1] == '0' && matrix[2][0] == '0')
    {
        return '0';
    }
    return 'U';
}
int main()
{
    n = 0;
    draw();
    while (1)
    {
        n++;
        Input();
        draw();
        if (win() == 'X')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (win() == '0')
        {
            cout << "X wins!" << endl;
            break;
        }
        else if (win() == 'U' && n == 9)
        {
            cout << "It's a draw!" << endl;
            break;
        }
        togglePlayer();
    }
    system("pause");
    return 0;
}