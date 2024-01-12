#pragma once
#ifndef EVENT_LIB_H
#define EVENT_LIB_H
#include <iostream>
class Event
{
private:
    /* data */
    long double timeStamp{ -1 };
    std::string name{ "" };
    std::string description{ "" };
    std::string type{ "" };

public:
    Event(/* args */);
    Event(double timeStamp, std::string name = "", std::string description = "", std::string type = "");
    Event(Event* event);
    // Event(const Event &event);
    ~Event();
    friend class Nodo;
    // set
    bool setTimeStamp(double timeStamp);
    bool setName(std::string name);
    bool setDescription(std::string description);
    bool setType(std::string type);
    // get
    double getTimeStamp();
    std::string getName();
    std::string getDescription();
    std::string getType();
};
#endif
