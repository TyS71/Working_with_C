//give back the least amount of coins for a certain amount of change.   .50 == 2 coins returned .41 == 4 coins returned 

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int coins = 0;
    float change;
    do
    {
    printf("change:  ");
    change = get_float();

    } while (change <= 0.0);

    while (change > 0.0)
    {
        if (change - .25 >= 0.0)
        {
            change = change - .25 ;
            coins ++;
        }
        else if (change - .10 >= 0.0)
        {
            change = change - .10;
            coins ++;
        }
        else if (change - .05 >= 0.0)
        {
            change = change - .05;
            coins ++;
        }
        else
        {
            change = change - .01;
            coins ++;
        }
    }

    printf("you have %d coins \n", coins);
}
