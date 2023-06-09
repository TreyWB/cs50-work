#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string replace(string input);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./no-vowels word\n");
        return 1;
    }

    string input = argv[1];

    printf("Replaced: %s\n", replace(input));
}

string replace(string input)
{
    int len;
    len = strlen(input);

    string output;
    output = input;

    for (int i = 0; i < (len - 1); i++)
    {
        // Replace uppercase letters with lowercase
        output[i] = tolower(input[i]);

        switch (output[i])
        {
            case 'a':
            output[i] = '6';
            break;
            case 'e':
            output[i] = '3';
            break;
            case 'i':
            output[i] = '1';
            break;
            case 'o':
            output[i] = '0';
            break;
        }

    }

    return output;
}