#ifndef SimpleSocket_hpp
#define SimpleSocket_hpp

#include <cstdio>
#include <iostream>

#include "../../common.hpp"

#if defined(WINDOWS)
    #include <winsock2.h>
    #include <ws2def.h>
#elif defined(LINUX) || defined(MACOS)
    #include <sys/socket.h>
    #include <netinet/in.h>
#endif

namespace HDE
{
    class SimpleSocket
    {
        private:
            struct sockaddr_in address;
            int sock;
            int connection;

        public:
            // Constructor
            SimpleSocket(int domain, int service, int protocol, int port, u_long Interface);
            // Virtual function to connect to network
            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            // Function to tet sockets and connections
            void test_connection(int);
            // getter functions
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();
            // setter function
            void set_connection(int);
    };
}

#endif // !SimpleSocket_hpp