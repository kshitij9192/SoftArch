#include <iostream>
#include <windows.h>

bool volatile breakLoop = false;

BOOL WINAPI ConsoleHandler(DWORD signal)
{
    if(signal == CTRL_C_EVENT)
    {
        breakLoop = true;
        std::cout<<"Breaking away from loop! \n";
    }

    return TRUE;
}

int main()
{
    if (!SetConsoleCtrlHandler(&ConsoleHandler, true))
    {
        std::cout<<"Unable to install handler \n";
        return 1;
    }
    else
    {
        std::cout <<"Console handler has been installed successfully \n";
    }

    while(!breakLoop)
    {
        std::cout<<"Hello! \n";
        Sleep(100);
    }

    std::cout<<"program exiting smoothly \n";
    Sleep(2000);

    return 0;
}