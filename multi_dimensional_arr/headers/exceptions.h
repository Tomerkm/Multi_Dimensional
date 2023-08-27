#ifndef ALL_EXCEPTIONS_
#define ALL_EXCEPTIONS_

#include <string>

#define THROW(OBJ_EXCEPTION, MSG) throw OBJ_EXCEPTION(MSG, __FILE__, __LINE__);

class CommonException
{
public:
    CommonException(const std::string& _arg, const char* _file, unsigned int _line);
    ~CommonException() noexcept;
    inline const char* what() const noexcept;

private:
	std::string m_msg;

};


class OutOfRangeException : public CommonException
{

public:
    OutOfRangeException(const std::string& _arg, const char* _file, unsigned int _line)
        : CommonException(_arg, _file, _line)
    {}

};

class InvalidSizeException : public CommonException
{

public:
    InvalidSizeException(const std::string& _arg, const char* _file, unsigned int _line)
        : CommonException(_arg, _file, _line)
    {}

};



#endif
