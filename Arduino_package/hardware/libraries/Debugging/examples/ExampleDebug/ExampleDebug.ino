
// Before debugging, make sure to edit debug_custom.json and ensure that the "serverArgs" field has the correct directory to the JLinkScript file
// Default directories are shown below, where you will need to replace * with your account username:
// Windows: C:/Users/*/AppData/Local/Arduino15/packages/realtek/tools/ameba_d_tools/1.0.6/debug/RTL8722_Arduino_debug.JLinkScript
// Linux:	/home/*/.arduino15/packages/realtek/tools/ameba_d_tools/1.0.6/debug/RTL8722_Arduino_debug.JLinkScript
// MacOS:	/Users/*/Library/Arduino15/packages/realtek/tools/ameba_d_tools/1.0.6/debug/RTL8722_Arduino_debug.JLinkScript

// Also, ensure you have enabled Sketch > Optimize for Debugging

// If you wish to debug your own sketches, copy the debug_custom.json file into the sketch folder

int i;
void setup() {
  Serial.begin(115200);
  pinMode(13, OUTPUT);
  for (i = 0; i < 10; i++) {
    digitalWrite(13, HIGH);
    delay(100);
    digitalWrite(13, LOW);
    delay(100);
  }
  i = 0;
}

void loop() {
  i++;
  digitalWrite(13, HIGH);
  delay(500);
  if ((i%10)==0) {
    Serial.println(i);
    // If you need more breakpoints, you can use the instructions below to cause a break in program execution
    //__BKPT();
    __asm__("BKPT");
  }
  digitalWrite(13, LOW);
  delay(500);
}
