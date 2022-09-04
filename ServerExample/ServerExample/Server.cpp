#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main()
{
	try
	{
		boost::asio::io_service io_service;

		tcp::endpoint endpoint(tcp::v4(), 13);
		tcp::acceptor acceptor(io_service, endpoint);

		std::cout << "Server Started" << std::endl;

		for (;;)
		{
			const std::string message_to_send = "Hello From Server"; //나에게 들어온 서버에게 hello from server 말함

			boost::asio::ip::tcp::iostream stream;

			std::cout << "check 1" << std::endl;

			boost::system::error_code ec;
			acceptor.accept(*stream.rdbuf(), ec);//client가 접속해오면 readbuffer를 읽겠다

			std::cout << "check 2" << std::endl;

			if (!ec) //todo::How to take care of multiple clients?
			{
				//receive message from client
				std::string line;
				std::getline(stream, line);
				std::cout << line << std::endl;

				//senf message to client
				stream << message_to_send;
				stream << std::endl;    // send std::endl; to end getline of client
			}
		}
	}
	catch (std::exception& e) //exception으로 오류 받기
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}