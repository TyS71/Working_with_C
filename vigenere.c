#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(int argc, string argv[])
{
    //make sure more than 1 command line argument is provided
    if (argc <= 1)
    {
        printf("Word(s) must be provided\n");
        return 1;
    }

    int key, j, n;

    //iterate through each word
    for (int i = 1; i < argc; i++)
    {
        if (argc > 2)
        {
            //iterate through each letter
            for (j = 0, n = strlen(argv[i]), key = 0; j < n; j++, key ++)
            {
                //resets the key back to 0
                if (key > 2)
                {
                    key = 0;
                }
                if (argv[i][j] >= 65 && argv[i][j] <= 90)
                {
                    if (argv[i][j] + key > 90) //borrowed this algorithm from my caesar cipher to wrap around to beginning
                    {
                        argv[i][j] = (((argv[i][j] % 65) + key) % 26) + 65;
                    }
                    else
                    {
                        argv[i][j] = argv[i][j] + key;
                    }
                }
                else if (argv[i][j] >= 97 && argv[i][j] <= 122)
                {
                    if (argv[i][j] + key > 122)
                    {
                        argv[i][j] = (((argv[i][j] % 97) + key) % 26) + 97;
                    }
                    else
                    {
                        argv[i][j] = argv[i][j] + key;
                    }
                }
            }
            printf("%s", argv[i]);
        }
    printf("\n");
    }
}
