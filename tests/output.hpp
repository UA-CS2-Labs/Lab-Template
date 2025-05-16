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
    void success(int stepNumber) {
        std::cout << "─────────────────────────────────────────────────" << "\n\n"
                  << "\t\tStep " << stepNumber << " Success!" << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n";
    }

    void failure(int stepNumber, std::string message) {
        std::cout << "─────────────────────────────────────────────────" << "\n\n"
                  << "\t\tStep " << stepNumber << " Failed:" << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n"
                  << message << "\n\n"
                  << "─────────────────────────────────────────────────" << "\n\n";
    }
}

#endif // OUTPUT_HPP
