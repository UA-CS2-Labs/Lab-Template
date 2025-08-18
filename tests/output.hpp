/**
 * @file output.hpp
 * 
 * @brief Test output styling
 */

#ifndef OUTPUT_HPP
#define OUTPUT_HPP

#include <iostream>
#include <string>

namespace output {
    void success(int testNumber) {
        std::cout << "─────────────────────────────────────────────────" << "\n\n"
                  << "\t\tTest " << testNumber << " Success!" << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n";
    }

    void failure(int testNumber, std::string message) {
        std::cout << "─────────────────────────────────────────────────" << "\n\n"
                  << "\t\tTest " << testNumber << " Failed:" << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n"
                  << message << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n";
    }
}

#endif // OUTPUT_HPP
