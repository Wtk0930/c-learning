#include <iostream>
#include <vector>

class MyClass {
private:
    std::vector<int> data;

public:
    MyClass() {
        // Populate the vector with some data
        data.push_back(1);
        data.push_back(2);
        data.push_back(3);
    }

    // A const member function that does not modify any member variables.
    void printData() const {
        for (int val : data) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }

    // A const member function that returns a const reference to a member variable.
    const std::vector<int>& getData() const {
        return data;
    }

    // A member function that tries to modify a member variable.
    // This would not compile if the function were marked as const.
    void addValue(int value) {
        data.push_back(value);
    }

    // A member function that returns a non-const reference to a member variable.
    // This allows modification of the member variable, and thus cannot be const.
    std::vector<int>& getModifiableData() {
        return data;
    }

    // A const member function that calls another const member function is allowed.
    void printSize() const {
        std::cout << "Size of data is " << getSize() << std::endl;
    }

    // A const member function that returns a computed value without changing the object.
    int getSize() const {
        return data.size();
    }

    // A member function that calls a const function is allowed.
    void addIfNotEmpty(int value) {
        if (getSize() > 0) {
            addValue(value);
        }
    }
};

int main() {
    MyClass obj;
    obj.printData(); // Works fine on non-const object.

    const MyClass constObj;
    constObj.printData(); // Also works fine on const object.

    // This would cause a compile error because addValue() is not a const method.
    // constObj.addValue(4);

    // This would cause a compile error because getModifiableData() returns a non-const reference.
    // std::vector<int>& vec = constObj.getModifiableData();

    // Working with a const reference to the internal data.
    const std::vector<int>& constRef = constObj.getData();
    // constRef.push_back(4); // Error! constRef is a const reference.

    // Working with a non-const reference to the internal data.
    // std::vector<int>& modifiableRef
}
