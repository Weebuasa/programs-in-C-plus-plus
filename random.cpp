#include<iostream>
#include<cstring>
#include<string>
int main()
{
    // Assigning value to every character 
    int alphabetSize  {26};

    char alphabet[alphabetSize] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'}; 

    int value[alphabetSize];
    for (int i = 0  ; i < alphabetSize ; i++){
    
        
        value[i] = i + 1 ;   
         
        
    }/*
    
    for (int i = 0 ; i < alphabetSize; i++){  
    std::cout << alphabet[i] << "  :  " <<  value[i] ; 
            std::cout << "\n";

    }  */

    // getiing the user input

        std::string User_input;
  
    std::cout << "Enter an word : " ;

        
        std::getline(std::cin, User_input) ; 

    std::cout <<"\n";

    const char* charArray = User_input.c_str(); 
    
   
    // calculating the values

    int sum = 0;
    for (char c : User_input) {
        // Only consider lowercase letters
        if ('a' <= c && c <= 'z') {
            sum += value[c - 'a'];
            std::cout << c << " : " << value[c - 'a'] << "\n";
        }

    }

    std::cout << "The output is : " << sum << "\n";
    std::cout << "a is equal to " << (int) 'a' << std::endl;


   
 return 0;

}
// A new version of this is on upgraded-random.cpp

