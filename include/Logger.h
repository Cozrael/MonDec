#ifndef LOGGER_H
#define LOGGER_H

#include<string>

using namespace std;

class Logger {
private:
    string fileName;
public:
    const string& getfileName() const { return fileName; }

    Logger(const string& fileName) :
    fileName(fileName) {}

    ~Logger() {}

    void log(const string& message);

    void warn(const string& message);

    void error(const string& message);


};

#endif
