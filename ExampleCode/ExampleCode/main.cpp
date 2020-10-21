// Price Howard
// CS coding competition Practice
// 10-20-2020
#include<iostream>
using namespace std;
int main()
{
    char letter[100];
    cin.getline(letter, 100);
    int wordCounter = 0, wordOne = 0, wordTwo = 0, counter=0;
    
    for(int i = 0; i<100; i++)
    {
        if(letter[i] != ',' && letter[i] != '.' && letter[i] != '!' && letter[i] != '?')
        {
            if(letter[i] == ' ' || letter[i] == '\0')
            {
                if(wordOne == 0 )
                {
                    wordOne = wordCounter;
                    wordCounter = 0;
                }
                else if(wordOne != 0)
                {
                    wordTwo = wordCounter;
                    wordCounter = 0;
                    if(wordTwo % wordOne == 0)
                    {
                        counter++;
                        wordOne = wordTwo;
                        wordTwo = 0;
                    }
                    else
                    {
                        wordOne = wordTwo;
                        wordTwo = 0;
                    }
                }
            }
            else
            {
            wordCounter++;
            }
        }
        if (letter[i] == '\0')
        {
            break;
        }
    }
    cout << counter << endl;
}
