#ifndef UTILS_HPP
#define UTILS_HPP
#include <string>
#include <vector>

namespace Utils {
    std::vector<std::string> split(const std::string& s, char delimiter);
    std::vector<std::string> readFileLines(const std::string& filename);
    void writeFileLines(const std::string& filename, const std::vector<std::string>& lines);
    void appendLineToFile(const std::string& filename, const std::string& line);
}

#endif
