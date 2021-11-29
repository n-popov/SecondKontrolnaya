#include <fstream>
#include <iostream>

int main() {
    std::string filename, cat_name, description;
    int K, mice_amount;
    std::cin >> filename >> K;
    std::ifstream fin(filename);
    // std::cin >> строка читает символы до первого пробела
    // std::getline(std::cin, строка) читает символы до переноса строки
    for(;fin >> cat_name && fin >> mice_amount && std::getline(fin, description);) {
        if (mice_amount == K) {
            std::cout << cat_name << std::endl;
        }
    }
}
