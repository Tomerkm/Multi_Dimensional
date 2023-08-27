#include <sstream>
#include "../headers/exceptions.h"

CommonException::CommonException(const std::string& _arg, const char* _file, unsigned int _line)
{
   std::ostringstream o;
   o << "File Name: " << _file << ", Line Number:" << _line << ", Messages:" << _arg;
   m_msg = o.str();
}

CommonException::~CommonException() noexcept
{

}


const char* CommonException::what() const noexcept
{
    return m_msg.c_str();
}

