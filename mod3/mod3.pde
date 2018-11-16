
//From Arduino to Processing to Txt or Csv etc.
//import
import processing.serial.*;
//declare
PrintWriter output;
Serial udSerial;

void setup() {
  background(0);
  size(500,500);
  udSerial = new Serial(this, "COM7", 9600);
  output = createWriter ("beat.csv");
}

void draw() {

  if (udSerial.available() > 0) {
    String SenVal = udSerial.readString();
    if (SenVal != null) {
      output.println(SenVal);
     
    }
  }
}

void keyPressed(){
  output.flush();
  output.close();
  exit(); 
}
