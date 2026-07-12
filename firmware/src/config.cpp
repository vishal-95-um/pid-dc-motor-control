#include "config.h"

const int RPWM = 25;
const int LPWM = 26;

const int encoderPin = 34;

const int pwmFreq = 1000;
const int pwmResolution = 8;

const int pwmChannelForward = 0;
const int pwmChannelReverse = 1;

volatile long encoderCount = 0;

const int PPR = 500;

float targetRPM = 100.0;

float Kp = 2.0;
float Ki = 0.5;
float Kd = 0.1;

float integral = 0;
float previousError = 0;

unsigned long previousMillis = 0;
const unsigned long sampleTime = 100;