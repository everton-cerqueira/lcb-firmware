/*
 * Copyright (c) 2023, SENAI Cimatec
 */

#include "mbed.h"
#include "device_thread.hpp"
#include "blink_processor.hpp"

DigitalOut led1(LED1);

int main()
{
    lcb::BlinkProcessor led_processor(&led1);
    lcb::DeviceThread led_thread(&led_processor, 1s);
    led_thread.start();

    while (true) {
        ThisThread::sleep_for(5s);
    }
}