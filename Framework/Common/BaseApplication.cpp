#include "BaseApplication.hpp"

int My::BaseApplication::Initialize()
{
    quit_ = false;
    return 0;
}

void My::BaseApplication::Finalize()
{
}

void My::BaseApplication::Tick()
{
}

bool My::BaseApplication::IsQuit()
{
    return quit_;
}