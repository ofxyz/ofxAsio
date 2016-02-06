#include "asio.hpp"
#include "UdpSocket.h"

/*
To be used as such:

sender = UdpSender(8080); //local port
std::shared_ptr<Datagram> datagram(new Datagram("Hello world", "192.168.0.27", 8080));
sender.send(datagram)

 */

namespace ofxAsio {
  class UdpSender : public UdpSocket {
  public:
    UdpSender(int port);
    UdpSender(std::string localAddress, int port);
    ~UdpSender();
  protected:
    virtual void on_send(asio::error_code errorCode, std::size_t bytes_transferred) {
      
    };
  }
  
}
