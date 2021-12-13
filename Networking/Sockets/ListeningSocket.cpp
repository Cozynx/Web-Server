#include "ListeningSocket.hpp"

HDE::ListeningSocket::ListeningSocket(int domain, int service, int protocol, int port, u_long Interface, int bklg)
    : BindingSocket(domain, service, protocol, port, Interface)
{
    backlog = bklg;
    start_listening();
    test_connection(listening);
}

void HDE::ListeningSocket::start_listening()
{
    listening = listen(get_connection(), backlog);
}