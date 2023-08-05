# RMS-DMS-EDF_FreeRTOS
RMS, DMS, and EDF scheduling algorithms implemented in FreeRTOS source.

## HOW TO USE

Place the provided FreeRTOSConfig.h, scheduler.cpp, and scheduler.h in the directory of the FreeRTOS 
Library.
Use the provided macros in scheduler.h for using RMS, DMS, and EDF scheduling policies.

### Testing

This code was written for use on Arduino MEGA, implement the task sets in the Arduino IDE, then compile and upload the sketches (Arduino IDE would compile the FreeRTOS files as well).

An example task set is provided for testing the scheduling policies (place the example.ino file in the Arduino IDE sketches folder).
