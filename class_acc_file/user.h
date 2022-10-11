#ifndef USER_H
#define USER_H

#include <iostream>
#include <vector>
#include <string>

class User
{
    static int user_count;
    std::string status = "Bronze"; 

    public:
        std::string first_name;
        std::string last_name;
        
        static int get_ucount(); 
        std::string get_status();
        void set_status(std::string status);
        std::string get_fname();
        void set_fname(std::string fname);
        std::string get_lname();
        void set_lname(std::string lname);
        User();
        User(std::string fname, std::string lname, std::string status);
        ~User();

    friend std::ostream& operator << (std::ostream& output, const User user);
    friend std::istream& operator >> (std::istream& input, User &user);
};

#endif