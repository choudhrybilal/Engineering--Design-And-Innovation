/*Engineering, Design & Innovation - EE391
 ***Traffic Signal Light Controller***
 *
 *Group Member: Choudhry Bilal Mazhar (cm00326)
 *              Muhammad Talha (mt00727)
 *              Syed Yasir Afzal (sa1670)
 *
 *Instructors: Dr. Basit Memon
 *             Gulraiz Khan
 */

int TrafficDensity()
{
Serial.print(" ");
Serial.println(" ");
Serial.print("Route 1 --> Traffic Density: ");
int r1 = random(0,4500);
Serial.println(r1);
Serial.print("Route 2 --> Traffic Density: ");
int r2 = random(0,4500);
Serial.println(r2);
Serial.print("Route 3 --> Traffic Density: ");
int r3 = random(0,4500);
Serial.println(r3);
Serial.print("Route 4 --> Traffic Density: ");
int r4 = random(0,4500);
Serial.println(r4);
int a[] = {r1,r2,r3,r4};
int mn;
int r=1;
int c;
int i = 0;
mn=a[0];
for(int i=0;i<4;i++)
  {
    if(mn<a[i])
    {
      mn=a[i];
      r = i+1;
    }
  }
  Serial.print(" ");
  Serial.println(" ");
  Serial.print("  MAXIMUM TRAFFIC DENSITY: ");
  Serial.println(mn);
  Serial.print("       AT ROUTE NUMBER: ");
  Serial.println(r);
  Serial.print("\n");
return r;
}

int Route1RGB[]={2,3,4};//RGB LED - Red, Green and Blue Pins
int Route2RGB[]={5,6,7};
int Route3RGB[]={8,9,10};
int Route4RGB[]={11,12,13};

void setup() 
{
   Serial.begin(9600);
  for (int i = 0; i < 3; i++)
  {
    pinMode(Route1RGB[i], OUTPUT); 
    pinMode(Route2RGB[i], OUTPUT);
    pinMode(Route3RGB[i], OUTPUT);
    pinMode(Route4RGB[i], OUTPUT);
  }
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(Route1RGB[i], LOW); 
    digitalWrite(Route2RGB[i], LOW);
    digitalWrite(Route3RGB[i], LOW);
    digitalWrite(Route4RGB[i], LOW);
  } 
}

int count = 0;

void loop() {
  int x;
  int arr[1];
  x = TrafficDensity();

 {
  
  if (x == 2)
  {
    digitalWrite(Route2RGB[0],LOW);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],LOW);
    delay(1000);
    digitalWrite(Route1RGB[0],LOW);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],HIGH);
    digitalWrite(Route2RGB[0],HIGH);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],LOW);
    digitalWrite(Route3RGB[0],LOW);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],HIGH);
    digitalWrite(Route4RGB[0],LOW);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],HIGH);
    delay(3000);
    digitalWrite(Route2RGB[0],LOW);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],LOW);
    delay(1000);
  }
  
  else if (x == 3)
  {
    digitalWrite(Route3RGB[0],LOW);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],LOW);
    delay(1000);
    digitalWrite(Route1RGB[0],LOW);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],HIGH);
    digitalWrite(Route2RGB[0],LOW);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],HIGH);
    digitalWrite(Route3RGB[0],HIGH);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],LOW);
    digitalWrite(Route4RGB[0],LOW);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],HIGH);
    delay(3000);
    digitalWrite(Route3RGB[0],LOW);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],LOW);
    delay(1000);
  }
    
  else if (x == 4)
  {
    digitalWrite(Route4RGB[0],LOW);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],LOW);
    delay(1000);
    digitalWrite(Route1RGB[0],LOW);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],HIGH);
    digitalWrite(Route2RGB[0],LOW);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],HIGH);
    digitalWrite(Route3RGB[0],LOW);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],HIGH);
    digitalWrite(Route4RGB[0],HIGH);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],LOW);
    delay(3000);
    digitalWrite(Route4RGB[0],LOW);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],LOW);
    delay(1000);     
  }
  
  else
  { 
    digitalWrite(Route1RGB[0],LOW);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],LOW);
    delay(1000);
    digitalWrite(Route1RGB[0],HIGH);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],LOW);
    digitalWrite(Route2RGB[0],LOW);
    digitalWrite(Route2RGB[1],HIGH);
    digitalWrite(Route2RGB[2],HIGH);
    digitalWrite(Route3RGB[0],LOW);
    digitalWrite(Route3RGB[1],HIGH);
    digitalWrite(Route3RGB[2],HIGH);
    digitalWrite(Route4RGB[0],LOW);
    digitalWrite(Route4RGB[1],HIGH);
    digitalWrite(Route4RGB[2],HIGH);
    delay(3000);
    digitalWrite(Route1RGB[0],LOW);
    digitalWrite(Route1RGB[1],HIGH);
    digitalWrite(Route1RGB[2],LOW);
    delay(1000);
  }
 }
}
