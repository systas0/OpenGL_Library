#include "example-robot.hpp"

int main(int argc, char** argv)
{
    Window window(1920, 1080, "example-robot", true);
    window.glInit();

    while(window.isExist())
    {
        //描画
        window.run();
    }

    return 0;
}
