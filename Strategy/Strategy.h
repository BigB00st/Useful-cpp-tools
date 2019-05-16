#include <map>

class Strategy
{

public:
    using handler_func = void(Strategy::*)(void);

private:
    void foo();
    void bar();
    
    static const std::map<int, handler_func> m_functions;
};