all:
	g++ Networking/Servers/*.cpp Networking/Sockets/BindingSocket.cpp Networking/Sockets/SimpleSocket.cpp Networking/Sockets/ListeningSocket.cpp -o test -lwsock32