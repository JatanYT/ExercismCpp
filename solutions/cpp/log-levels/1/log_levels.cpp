#include <string>

namespace log_line {
std::string message(std::string line) {
    int index = line.find(" ");
    std::string msg = line.substr(index + 1);
    return msg;
}
std::string log_level(std::string line) {
    int index2 = line.find("]");
    std::string loglvl = line.substr(1, index2-1);
    return loglvl;
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string msg = message(line);
    std::string loglvl = " (" + log_level(line) + ")";
    return msg+loglvl;
}
}  // namespace log_line
