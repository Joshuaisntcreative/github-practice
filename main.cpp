#include <iostream>

int main(){
    std::cout << "Hello " << std::endl;
}

void branch2(){
    std::cout << "This function should now cause a merge conflict" << std::endl;
}

void anotherFunction(){
    std::cout << "This is another function that is specific to branch1" << std::endl;
}