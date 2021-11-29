#include <iostream>
#include <string>

int main() {
   std::string number;
   int sum = 0;
   std::cin >> number;
   for(auto i = 0u; i < number.size(); i++) {
       int digit_as_int = number[i] - '0';
       sum += (i % 2 == 0) ? digit_as_int : -digit_as_int;
   }
   std::cout << ((sum % 11 == 0) ? "YES" : "NO");
}
