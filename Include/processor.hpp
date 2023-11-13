/*
 * Copyright (c) 2022, SENAI Cimatec
 */

#ifndef PROCESS_HPP
#define PROCESS_HPP

namespace lcb {
/**
 * @brief Interface for processor classes
 */
class Processor  {
 public:
  /**
   * @brief Default destructor.
   */
  virtual ~Processor() {}
  /**
   * @brief Method to implement data handling and exchange between devices.
   */
  virtual void process() = 0;
};

}  // end namespace lcb

#endif