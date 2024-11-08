#include <sstream>
#include <iomanip>

namespace converted {
    std::string doubleToString(double number, int precision) {
        std::stringstream stream;
        stream << std::fixed << std::setprecision(precision) << number;
        return stream.str();
    }
}