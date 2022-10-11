#include "user.h"
#include "teacher.h"

int main()
{
    // User user("Cam", "H", "Amazing");
    // // std::cout << user.get_status() << std::endl;
    // std::cin >> user;   
    // std::cout << user;

    Teacher teacher;
    teacher.first_name = "Teach";
    std::cout << teacher.first_name << std::endl;
    teacher.output();
}