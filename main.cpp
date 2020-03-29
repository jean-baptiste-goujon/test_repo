#include <iostream>
#include <functional>

int main(){
    auto lambda = [out = std::ref(std::cout << "Hello ")](){out.get() << "world\n";};
    lambda();
}
