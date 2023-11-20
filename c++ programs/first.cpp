#include <iostream>

int main() {
    int choice;
    int arr[100];
    int n; // Number of elements in the array

    // Input the number of elements in the array
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid array size. Exiting." << std::endl;
        return 1;
    }

    // Input the array elements
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int min_val = arr[0];
    int max_val = arr[0];

    while (true) {
        // Display the menu
        std::cout << "\nArray Operations Menu:" << std::endl;
        std::cout << "1. Find the minimum and maximum in the array" << std::endl;
        std::cout << "2. Search for an element in the array" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                if (n == 0) {
                    std::cout << "Array is empty." << std::endl;
                } else {
                    for (int i = 1; i < n; i++) {
                        if (arr[i] < min_val) {
                            min_val = arr[i];
                        }
                        if (arr[i] > max_val) {
                            max_val = arr[i];
                        }
                    }

                    std::cout << "Minimum value in the array: " << min_val << std::endl;
                    std::cout << "Maximum value in the array: " << max_val << std::endl;
                }
                break;
            }
            case 2: {
                int search_value;
                std::cout << "Enter the element to search: ";
                std::cin >> search_value;

                bool found = false;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == search_value) {
                        found = true;
                        std::cout << "Element found at index " << i << std::endl;
                        break;
                    }
                }

                if (!found) {
                    std::cout << "Element not found in the array." << std::endl;
                }
                break;
            }
            case 3:
                return 0; // Exit the program
            default:
                std::cout << "Invalid choice. Please select a valid option." << std::endl;
        }
    }

    return 0;
}
