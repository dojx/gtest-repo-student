#include "ILogger.h"
#include <iostream>
class ConsoleLogger:public ILogger{
 void write(std::string message){
   std::cout<<message<<std::endl;
 }
};