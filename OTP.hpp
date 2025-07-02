#ifndef OTP_HPP
#define OTP_HPP
#include <string>

class OTP {
public:
    static std::string generateOTP(const std::string& username);
    static bool verifyOTP(const std::string& username, const std::string& code);
};

#endif
