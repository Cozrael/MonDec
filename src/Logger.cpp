#include "../include/Logger.h"
#include <iostream>

using namespace std;

void Logger::log(const string& message) {
    cout << "Log: [" << getfileName() << "]: " << message << endl;
}
