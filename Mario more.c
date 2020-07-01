#include<stdio.h>
#include<cs50.h>
int main()
{
    int rows;
    for( ; ; )
    {
        rows=get_int("Enter num between 1-8:");
        if (rows > 0 && rows < 9)
        {
            break;
        }
        else
        {
            continue;
        }
    }
    for(int row = 1; row <= rows; row++)
    {
        for(int space = rows - row; space > 0; space-- )
        {
            printf(" ");
        }
    
        for (int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }
        printf("  ");
        for ( int hash = 1; hash <= row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
