#include <context.h>
#include <iostream>

int main()
{
    try {
        svgp::Context c("file.svg");
    } catch (char const* data) {
        system("pwd");
        std::cout << data << '\n';
    }
    return 0;
}
