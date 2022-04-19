#include <iostream>
#include <string>

using namespace std;

#define IN 1  //Program is inside a word
#define OUT 0 //Program is outside a word

//When running the program on a windows machine, use Control + Z after you finish inputing in console.
//In a Linux or Mac, use Control + D or Command + D 

int main()
{
    int characters, numberOfLines, numberOfWords, numberOfCharacters, state;

    state = OUT;
    numberOfLines = numberOfWords = numberOfCharacters = 0;

    //Get every character while we haven't reached end of file
    //Store the characters temporarily in characters variable

    while ((characters = getchar()) != EOF)
    {
        ++numberOfCharacters;
        if (characters == '\n')
            ++numberOfLines;

        //if we encounter a space or a new line
        if (characters == ' ' || characters == '\n' || characters == '\t')
            //We are now outside a word
            state = OUT;

            //While still outside a word, we encounter a character that's not a space, tab  or a new line
        else if (state == OUT)
        {
            state = IN;
            ++numberOfWords;
        }
    }

    cout << "Number of lines - "<< numberOfLines <<endl;
    cout << "Number of words - "<< numberOfWords <<endl;
    cout << "Number of characters - "<< numberOfCharacters <<endl;
    

    return 0;
}
