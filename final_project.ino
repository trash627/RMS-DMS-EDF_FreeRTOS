#include "scheduler.h"

TaskHandle_t xHandle1 = NULL;
TaskHandle_t xHandle2 = NULL;
TaskHandle_t xHandle3 = NULL;
TaskHandle_t xHandle4 = NULL;



// the loop function runs over and over again forever
void loop() {}


static void testFunc1( void *pvParameters )
{
	(void) pvParameters;
  // Serial.println("task1 running");
  // Serial.flush();
	volatile int i, j;
  for (i = 0; i < 320; i++) {
    for (j = 0; j < 1000; j++) {

    }
  }

}

static void testFunc2( void *pvParameters )
{ 
	(void) pvParameters;	
  // Serial.println("task2 running");
  // Serial.flush();
	volatile int i, j;	
  for (i = 0; i < 160; i++) {
    for (j = 0; j < 1000; j++) {
      
    }
  }

}

static void testFunc3( void *pvParameters )
{ 
	(void) pvParameters;	
  // Serial.println("task3 running");
  // Serial.flush();
	volatile int i, j;	
  for (i = 0; i < 240; i++) {
    for (j = 0; j < 1000; j++) {
      
    }
  }

}

int main( void )
{
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB, on LEONARDO, MICRO, YUN, and other 32u4 based boards.
  }
	char c1 = 'a';
	char c2 = 'b';
  char c3 = 'c';
  char c4 = 'd';			

	vSchedulerInit();

	vSchedulerPeriodicTaskCreate(testFunc1, "t1", configMINIMAL_STACK_SIZE, &c1, 2, &xHandle1, pdMS_TO_TICKS(0), pdMS_TO_TICKS(800), pdMS_TO_TICKS(400), pdMS_TO_TICKS(800));
	vSchedulerPeriodicTaskCreate(testFunc2, "t2", configMINIMAL_STACK_SIZE, &c2, 1, &xHandle2, pdMS_TO_TICKS(0), pdMS_TO_TICKS(1000), pdMS_TO_TICKS(200), pdMS_TO_TICKS(1000));
	vSchedulerPeriodicTaskCreate(testFunc3, "t3", configMINIMAL_STACK_SIZE, &c3, 1, &xHandle3, pdMS_TO_TICKS(0), pdMS_TO_TICKS(1200), pdMS_TO_TICKS(300), pdMS_TO_TICKS(1200));

  Serial.println("scheduler start");
  Serial.flush();

	vSchedulerStart();



	/* If all is well, the scheduler will now be running, and the following line
	will never be reached. */
	
	for( ;; );
}

