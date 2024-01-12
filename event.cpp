#pragma once
#ifndef EVENT_LIB_CPP
#define EVENT_LIB_CPP
#include "event.h"
Event::Event() : timeStamp{ -1 }, name{ "" }, description{ "" }, type{ "" }
{
    // this->timeStamp = -1;
    //..
}
Event::Event(double timeStamp, std::string name, std::string description, std::string type) : timeStamp{ timeStamp }, name{ name }, description{ description }, type{ type }
{
}
Event::Event(Event* event) : timeStamp{ event->timeStamp }, name{ event->name }, description{ event->description }, type{ event->type }
{
    // this->timeStamp = event->timeStamp;ƒ
}
Event::~Event()
{
}
bool Event::setTimeStamp(double timeStamp)
{
    this->timeStamp = timeStamp;
    return true;
}
bool Event::setName(std::string name)
{
    this->name = name;
    return true;
}
bool Event::setDescription(std::string description)
{
    this->description = description;
    return true;
}
bool Event::setType(std::string type)
{
    this->type = type;
    return true;
}
// get
double Event::getTimeStamp()
{
    return this->timeStamp;
}
std::string Event::getName()
{
    return this->name;
}
std::string Event::getDescription()
{
    return this->description;
}
std::string Event::getType()
{
    return this->type;
}
#endif