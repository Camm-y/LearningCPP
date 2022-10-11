#include "user.h" 

    int User::get_ucount()
    {
         return user_count;
    }
        
    std::string User::get_status()
    {
        return status;
    }
    void User::set_status(std::string status)
    {
        this->status = status;
    }

    std::string User::get_fname()
    {
        return first_name;
    }
    void User::set_fname(std::string fname)
    {
        this->first_name = fname;
    }
    std::string User::get_lname()
    {
        return last_name;
    }
    void User::set_lname(std::string lname)
    {
        this->last_name = lname;
    }

    User::User()
    {
        //std::cout << "Default constructor";
    }
    User::User(std::string fname, std::string lname, std::string status)
    {
        this->first_name = fname;
        this->last_name = lname;
        this->status = status;
    }
    User::~User()
    {
        //std::cout << "Destruct\n";
    }
    void User::output()
    {
        std::cout << "I am a User\n";
    }
    std::ostream& operator << (std::ostream& output, const User user);
    std::istream& operator >> (std::istream& input, User &user);
    

int User::user_count = 0; // static needs to be defined outside the class

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

