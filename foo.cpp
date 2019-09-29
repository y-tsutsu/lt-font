#include <iostream>
#include <memory>

struct MyStruct
{
    int foo;
    int bar;
};

int main(int argc, char const *argv[])
{
    std::cout << "0O Il1| ij" << std::endl;
    std::cout << "愛する人へ送る、最後の手紙。" << std::endl;

    auto my = std::make_shared<MyStruct>(MyStruct{42, 23});
    if (my != nullptr)
    {
        std::cout << my->foo << ", " << my->bar << std::endl;
    }
    return 0;
}
