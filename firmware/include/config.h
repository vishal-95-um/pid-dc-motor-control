#ifndef CONFIG_H
#define CONFIG_H

extern const int RPWM;
extern const int LPWM;

extern const int encoderPin;

extern const int pwmFreq;
extern const int pwmResolution;

extern const int pwmChannelForward;
extern const int pwmChannelReverse;

extern volatile long encoderCount;

extern const int PPR; // Pulse per revolution

extern float targetRPM;

extern float Kp;
extern float Ki;
extern float Kd;

extern float integral;
extern float previousError;

extern unsigned long previousMillis;
extern const unsigned long sampleTime;

#endif