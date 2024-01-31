#include<iostream>
#include<string>
int main()
{
    // getting user input
    std::string User_input;
    std::cout << "Enter a string : " ; 
    std::getline (std::cin, User_input);

    // calculating value 
// changing into C-string
    const char* charArray = User_input.c_str();
        // calcualtion 

        int sum = 0;
        for (char c: User_input )
        {
            if('a'<= c && c <='z'){
            int    asciiValue = static_cast <int>(c) ;
              int  value = asciiValue - 96;
                sum += value ;

            } 
         }
         std::cout << "The total sum is : " << sum << std::endl;
         return 0;
} 