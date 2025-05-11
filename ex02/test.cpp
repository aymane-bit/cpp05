# include <iostream>
// # include <cstdlib>

int main()
{
    srand(time(0));

// Generate a random number between 0 and 100
    int randomNum = rand() % 101;

    if (randomNum % 2 == 0)
        std::cout << "Even\n";
    else
        std::cout << "Odd\n";
}