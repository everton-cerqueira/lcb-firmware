/*
 * Copyright (c) 2023, SENAI Cimatec
 */

#include <device_thread.hpp>

namespace lcb {
DeviceThread::DeviceThread(lcb::Processor *processor, std::chrono::duration<int> time)
   : processor_(processor), time_(time) {}

DeviceThread::~DeviceThread() {}

void DeviceThread::start() {
   thread_.start(callback(this, &DeviceThread::work));
}

void DeviceThread::work() {
   while(true) {
      ThisThread::sleep_for(time_);
      processor_->process();
   }
}

}
