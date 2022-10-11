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
    
    //friend void output_status(User user);
    friend std::ostream& operator << (std::ostream& output, const User user);
    friend std::istream& operator >> (std::istream& input, User &user);
};

// void output_status(User user)
// {
//     std::cout << user.status;
// }

int User::user_count = 0; // static needs to be defined outside the class

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


std::ostream& operator << (std::ostream& output, const User user)
{
    output << "First: " << user.first_name << ", Last: " << user.last_name
    << "\nStatus: " << user.status << std::endl;
    return output;
}

std::istream& operator >> (std::istream& input, User &user)
{
    input >> user.first_name >> user.last_name
    >> user.status;
    return input;
}

int main()
{
    User user("Cam", "H", "Amazing");
    // std::cout << user.get_status() << std::endl;
    std::cin >> user;   
    std::cout << user;
}