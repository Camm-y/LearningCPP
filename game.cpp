#include <iostream>
#include <string>

using std::cout, std::cin, std::endl, std::string;


int main()
{
    int choice;
    do
    {
        cout << "0. Quit" << endl << "1. Play" << endl;
        cin >> choice;

        switch(choice)
        {
        case 0:
            cout << "Bye" << endl;
            return 0;
        case 1:
            cout << "Lets gooo" << endl;
            break;
        }
    } while (choice != 0);
    
    
}