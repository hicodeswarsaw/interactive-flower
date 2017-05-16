#include <SoftwareSerial.h>
#define ARDUINO_RX 5 //should connect to TX of the Serial MP3 Player module
#define ARDUINO_TX 6 //connect to RX of the module
SoftwareSerial mySerial(ARDUINO_RX, ARDUINO_TX);
static int8_t Send_buf[8] = {0} ;

#define CMD_SEL_DEV 0X09
#define DEV_TF 0X02
#define CMD_PLAY_W_VOL 0X22

int sensor = 2; // pin for motion sensor 


void setup() 
{
  pinMode(sensor, INPUT);    // initialize sensor as an input
      mySerial.begin(9600);
        Serial.begin(9600);
      delay(500);//Wait chip initialization is complete
        sendCommand(CMD_SEL_DEV, DEV_TF);//select the TF card  
      delay(200);//wait for 200ms
}


void motionsensor(){ // This function is for motion sensor.

  if (digitalRead(sensor)){   
  sendCommand(CMD_PLAY_W_VOL, 0X1E001); //play the sound track 001
  delay(5000); // length of the sound track
    }  
}


void loop() {

delay(1000); // gets the readings after 1 second
 int sensorValue = analogRead(A1); //analogue pin 1 for soil moisture sensor

  if (sensorValue >=500){          // put the accurate value of moisture here for your plant
    Serial.println(sensorValue);
 
    motionsensor();


  }
   
}

void sendCommand(int8_t command, int16_t dat)
{
  delay(20);
  Send_buf[0] = 0x7e; 
  Send_buf[1] = 0xff; 
  Send_buf[2] = 0x06; 
  Send_buf[3] = command; 
  Send_buf[4] = 0x00;//0x00 = no feedback, 0x01 = feedback
  Send_buf[5] = (int8_t)(dat >> 8);//datah
  Send_buf[6] = (int8_t)(dat); //datal
  Send_buf[7] = 0xef; //ending byte
  for(uint8_t i=0; i<8; i++)//
  {
    mySerial.write(Send_buf[i]) ;
  }
}
