// Codeland Username Validation
// Have the function codelandUsernameValidation(str) take the str 
// parameter being passed and determine if the string is a valid 
// username according to the following rules:

// 1. The username is between 4 and 25 characters.
// 2. It must start with a letter.
// 3. It can only contain letters, numbers, and the underscore 
//    character.
// 4. It cannot end with an underscore character.

// If the username is valid then your program should return the 
// string true, otherwise return the string false.

#include <string>
#include <iostream>

std::string codelandUsernameValidation(std::string str) {
  
  return str;
}

int main( int argc, char* argv[] )
{
    std::cout << codelandUsernameValidation(argv[1]) << std::endl;
    return 0;
}