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
#include <cmath>
#include <iomanip>

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
