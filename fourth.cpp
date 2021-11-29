#include <iostream>
#include <string>
#include <map>

int main() {
    std::map<int, std::string> numbers_to_days {
            {1, "Mon"},
            {2, "Tue"},
            {3, "Wed"},
            {4, "Thu"},
            {5, "Fri"},
            {6, "Sat"},
            {7, "Sun"}
    };
    std::map<std::string, int> days_to_amounts;
    int n;
    std::cin >> n;
    std::string current_day;
    for(auto i = 0; i < n; i++) {
        std::cin >> current_day;
        days_to_amounts[current_day]++;
    }
    for(auto& number_to_day : numbers_to_days){
        auto& day = number_to_day.second;
        for(auto i = 0; i < days_to_amounts[day]; i++) {
            std::cout << day << ' ';
        }
    }
}
