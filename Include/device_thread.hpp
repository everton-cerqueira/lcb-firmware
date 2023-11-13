/*
 * Copyright (c) 2023, SENAI Cimatec
 */

#include <mbed.h>
#include "processor.hpp"

namespace lcb {
 /**
 * @brief Contains a thread to be run in the firmware.
 */

class DeviceThread {
 private:
  lcb::Processor *processor_;
  Thread thread_;
  std::chrono::duration<int> time_;

 public:
  DeviceThread(lcb::Processor *processor, std::chrono::duration<int> time);
  ~DeviceThread(); 
  void start();
  void work();
 };

 } 