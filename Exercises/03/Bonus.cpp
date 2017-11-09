#include <iostream>
#include <algorithm>
#include <vector>
#include <bitset>
#include <numeric>

#define all(c) c.begin(), c.end()

using namespace std;

std::string toUnary(const std::string& binaryString)
{
    std::string unaryString;
    int counterSerie = 0;
    char currentSerie = binaryString[0];

    for(size_t idx = 0; idx < binaryString.length(); ++idx)
    {
        if(currentSerie != binaryString[idx])
        {
            unaryString += currentSerie == '0' ? "00 " : "0 ";
            unaryString += std::string(counterSerie, '0');
            unaryString += " ";
            currentSerie = binaryString[idx];
            counterSerie = 1;
        }
        else
        {
            ++counterSerie;
        }
    }

    unaryString += currentSerie == '0' ? "00 " : "0 ";
    unaryString += std::string(counterSerie, '0');

    return unaryString;
}

int main()
{
    string MESSAGE;
    getline(cin, MESSAGE);

    // Lambda to convert the char to bits
    auto toBinStr = [] (char ch)
    {
        return bitset<7>(ch).to_string();
    };

    // Transform each letter to binary string representation
    vector<string> vec;
    transform(all(MESSAGE), back_inserter(vec), toBinStr);

    // Make one string from each letter
    string oneLineOutput = accumulate(all(vec), string(""));

    // Transform it to unary message
    std::cout<< toUnary(oneLineOutput) << endl;
}
