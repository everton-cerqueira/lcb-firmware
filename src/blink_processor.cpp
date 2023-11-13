/*
 * Copyright (c) 2022, SENAI Cimatec
 */

#include "blink_processor.hpp"

namespace lcb {

BlinkProcessor::BlinkProcessor(DigitalOut *digitalout)
  : digitalout_(digitalout) {}

BlinkProcessor::~BlinkProcessor() {}

void BlinkProcessor::process() {
   *digitalout_ = !*digitalout_;
}

}