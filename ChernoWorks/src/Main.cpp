#include <cstdio>

class Log
{
public:
	enum Level
	{
		LevelError = 0, LevelWarning, LevelInfo
	};
private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Error(const char* message)
	{
		if (m_LogLevel >= LevelError)
		{
			printf("[ERROR]: %s\n", message);
		}
	}

	void Warn(const char* message)
	{
		if (m_LogLevel >= LevelWarning)
			printf("[WARNING]: %s\n", message);
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			printf("[INFO]: %s\n", message);
	}
};

int main()
{
	Log log;
	log.SetLevel(Log::LevelInfo);
	log.Error("Error Message");
	log.Warn("Warning Message");
	log.Info("Info Message");
	getchar();
}
