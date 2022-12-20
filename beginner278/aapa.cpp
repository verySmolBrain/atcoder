#include <iostream>
#include <vector>
#include <numeric>

int main() {
    unsigned n; std::cin >> n;

    std::vector<unsigned long> seq(n); // creates a vector of size n
    unsigned base{}; // 0

    for (auto &&a : seq) std::cin >> a;
    seq.emplace(begin(seq));

    unsigned q; std::cin >> q;
    std::vector<unsigned> added(n);
    iota(begin(added), end(added), 1U);

    for (unsigned i = 0; i < q; i++) {
        unsigned query; std::cin >> query;

        if (query == 1) {
            std::cin >> base; // Change the base
            while (!empty(added)) { // Reset all the deltas
                seq[added.back()] = 0;
                added.pop_back();
            }
        } else if (query == 2) {
            unsigned add, to;
            std::cin >> to >> add;
            seq[to] += add; // Add the delta
            added.emplace_back(to); // Store the index of delta
        } else if (query == 3) {
            unsigned print; std::cin >> print;
            std::cout << base + seq[print] << std::endl; // Add base to delta
        }
    }

    return 0;
}

// for (auto &&a : A)cin >> a;
//     A.emplace(begin(A));

// std::vector<unsigned> seq();