#pragma once

#include <byte_transport/IByteTransport.h>
#include <unordered_map>
#include <memory>
#include <string>

namespace pendarlab::lib::comm
{
  class SerialByteTransport : public IByteTransport
  {
  public:
    SerialByteTransport();
    static std::shared_ptr<IByteTransport> create(const std::unordered_map<std::string, std::string>& config);
    int read(unsigned char* buf, unsigned int buf_size) override;
    int write(const unsigned char* buf, unsigned int length) override;
  };
} // namespace pendarlab::lib::comm