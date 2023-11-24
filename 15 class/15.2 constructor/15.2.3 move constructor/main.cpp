#include <iostream>
#include <vector>

class Move {
public:
    int* data;

    // Constructor
    Move(int d) : data(new int(d)) {
        std::cout << "Constructor for: " << *data << std::endl;
    }

    // Move Constructor
    Move(Move&& other) noexcept : data(other.data) {
        std::cout << "Move constructor - moving resource: " << *data << std::endl;
        other.data = nullptr;
    }


    // Copy Constructor
    Move(const Move& other) : data(new int(*(other.data))) {
        std::cout << "Copy constructor - copying resource: " << *data << std::endl;
    }

    // Destructor
    // ~Move() {
    //     if (data != nullptr) {
    //         std::cout << "Destructor freeing data for: " << *data << std::endl;
    //     } else {
    //         std::cout << "Destructor freeing data for nullptr" << std::endl;
    //     }
    //     delete data;
    // }

    // Delete copy constructor and copy assignment to ensure only moves are used
    // Move& operator=(const Move&) = delete;
};

int main() {
    Move m = Move{100};
    Move c = m;
    std::vector<Move> vec;

    vec.push_back(Move(10));
    vec.push_back(Move(20));
    vec.push_back(Move(30));
    vec.push_back(Move(40));
    vec.push_back(Move(50));
    vec.push_back(Move(60));
    vec.push_back(Move(70));

    return 0;
}
