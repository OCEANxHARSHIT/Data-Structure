#include <iostream>
using namespace std;
int arraymax(int input[], int size)
{
    int max = input[0];
    for (int i = 0; i < size; i++)
    {

        if (input[i] > max)
        {
            max = input[i];
        }
    }
    return max;
}
int arraymin(int input[], int size)
{
    int min = input[0];
    for (int i = 0; i < size; i++)
    {
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    int M[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> M[i];
    }
    cout << arraymax(M, n)<<endl;
    cout << arraymin(M, n)<<endl;
    return 0 ;
}