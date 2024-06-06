/**
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *                                                       *
 *       Created by: Reinier Garcia Ramos                *
 *       reymillenium@gmail.com                          *
 *                                                       *
 *       https://www.linkedin.com/in/reiniergarcia       *
 *       https://github.com/reymillenium                 *
 *       https://www.reiniergarcia.dev                   *
 *                                                       *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 **/

#include <iostream>
// #include <string>  // for string, to_string, etc
#include <cmath> // for sqrt, sin, pow
// #include <climits>
#include <iomanip> // for setprecision, setw, fixed
// #include<array>  // for array
// #include<random> // for random_device
// #include <cstdlib> // For rand and srand
// #include <ctime>   // For the time function
// #include <sstream> // for stringstream, humanize_integer, humanize_double
// #include <vector> // to use vectors
// #include <fstream> // For ifstream, ofstrea, fstream
// #include <numeric> // For accumulate, transform_reduce (in the vectors)
// #include <algorithm> // For max_element, min_element (to use in vectors), or for max()

constexpr int INITIAL_TIME_VALUE = 1;
constexpr int FINAL_TIME_VALUE = 10;

void render_table_header();

double falling_distance(int);

void render_table_row(int);

int main() {
    render_table_header();
    for (int time = INITIAL_TIME_VALUE; time <= FINAL_TIME_VALUE; time++)
        render_table_row(time);

    return 0;
}

void render_table_header() {
    std::cout << std::endl;
    std::cout << "  -------------------------------------------" << std::endl;
    std::cout << "  | Falling Time (s) | Falling Distance (m) |" << std::endl;
    std::cout << "  |------------------|----------------------|" << std::endl;
}

void render_table_row(const int falling_time) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "  |" << std::setw(14) << falling_time << " s  | " << std::setw(18) << falling_distance(falling_time) << " m |" << std::endl;
    std::cout << "  -------------------------------------------" << std::endl;
}

double falling_distance(const int falling_time) {
    constexpr double ACCELERATION_DUE_TO_GRAVITY = 9.8;
    return 0.5 * ACCELERATION_DUE_TO_GRAVITY * pow(falling_time, 2);
}
