//
// Created by Primary on 5/14/2018.
//

#include "Director.h"

Director::Director() {
    isRunning = true;
}
int Director::stopRunning() {
    isRunning = false;
    return 0;
}

bool Director::running() {
    return isRunning;
}
