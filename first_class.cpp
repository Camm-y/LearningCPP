#include <iostream>
#include <vector>

class User
{
    static int user_count;
    std::string status = "Gold";
    std::string first_name;
    std::string last_name;
    public:

        static int get_ucount()
        {
            return user_count;
        }
        
        std::string get_status()
        {
            return status;
        }
        void set_status(std::string status)
        {
            this->status = status;
        }

        std::string get_fname()
        {
            return first_name;
        }
        void set_fname(std::string fname)
        {
            this->first_name = fname;
        }
        std::string get_lname()
        {
            return last_name;
        }
        void set_lname(std::string lname)
        {
            this->last_name = lname;
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
        //std::cout << "Destruct\n";
    }
};

int User::user_count = 0; // static needs to be defined outside the class

// int add_ifndef(std::vector<User> &users, User user)
// {
//     for(int i=0; i<users.size(); i++)
//     {
//         if(users[i].first_name == user.first_name &&
//         users[i].last_name == user.last_name)
//         {
//             return i;
//         }
//     }
//     users.push_back(user);
//     return users.size() - 1;
// }

void user_testing1()
{
    User me;
    me.set_fname("Cam");
    me.set_lname("Hall");

    std::cout << "Status: " << me.get_status() << std::endl;

    std::vector<User> users;
    users.push_back(me);
    std::cout << users[0].get_fname() << std::endl;
}

int main()
{
    User user("Cam", "H", "Amazing");
    std::cout << user.get_status() << std::endl;   
}