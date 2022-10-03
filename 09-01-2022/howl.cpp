#include<iostream>

int main() {
    std::string howl;

    std::cin >> howl;
    
    howl.insert(0, "A");
    std::cout << howl << '\n';



    return 0;
}