// Codeland Username Validation
// Have the function codelandUsernameValidation(str) take the str 
// parameter being passed and determine if the string is a valid 
// username according to the following rules:

// 1. The username is between 4 and 25 characters.
// 2. It must start with a letter.
// 3. It can only contain letters, numbers, and the underscore 
//    character.
// 4. It cannot end with an underscore character.

// If the username is valid then your program should return 
// true, otherwise return the false.

#include <string>
#include <iostream>
#include <iomanip>
#include <cctype>

bool codelandUsernameValidation(std::string str) {
  if (str.size() >= 4 && str.size() <= 25)
  {
    for (auto c : str)
    {
      if (!std::isalpha(c) && !std::isdigit(c))
      {
        if (c != '_')
        {
          return false;
        }
      }
    }
    if (!std::isalpha(str[0]) || str[str.size()-1] == '_')
    {
      return false;
    }
    return true;
  }
  return false;
}

int main( int argc, char* argv[] )
{
    std::cout << std::boolalpha << codelandUsernameValidation(argv[1]) << std::endl;
    return 0;
}