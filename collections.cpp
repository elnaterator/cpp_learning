#include <iostream>
#include <vector>

int main() {
    
    // array of chars (grades)
    char grades[5] = {'A', 'B', 'C', 'D', 'F'};

    // print the best and worst grades
    std::cout << "Best grade: " << grades[0] << std::endl;
    std::cout << "Worst grade: " << grades[4] << std::endl;

    // change f to e
    grades[4] = 'E';
    std::cout << "Worst grade: " << grades[4] << std::endl;

    // multidimensional array of integers
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // print the matrix
    std::cout << "matrix = " << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << "[ ";
        for (int j = 0; j < 3; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }

    // create an array of 10 integers and print values using for-each loop
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    std::cout << "numbers = ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // create a vector of integers
    std::vector<int> vec = {1, 2, 3, 4, 5};

    // add 6 to the end of the vector
    vec.push_back(6);

    // remove the 2nd element
    vec.erase(vec.begin() + 1);

    // insert 10 at the beginning
    vec.insert(vec.begin(), 10);

    // print the vector
    std::cout << "vector numbers = ";
    for (int number : vec) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // print first and last elements of vector, and size
    std::cout << "first element = " << vec.front() << std::endl;
    std::cout << "last element = " << vec.back() << std::endl;
    std::cout << "size = " << vec.size() << std::endl;


    return 0;
}
