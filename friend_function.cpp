#include <iostream>

class MyClass {
private:
    int privateVar;
    int privatevar2;

public:
    MyClass() : privateVar(0) {}

    // Declaring a friend function
    friend void friendFunction(MyClass);

    // Declaring a friend class
    friend class FriendClass;
};

// Defining the friend function
void friendFunction(MyClass obj) {
    // Accessing private member of MyClass
    obj.privateVar = 10;
    obj.privatevar2=100;
    std::cout << "Friend function accessing privateVar: " << obj.privateVar <<" "<<obj.privatevar2<< std::endl;
}

// Defining the friend class
class FriendClass {
public:
    void modifyPrivateVar(MyClass obj) {
        // Accessing private member of MyClass
        obj.privateVar = 20;
        std::cout << "Friend class accessing privateVar: " << obj.privateVar << std::endl;
    }
};

int main() {
    MyClass obj;
    friendFunction(obj); // Call to friend function
    FriendClass fc;
    fc.modifyPrivateVar(obj); // Call to friend class method
    return 0;
}

