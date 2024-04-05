#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr) {
    for(int num : arr) {
        std::cout << num << " ";
    }
    std::cout << "\n";
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> arr(N);
    for(int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }
    for(int i = 0; i < N-1; i++) {
        for(int j = 0; j < N-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                std::swap(arr[j], arr[j+1]);
            }
            printArray(arr);
        }
    }
    return 0;
}
