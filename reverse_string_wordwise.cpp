#include <iostream>
using namespace std;

int main()
{
    char input[] = "abc de f gh";
    int length = 0; // Initialize length to 0
    for (int i = 0; input[i] != '\0'; i++)
    {
        length++;
    }
    char arr[length + 1];
    int ind = 0, start = length - 1, end = length - 1;
    for (int i = length - 1; i >= -1; i--)
    {
        start = i;
        if (input[i] == ' ' || i == -1)
        {
            for (int j = start + 1; j <= end; j++)
            {
                arr[ind++] = input[j]; // Corrected indexing
            }
            arr[ind++] = ' ';
            end = start - 1;
        }
    }
    arr[length] = '\0';
    cout << arr;
    return 0;
}
