//adapted from https://gist.github.com/pazdera/1098119

#include <iostream>

class Singleton
{
    private:
        Singleton();

    public:
        static Singleton* getInstance();
};


Singleton* Singleton::getInstance()
{
    //multi-threaded safe initialization
    static Singleton instance;
    return &instance;
}
