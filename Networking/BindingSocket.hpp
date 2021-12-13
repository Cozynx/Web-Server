#ifndef BINDINGSOCKET_HPP
#define BINDINGSOCKET_HPP

#include <cstdio>

#include "SimpleSocket.hpp"

namespace HDE
{
    class BindingSocket: public SimpleSocket
    {
        public:
            // Constructor
            BindingSocket(int domain, int service, int protocol, int port, u_long Interface);
            // virtual function from the parent
            int connect_to_network(int sock, struct sockaddr_in address);
    };
}

#endif // !BINDINGSOCKET_HPP