#include <iostream>

class Log
{
public: 
    const int LogLevelWarning = 1;
    const int LogLevel;
private:
    int m_LogLevel; //member class variable (cannot be accessed outside of the class)

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }
};

int main()
{
    Log log;
    log.SetLevel(LoglevelWarning);
    log.Warn("Hello");
    std::cin.get();
}