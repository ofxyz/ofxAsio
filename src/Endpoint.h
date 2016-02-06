#pragma once

#include "asio.hpp"
#include <string>

namespace ofxAsio {
  class Endpoint {
  public:
    Endpoint() {
      
    }
    
    Endpoint(asio::ip::udp::endpoint endpoint) {
      mEndpoint = endpoint;
    }
    
    Endpoint(std::string ipAddress, int port) {
      mEndpoint = asio::ip::udp::endpoint(asio::ip::address:from_string(ipAddress), port); 
    }

    asio::ip::udp::endpoint getEndpoint() {
      return mEndpoint;
    }

    std::string getIpAddress() {
      return mEndpoint.address().to_string();
    }

    int getPort() {
      return mEndpoint.port();
    }

    void setEndpoint(asio::ip::udp::endpoint endpoint) {
      mEndpoint = endpoint;
    }

    setEndpoint(std::string ipAddress, int port) {
      mEndpoint = asio::ip::udp::endpoint(asio::ip::address:from_string(ipAddress), port); 
    }

    
  protected:
    asio::ip::udp::endpoint mEndpoint;
  };
}