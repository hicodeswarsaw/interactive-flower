# interactive-flower

In this tutorial you can build easy device that gives your plants voice and let them communicate you when they have to be hydrated or need more light.

<b>How does it work?</b>

First it takes the readings from soil moisture and light intensity sensors. And when it detects that the plant need some water or light, it turns on the motion sensor and then if anyone goes front of the motion sensor it (motion sensor) triggers the mp3 player to play the sound.


<b>You will need: </b>

- Light intensity sensor  (https://www.amazon.com/SMAKN-BH1750-Digital-intensity-Arduino/dp/B014IP9V4I/ref=sr_1_1?ie=UTF8&qid=1494896583&sr=8-1&keywords=light+intensity+sensor ) 
- Soil moisture sensor with detector modle (https://www.amazon.com/Gikfun-Moisture-Sensor-Arduino-watering/dp/B00R4EMHI8/ref=sr_1_15?ie=UTF8&qid=1494896614&sr=8-15&keywords=soil+moisture+sensor ) 
- Arduino Nano ( https://store.arduino.cc/arduino-nano )
- Adafruit Codec VS1053 ( https://www.adafruit.com/product/1381 ) or serial mp3 player (https://www.amazon.co.uk/Serial-Control-Player-Module-Arduino/dp/B06Y117MX8/ref=sr_1_1?ie=UTF8&qid=1494937638&sr=8-1&keywords=serial+mp3+player)
- Mini Speaker 
- Micro SD card
-Set of cables (m-m & m-f & f-f)
- Prototyping board
- USB cabel

For this project I decided to used serial mp3 player, if you are more into adafruit you can check here how to prepare and wire it with your arduino 
https://learn.adafruit.com/adafruit-vs1053-mp3-aac-ogg-midi-wav-play-and-record-codec-tutorial/simple-audio-player-wiring

Additional to improve experience I added also motion sensor. ( https://www.amazon.co.uk/d/jt/Aukru-HC-SR501-Pyroelectric-Infrared-Motion-Detector-Modules/B00PL71326/ref=sr_1_1?ie=UTF8&qid=1494937735&sr=8-1&keywords=motion+sensor+arduino )

You might be thinking what's the point adding in this project motion sensor?
Well even though you can make it without motion sensor, but that will keep playing the sound again and again. And on the other hand if you add the motion sensor it will only play the sound when someone around it.


<b>Background: </b>

<b>Know when to water and how much water your plants need</b>

Improper watering kills or injures houseplants more than any other cause. Overwatering is just as harmful to your plants as under-watering. Therefore it is essential to monitor your plant's moisture so that you know when it's time to water and stop “forgetting” or “guesswork”.

By knowing light intensity you can provide your plants with ideal growing conditions
Along with water light is the most important element to growing healthy plants. No plant will live for long without light. Plants absorb light energy and turn it into energy through photosynthesis. When it comes to growing plants indoors, gardeners are typically fighting for enough light or more consistent light. It's important to know that natural sunlight coming through a window is not as strong as sunlight outside, and the intensity of the light drops rapidly the further the plant is moved from the window. A simple move of two or three feet away from a window can reduce the light intensity by more than 50 percent. When you buy a plant you’ll find an indication of light intensity it needs. 


<b>Light and Moisture Requirements For Selected Indoor Plants</b>

The following list includes most of the indoor plants that you will be growing. This list contains information on how large the plant will get at maturity, which light level is best for good growth, how much you should be feeding your indoor plants and how much water is required for healthy growth. The list gives the scientific name and, in parenthesis, the common name. Always try to remember a plant by its scientific name, because some plants have many common names but only one scientific name.
The following descriptions define the terms used in the following material.

<b>Light Levels</b>

Low - Minimum high level of 25-foot candles, preferred level of 75- to 200-foot candles. 
Medium - Minimum of 75- to 100-foot candles, preferred level of 200- to 500-foot candles. 
High - Minimum of 200-foot candles, preferred level of 500- to 1,000-foot candles.
Very High - Minimum of 1,000-foot candles, preferred level of over 1,000-foot candles. 

<b>Water Requirements</b>
Dry - Does not need very much water and can stand low humidity.
Moist - Requires a moderate amount of water and loves some humidity in the atmosphere.
Wet - Usually requires more water than other plants and must have high humidity in its surroundings.

Table with plants requirements: 

https://www.uaex.edu/yard-garden/home-landscape/docs/Light%20and%20Moisture%20Requirements.pdf


<b> Install Arduino Software </b>

Download Arduino software from the Arduino website: http://arduino.cc If you’ve not used an Arduino before, you’ll want to spend some time familiarizing yourself with the basics. Check out the Arduino website for some great beginner tutorials.

<b>Buildin the circuit</b>

This is an easy circuit to assemble using a solderless breadboard. 
Hook up all parts as shown in the illustration in folder (circuit.png) , 
using jumper wires to connect each sensor circuit to the inputs on your Arduino.

<b>Upload mp3 to SD card</b>

You can find the files with voiceover in voiceover folder  

<b>Programming the Arduino</b>

Next we’ll upload the Arduino sketch (interatvie.flower.ino) to the device. 
Connect your Arduino to your computer using a USB cable and make sure the right board and serial port are selected 
(see the appropriate “Getting Started” section for your operating system: http://arduino.cc/en/Guide/HomePage).
Open the “Blossom_module.ino” file with your Arduino software and upload it to the board. Some LEDs should blink on the Arduino board, and after a few moments, you should see “Done Uploading” in the console area of the Arduino software.

Your sketch should now be running!
