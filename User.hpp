#ifndef USER_HPP
#define USER_HPP
#include <string>

class User {
private:
    std::string username;
    std::string passwordHash;
    std::string role;
    bool isAutoPassword;

public:
    User();
    User(std::string username, std::string passwordHash, std::string role, bool isAutoPassword);

    std::string getUsername() const;
    std::string getRole() const;

    bool verifyPassword(const std::string& input);
    void setPassword(const std::string& newPassword);

    std::string serialize() const;
    static User deserialize(const std::string& line);
    void saveToFile();
};

#endif
