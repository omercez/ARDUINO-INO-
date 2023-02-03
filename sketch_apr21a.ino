
//---------------------- IŞIK SENSÖR UYGULAMASI ----------------------

int led = 13; // 13 nolu dijital pini kullanacağız (hatta o pine bağlı ledi)
int led2 = 12;
int sensor2 = 8;
int sensor = 7; //2 nolu dijital pinimiz sensör girişimiz
int state = LOW; // hareket olmadığında durum=&quot;0&quot; olacak
int state2 = LOW;
int val = 0; // ilk başta value değeri &quot;0&quot; tanımladık
int val2 = 0;
int iceri = 0;
int disari = 0;
int deger = 0;

void setup() {
  pinMode(led, OUTPUT); // 13 nolu pin çıkış olarak tanımlandı
  pinMode(led2, OUTPUT);
  pinMode(sensor, INPUT); // 2 nolu pin giriş olarak tanımlandı
  pinMode(sensor2, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(sensor); // sensörü oku value değerine at
  val2 = digitalRead(sensor2);
  if (val == HIGH) { // eğer value değeri =&quot;1&quot; ise
    
    iceri++;
    if (iceri >= 1) {

      digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }

  }

  


//////////////////////////////sensor2/////////////////////////////////////

if (val2 == HIGH) {
 disari
  

}

}
