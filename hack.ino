#include "DigiKeyboard.h"

void fun(int long_cmd=0) {
    DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT); 
    DigiKeyboard.delay(1000);

    DigiKeyboard.print("cmd");  
    DigiKeyboard.delay(200);
    DigiKeyboard.sendKeyStroke(KEY_ENTER); 
    if(long_cmd==1) 
      DigiKeyboard.delay(1000); 
    else
      DigiKeyboard.delay(500); 
  }
void setup() {

 
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  fun();
 
  DigiKeyboard.print("hollywood");    
  DigiKeyboard.sendKeyStroke(KEY_ENTER);  
  DigiKeyboard.delay(8000);

  fun(1);
  DigiKeyboard.print("firefox -new-tab http://geektyper.com/scp/ & xdotool search --sync --onlyvisible --class \"Firefox\" windowactivate key F11 "); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(200);

  for(int i=0; i<120; i++) {
    DigiKeyboard.sendKeyStroke(KEY_A); 
    DigiKeyboard.delay(200);
  }
  DigiKeyboard.sendKeyStroke(KEY_1);        
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_2);          
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_4);        
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);          
  DigiKeyboard.delay(200);
  for(int i=0; i<30; i++) {
    DigiKeyboard.sendKeyStroke(KEY_A); 
    DigiKeyboard.delay(200);
  }
  DigiKeyboard.sendKeyStroke(KEY_3);          
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_6);          
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(MOD_SHIFT_RIGHT);            
  DigiKeyboard.delay(400);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);                   
  DigiKeyboard.delay(4000);  


  fun();
  DigiKeyboard.print("mplayer -xy 4096 -geometry 50%:50% -loop 10 /home/sudhir/Downloads/hacker.mp4");   
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 

}


void loop() {

}
