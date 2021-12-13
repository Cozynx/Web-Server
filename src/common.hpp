#if defined(__linux__) || defined(__linux) || defined(linux) || defined(__gnu_linux__)
    #define LINUX
#elif defined(__APPLE__) && defined(__MACH__)
    #define MACOS
#elif defined(_WIN32) || defined(_WIN64)
    #define WINDOWS
#endif
