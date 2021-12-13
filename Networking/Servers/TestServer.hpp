#ifndef TESTSERVER_HPP
#define TESTSERVER_HPP

#include "SimpleServer.hpp"
#ifdef _WIN32
    #include <ws2tcpip.h>
#endif
#include <unistd.h>

namespace HDE
{
    class TestServer: public SimpleServer
    {
        private:
            char buffer[30000] = {0};
            int new_socket;
            void acceptor();
            void handler();
            void responder();
        public:
            TestServer();
            void launch();
    };
}

#endif // !TESTSERVER_HPP