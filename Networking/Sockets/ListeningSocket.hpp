#ifndef LISTENINGSOCKET_HPP
#define LISTENINGSOCKET_HPP

#include <cstdio>

#include "BindingSocket.hpp"

namespace HDE
{
    class ListeningSocket : BindingSocket
    {
        private:
            int backlog;
            int listening;

        public:
            ListeningSocket(int domain, int service, int protocol, int port, u_long Interface, int bklg);
            void start_listening();
    };
}

#endif // !LISTENINGSOCKET_HPP