#include <iostream>
#define MAX(x, y, r) {int x_ = x; int y_ = y; int r_ = (x_ > y_) ? x_ : y_; r = r_;}

int main() {
    char s[] = "Hello!";
    
    std::cout << s << std::endl;
    
    system("pause");
}