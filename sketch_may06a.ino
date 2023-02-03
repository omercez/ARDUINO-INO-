
//-------------------------- ÜÇ BUTON İLE BİLGİ YARIŞMASI UYGULAMASI --------------------------
#define Buton 1
#define Led 6
 
#define Buton2 2
#define Led2 5

#define Buton3 3
#define Led3 4


#define Buton5 5
int durum1;
int durum2;
int durum3;
int durum4;
bool deger=false;
void setup()
{
  pinMode(Buton, INPUT);
  pinMode(Led, OUTPUT);
  pinMode(Buton2, INPUT);
  pinMode(Led2, OUTPUT);
  pinMode(Buton3, INPUT);
  pinMode(Led3, OUTPUT);
   pinMode(Buton4, INPUT);
  pinMode(Led4, OUTPUT);
}

void loop()
{
  if(digitalRead(Buton5) == 1){
      deger=false;
      durum1=0;
      durum2=0;
      durum3=0;
      durum4=0;

       digitalWrite(Led,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      digitalWrite(Led4,LOW);
    }
  
  if (digitalRead(Buton) == 1 && deger == false)
  
  {
     durum1=1;
     if(durum1==1 && durum2==0 && durum3==0 && durum4==0){
      digitalWrite(Led,HIGH);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      digitalWrite(Led4,LOW);
      deger = true;
      }
      
    }
 
  else
  durum1=0;
  

  if (digitalRead(Buton2) == 1 && deger == false)
  {
     durum2=1;
     if(durum1==0 && durum2==1 && durum3==0 && durum4==0){
      digitalWrite(Led,LOW);
      digitalWrite(Led2,HIGH);
      digitalWrite(Led3,LOW);
      digitalWrite(Led4,LOW);
      deger = true;
      }
     
    }
 
  else
  durum2=0;
  

  if (digitalRead(Buton3) == 1 && deger == false)
  {
     durum3=1;
     if(durum1==0 && durum2==0 && durum3==1 && durum4==0){
      digitalWrite(Led,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,HIGH);
      digitalWrite(Led4,LOW);
      deger = true;
      }
     
    }
 
  else
  durum3=0;
  

  if (digitalRead(Buton4) == 1 && deger == false)
  {
     durum4=1;
     if(durum1==0 && durum2==0 && durum3==0 && durum4==1){
      digitalWrite(Led,LOW);
      digitalWrite(Led2,LOW);
      digitalWrite(Led3,LOW);
      digitalWrite(Led4,HIGH);
      deger = true;
      }
      
    }
 
  else
  durum4=0;
  
  
  
  
}
