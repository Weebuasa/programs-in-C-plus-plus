#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{

    int guess;
    int attempt = 0;
        // seeds a random number generator with current time
    std::srand (static_cast<unsigned int>(std::time(0)));

    // define the range of random number
    int lower_bound = 1;
    int upper_bound = 100;

    // generates a random number between specifies range 
    int random_number = std::rand()%(upper_bound - lower_bound +1) + lower_bound
    ;
    
     std::cout << "Welcome to the number guessing game" << std::endl;
do 
{
   
    std::cout << "__________________________________________________________" << std::endl;
    std::cout << "Number = " ;
    std::cin >> guess;


    if (random_number == guess)
    {
        std::cout << "You guessed the correct number" << std::endl;
        attempt = attempt +1;


    }
    else if (random_number < guess)
    {
        std::cout << "Too High !!!" << std::endl;
            attempt = attempt +1;
    }

    else 
    {
        std::cout << "too low" << std::endl;
            attempt = attempt +1;
    }
}
while (guess != random_number);

std::cout << "Total attempt = " << attempt  << std::endl;
return 0;

   
}