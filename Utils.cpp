#include "Utils.hpp"
#include <fstream>
#include <sstream>

namespace Utils {
    std::vector<std::string> split(const std::string& s, char delimiter) {
        std::vector<std::string> tokens;
        std::stringstream ss(s);
        std::string item;
        while (getline(ss, item, delimiter)) {
            tokens.push_back(item);
        }
        return tokens;
    }

    std::vector<std::string> readFileLines(const std::string& filename) {
        std::ifstream file(filename);
        std::vector<std::string> lines;
        std::string line;
        while (getline(file, line)) {
            lines.push_back(line);
        }
        return lines;
    }

    void writeFileLines(const std::string& filename, const std::vector<std::string>& lines) {
        std::ofstream file(filename);
        for (const std::string& line : lines) {
            file << line << "\n";
        }
    }

    void appendLineToFile(const std::string& filename, const std::string& line) {
        std::ofstream file(filename, std::ios::app);
        file << line << "\n";
    }
}
