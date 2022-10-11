#include <iostream>
#include <vector>

class User
{
    std::string status = "Gold";

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status()
        {
            return status;
        }

    User()
    {
        std::cout << "Default constructor";
    }
    User(std::string fname, std::string lname, std::string status)
    {
        this->first_name = fname;
        this->last_name = lname;
        this->status = status;
    }
    ~User()
    {
        std::cout << "Destruct\n";
    }
};

int add_ifndef(std::vector<User> &users, User user)
{
    for(int i=0; i<users.size(); i++)
    {
        if(users[i].first_name == user.first_name &&
        users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1;
}

void user_testing1()
{
    User me;
    me.first_name = "Cam";
    me.last_name = "Hall";

    std::cout << "Status: " << me.get_status() << std::endl;

    std::vector<User> users;
    users.push_back(me);
    std::cout << users[0].first_name << std::endl;
}

int main()
{
    User user("Cam", "H", "Amazing");
    std::cout << user.get_status() << std::endl;   
}