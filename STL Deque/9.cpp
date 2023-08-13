#include <iostream>
#include <queue>
#include <vector>
#include <unordered_set>

std::vector<int> generatePermutation(int N, int K) {
    if (N <= 0 || K < 0 || K >= N) {
        std::cerr << "Invalid input parameters." << std::endl;
        return {};
    }

    std::vector<int> permutation;
    std::unordered_set<int> usedDifferences;

    std::queue<int> q;

    // Initialize the queue with the first K+1 numbers
    for (int i = 1; i <= K + 1; ++i) {
        q.push(i);
    }

    // Construct the permutation
    for (int i = K + 2; i <= N; ++i) {
        int frontElement = q.front();
        q.pop();

        permutation.push_back(frontElement);
        usedDifferences.insert(frontElement);

        int nextElement = frontElement + K + 1;
        while (usedDifferences.find(nextElement) != usedDifferences.end()) {
            ++nextElement;
        }

        q.push(nextElement);
    }

    while (!q.empty()) {
        permutation.push_back(q.front());
        q.pop();
    }

    return permutation;
}

int main() {
    int N, K;
    std::cout << "Enter the value of N: ";
    std::cin >> N;
    std::cout << "Enter the value of K: ";
    std::cin >> K;

    std::vector<int> permutation = generatePermutation(N, K);

    if (!permutation.empty()) {
        std::cout << "Permutation with unique adjacent differences of count " << K << ":" << std::endl;
        for (int num : permutation) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
