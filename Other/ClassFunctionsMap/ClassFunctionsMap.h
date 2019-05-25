#include <map>

class Baz
{
public:
    using classFunc = void(Baz::*)(void);

private:
    void foo();
    void bar();
    
    static const std::map<int, classFunc> m_functions;
};