#include "user.h"
#include "teacher.h"

int main()
{

    Teacher teacher;
    User& u = teacher;
    u.output();
    
}