#include <stdio.h>
void main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c",&ch);

    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        switch(ch)
        {
            case 'A':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'E':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'I':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'O':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'U':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'a':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'e':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'i':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'o':
                printf("%c is a VOWEL.\n",ch);
                break;
            case 'u':
                printf("%c is a VOWEL.\n",ch);
                break;
            default:
                printf("%c is a CONSONANT.\n",ch);
        }
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }

    return 0;
}
