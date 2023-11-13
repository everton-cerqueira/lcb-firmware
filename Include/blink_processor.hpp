/*
 * Copyright (c) 2022, SENAI Cimatec
 */

#include <mbed.h>
#include "processor.hpp"

namespace lcb {

class BlinkProcessor: public Processor {
 private:
  DigitalOut *digitalout_;

 public:
  BlinkProcessor(DigitalOut *digitalout_);
  ~BlinkProcessor(); 
  void process();
};

}
