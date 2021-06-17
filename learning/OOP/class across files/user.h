#ifndef USER_H
#define USER_H
class User{

    std::string status = "Gold";
    static int user_count;

    public:

        static int get_user_count();

        User();

        ~User();

        std::string f_name;
        std::string l_name;

        //getter
        std::string get_status();

        //setter
        void set_status(std::string s);

        friend void output_status(User user);
        friend std::ostream& operator << (std::ostream &output, User user);
        friend std::istream& operator >> (std::istream &input,User &user);
};
#endif