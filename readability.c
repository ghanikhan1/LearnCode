#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){

    int countLetters( string s );
    int countWords( string s );
    int countSentence( string s );

    string s = get_string("Text: ");
    printf("\n %i Letters" , countLetters(s) );
    printf("\n %i Words" , countWords(s) );
    printf("\n %i Sentences" , countSentence(s) );

    float Letters = round(countLetters(s));
    float Words = round(countWords(s));
    float Sentences = round(countSentence(s));

    float L = round((Letters / Words) * 100);
    float S = round((Sentences / Words) * 100);

    printf(" %f \n" , L);
    printf(" %f \n" , S);

    float index = 0.0588 * L - 0.296 * S - 15.8;
    int Grade = round(index);
    if( Grade >= 16)
    {
        printf("\nGrade 16+\n");
    }
    else if( Grade < 1)
    {
        printf("\nGrade Below 1\n");
    }
    else

    printf("\nGrade %i\n" , Grade);

}

int countLetters( string s ){

    int count = 0;

    for (int i = 0, n = strlen(s); i < n; i++)
    {

        if( isalpha(s[i]) && s[i] != ' ' )
        {
            count++;
        }
    }
    printf("\n");
    return count;
}


int countWords( string s ){

    int count = 0;

    for( int i = 0, n = strlen(s) ; i < n; i++)
    {
        if( s[i] == ' ' && s[i+1] != ' ')
        {
            count++;
        }
    }
    printf("\n");
    return count+1;
}


int countSentence( string s ){

    int count = 0;

    for( int i = 0, n = strlen(s) ; i < n; i++)
    {
        if( s[i] == '.' || s[i] == '!' || s[i] == '?' )
        {
            count++;
        }
    }
    printf("\n");
    return count;
}



