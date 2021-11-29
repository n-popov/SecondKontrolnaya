#include <cmath>
#include <iostream>
#include <iomanip>

struct Vector {
    double x, y;

    double abs() {
        return std::sqrt(x * x + y * y);
    }
};

Vector operator+(Vector lhs, Vector rhs) {
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

int main() {
    int N;
    std::cin >> N;
    Vector resulting{0, 0};
    for(auto i = 0; i < N; i++) {
        Vector current_vector{};
        double force;
        std::cin >> current_vector.x >> current_vector.y >> force;
        auto current_vector_absolute = current_vector.abs();
        current_vector.x = current_vector.x / current_vector_absolute * force;
        current_vector.y = current_vector.y / current_vector_absolute * force;
        resulting = resulting + current_vector;
    }
    std::cout << std::fixed << std::setprecision(4) <<  resulting.x << ' ' << resulting.y << std::endl;
}
