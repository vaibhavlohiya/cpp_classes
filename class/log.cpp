#include <iostream>

class Log
{
public: 
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    }; 

private:
     
    int m_LogLevel = LevelInfo; //member class variable (cannot be accessed outside of the class)

public:
    void SetLevel(int level)
    {
        m_LogLevel = level;
    }

    void Error(const char* message)
    {
        if (m_LogLevel >= LevelError)
            std::cout << "[Error]: " << message << std::endl;
    }

    void Warn(const char* message)
    {
        if (m_LogLevel >= LevelWarning)
            std::cout << "[WARNING]: " << message << std::endl;
    }

    void Info(const char* message)
    {
        if (m_LogLevel >= LevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LevelWarning);
    log.Warn("Hello");
    log.Error("Hello");
    log.Info("Hello");
    std::cin.get();
}