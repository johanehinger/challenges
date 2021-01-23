// Longest Word
// Have the function longestWord(sen) take the sen parameter being 
// passed and return the largest word in the string. If there are 
// two or more words that are the same length, return the first 
// word from the string with that length. Ignore punctuation and 
// assume sen will not be empty.
#include <iostream>
#include <string>
#include <iterator>
#include <cctype>

std::string longestWord(std::string sen)
{
    std::string longest_word{};
    std::string word{};
    for (auto it = std::begin(sen); it != std::end(sen) + 1; it++)
    {
        if (std::isalpha(*it) )
        {
            word += *it;
        }
        else if ( *it == ' ' || it == std::end(sen))
        {
           if (longest_word.size() < word.size())
           {
               longest_word = word;
               word = {};
           }
           else 
           {
               word = {};
           }
        }
    }
    return longest_word;
}
    


int main(int argc, char* argv[])
{
    std::cout << longestWord(argv[1]) << std::endl;
}