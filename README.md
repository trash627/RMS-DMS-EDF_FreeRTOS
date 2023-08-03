# RMS-DMS-EDF_FreeRTOS
RMS, DMS, and EDF scheduling algorithms implemented in FreeRTOS source.

## HOW TO USE

Place the provided FreeRTOSConfig.h, scheduler.cpp, and scheduler.h in the directory of the FreeRTOS 
Library.
Use the provided macros in scheduler.h for using RMS, DMS, and EDF scheduling modes respectively.

### Testing

This code was written for use on Arduino MEGA, implement the task sets in the Arduino IDE, then compile and upload the sketches (Arduino IDE would compile the FreeRTOS files as well).

Example .ino file is provided for using the algorithms.
