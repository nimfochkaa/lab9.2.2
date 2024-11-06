#include <stdio.h>
#include <conio.h>

#define LOG_MESSAGE(msg) log_message(__FILE__, __LINE__, msg)


void log_message(const char* file, int line, const char* msg) {
    printf("File: %s, Line: %d: %s\n", file, line, msg);
}

void performOperations() {
    LOG_MESSAGE("Starting operations...");

    LOG_MESSAGE("Operation 1 completed successfully.");

    int condition = 0;
    if (condition == 0) {
        LOG_MESSAGE("Warning: Condition is zero, potential issue detected.");
    }

    LOG_MESSAGE("Operation 2 completed successfully.");
    
    int criticalError = 1;
    if (criticalError) {
        LOG_MESSAGE("Critical error occurred! Stopping operations.");
        return;
    }

    LOG_MESSAGE("All operations completed.");
}

int main() {
    LOG_MESSAGE("Program started.");
    
    performOperations();

    LOG_MESSAGE("Program finished.");

    while (!_kbhit());

    return 0;
}
