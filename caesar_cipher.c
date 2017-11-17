#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    string s;
    // create variable for atoi(argv[1]) to make things easier to read.
    int arg = atoi(argv[1]);

    //make sure they only put in one other argument in commandline
    if (argc != 2)
    {
        printf("Not the proper amount of arguments \n");
        return 1;
    }
    //make sure the number that's been given is positive
    if (arg <= 0 && arg < 26)
    {
        printf("Argument needs to be a positive integer\n");
        return 1;
    }

    do
    {
        // now created a loop so they must provide an input
        printf("What would you like to scramble?  ");
        s = get_string();
    }
    while(strlen(s) <= 0 );

    //loop to add the command line argument to each letter given
    int i, n;

    for (i = 0, n = strlen(s); i < n; i++)
    {
        //determine if the char is 'A'..'Z'
        if (s[i] >= 65 && s[i] <= 90)
        {
            //if it'll move out of this letter range it'll execute this
            if ((s[i] + arg) > 90)
            {
                //essentially it's always wrapping it back to the beginning if it goes over 'Z'
                s[i] = (((s[i] % 65) + arg) % 26) + 65;
            }
            else
            {   //if it doesn't go over 'Z' it just executes this because it doesnt need to wrap back to beginning
                s[i] = s[i] + arg;
            }
        }
        //if it's 'a'..'z'
        else if (s[i] >= 97 && s[i] <= 122)
        {
            if ((s[i] + arg) > 122)
            {
                //essentially it's always wrapping it back to the beginning if it goes over 'z'
                s[i] = (((s[i] % 97) + arg) % 26) + 97;
            }
            else
            {
                s[i] = s[i] + arg;
            }
        }

        printf("%c", s[i]);
    }
    printf("\n");
}
