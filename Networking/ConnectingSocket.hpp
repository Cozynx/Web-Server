#ifndef CONNECTINGSOCKET_HPP
#define CONNECTINGSOCKET_HPP

#include <cstdio>

#include "SimpleSocket.hpp"

namespace HDE
{
    class ConnectingSocket: public SimpleSocket
    {
        public:
            // Constructor
            ConnectingSocket(int domain, int service, int protocol, int port, u_long Interface);
            // virtual function from the parent
            int connect_to_network(int sock, struct sockaddr_in address);
    };
}


#endif // !CONNECTINGSOCKET_HPP