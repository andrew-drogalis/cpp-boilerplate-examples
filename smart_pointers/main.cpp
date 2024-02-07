
#include <memory>
#include <iostream>

int main() {

    int x = 1;

    int e = 0;

    int w[4] = {0,1,2,3};

    std::shared_ptr<int> t = std::make_shared<int>(x);

    std::unique_ptr<int> r = std::make_unique<int>(x);


    std::cout << x << " " << *t << "\n";

    int y = x / e;


    return 0;
}