#include <iostream>

void passByValue(int);
void passByRef(int &);

int main() {
    int num1 = 3;
    int *pNum = nullptr;
    pNum = &num1;
    *pNum = 5;

    passByValue(num1);
    passByRef(num1);

    std::cout << num1 << std::endl;


    return 0;
}

void passByValue(int val) {
    std::cout << "Currently in passByValue function" << std::endl;
    val++;
    std::cout << "New value " << val << std::cout;
}

void passByRef(int &val) {
    std::cout << "Currently in passByRef function" << std::endl;
    val =50;
    std::cout << "New value " << val << std::endl;
}