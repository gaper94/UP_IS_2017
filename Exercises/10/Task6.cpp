#include <iostream>
#include <limits>
using namespace std;

void findWords(const char* src)
{
    int idxShortestWord = 0;
    int shortestWordLength = numeric_limits<int>::max();
    int idxLongestWord = 0;
    int longestWordLength = 0;
    
    int currentWordLength = 0;
    int startIdx = -1;

    for(int i = 0;; i++)
    {
        if(src[i] != ' ' && src[i] != '\0')
        {
            if(startIdx == -1)
            {
                startIdx = i;
            }
            currentWordLength++;
        }
        else
        {
            if(currentWordLength >= longestWordLength)
            {
                idxLongestWord = startIdx;
                longestWordLength = currentWordLength;
            }
            if(currentWordLength <= shortestWordLength)
            {
                idxShortestWord = startIdx;
                shortestWordLength = currentWordLength;
            }
            currentWordLength = 0;
            startIdx = -1;
        }

        if(src[i] == '\0') break;
    }
    cout << "Shortest word is: ";
    for(int i = idxShortestWord; i < idxShortestWord + shortestWordLength; i++)
    {
        cout << src[i];
    }
    cout << "\nLongest word is: ";
    for(int i = idxLongestWord; i < idxLongestWord + longestWordLength; i++)
    {
        cout << src[i];
    }
    cout << endl;
}

int main()
{
    findWords("yesterday love was such an easy game to play");
    return 0;
}
