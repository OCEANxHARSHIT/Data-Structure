#include <iostream>
using namespace std;
void inputarray(int input[100000], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> input[i];
    }
}

void printarray(int input[100000], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << input[i];
    }
}
int main()
{
    int football[100];
    int n = 5;
    inputarray(football, 5);
    printarray(football, 5);
}
