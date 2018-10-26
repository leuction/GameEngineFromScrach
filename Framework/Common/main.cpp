#include <stdio.h>
#include "IApplication.hpp"

using namespace My;

namespace My {
    extern IApplication* p_app;
}

int main(int argc, char** argv) {
    int ret;

    if ((ret = p_app->Initialize()) != 0) {
        printf("App Initialize failed, will exit now");
    }

    while (!p_app->IsQuit()) {
        p_app->Tick();
    }

    p_app->Finalize();
    return 0;
}