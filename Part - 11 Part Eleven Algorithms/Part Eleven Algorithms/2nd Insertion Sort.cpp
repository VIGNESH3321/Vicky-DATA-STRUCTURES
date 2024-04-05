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
    printArray(arr);
    for(int i = 1; i < N; i++) {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        printArray(arr);
    }
    return 0;
}
