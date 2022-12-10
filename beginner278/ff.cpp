#include <iostream>
#include <set>
#include <utility>

int main() {
    unsigned int users, operations;
    std::cin >> users >> operations;

    std::set<std::pair<unsigned int, unsigned int>> follows;

    for (unsigned int i = 0; i < operations; i++) {
        int operation, user_a, user_b;
        std::cin >> operation >> user_a >> user_b;

        switch (operation) {
            case 1:
                follows.emplace(user_a, user_b);
                break;
            case 2:
                follows.erase({user_a, user_b});
                break;
            case 3:
                std::cout << ((follows.count({user_a, user_b}) && follows.count({user_b, user_a})) ? "Yes" : "No") << std::endl;
                break;
        }
    }

    return 0;
}