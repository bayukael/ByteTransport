#include "serial_byte_transport/SerialByteTransport.h"
#include "serial_byte_transport/SerialByteTransportConfig.h"
#include <byte_transport/ByteTransportFactory.h>

namespace pendarlab::lib::comm
{
  int SerialByteTransport::read(unsigned char* buf, unsigned int buf_size)
  {
  }

  int SerialByteTransport::write(const unsigned char* buf, unsigned int length)
  {
  }
} // namespace pendarlab::lib::comm

REGISTER_BYTE_TRANSPORT("SerialByteTransport", &pendarlab::lib::comm::SerialByteTransport::create, &pendarlab::lib::comm::SerialByteTransportConfig::validateConfig)