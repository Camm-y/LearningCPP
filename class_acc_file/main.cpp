#include <iostream>
#include <string>
#include "user.h"

int main()
{
    User user("Cam", "H", "Amazing");
    // std::cout << user.get_status() << std::endl;
    std::cin >> user;   
    std::cout << user;
}