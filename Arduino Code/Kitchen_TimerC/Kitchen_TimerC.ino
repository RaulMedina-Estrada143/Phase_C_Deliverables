/************ Will Probably change since we're not using Arduino but variables will stay the same *********/
#define BUTTON_2 1 // Increment
#define BUTTON_1  // Start/Stop and Stop Buzzer
#define GREEN_LED  
#define RED_LED 
#define Buzzer  

#define DATA 
#define LATCH
#define LOCK

#define DIGIT_4
#define DIGIT_3
#define DIGIT_2
#define DIGIT_1

//7 Seg-Displau Variables
unsigned char table[]= 
{0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f,0x77,0x7c,0x39,0x5e,0x79,0x71,0x00};
byte current_digit;

//Volatile Variables

  //~Kitchen timer
volatile unsigned char isr_1_flag = 0;
volatile unsigned char isr_2_flag = 0;

//Timer Variables

#define DEFAULT_COUNT 30 //30 seconds default value
volatile int count = DEFAULT_COUNT;
unsigned char timer_running = 0;

unsigned int reload_timer_1 = 62500; // one second
byte reload_tiemr_2 = 10; //display refresh time 


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
