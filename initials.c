#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string first_name=NULL, last_name=NULL;

    do
    {
    // checks to see if first_name has a value other than NULL or 0
    if (first_name == NULL || first_name == 0 || strlen(first_name) == 0)
        {
            printf("print your first name: ");
            first_name = get_string();
        }
    // checks to see if last_name has a value other than NULL or 0,if statement helps not reprompt users if they already input value
    if (last_name == NULL || last_name == 0 || strlen(last_name) == 0)
        {
            printf("print your last name: ");
            last_name = get_string();
        }
    } // if either first_name or last_name don't have a value other than NULL or 0 it will play through again
    while (first_name == NULL || strlen(first_name) == 0 || last_name == NULL || strlen(last_name) == 0);

    printf("Hello, %s %s your initials are %c%c\n", first_name, last_name, first_name[0], last_name[0]);
}
