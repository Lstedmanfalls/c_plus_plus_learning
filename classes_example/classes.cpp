#include <iostream>
#include "Monkey.h"
#include <string>

int main()
{

    Monkey monkey;
    bool validSelection;
    do
    {
        std::string choice = monkey.selection();
        if (choice == "Dance" || "dance")
        {
            validSelection = true;
            monkey.dance();
        }

        else if (choice == "Eat" || "eat")
        {
            validSelection = true;
            monkey.eat();
        }

        else
        {
            std::cout << "Please pick an available option\n"
                      << std::endl;
        }

    } while (!validSelection);

    return 0;
}