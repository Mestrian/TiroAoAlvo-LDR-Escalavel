#include <Servo.h>
#include <LiquidCrystal_I2C.h>

#define QntdAlvos 3
#define ResetBtn 4

LiquidCrystal_I2C lcd(0x27,16,2); //criando o lcd para o arduino

int pinosLDR[QntdAlvos] = {A1, A2, A3};
int pinosServo[QntdAlvos] = {3, 5, 6};

Servo servos[QntdAlvos];
int leituraLdr[QntdAlvos];
int limite = 700; // valor minimo vindo do sensor para considerar acerto

void Verificacao(); 

void setup() {
   Serial.begin(9600);

   lcd.init();
   lcd.clear();         
   lcd.backlight();
   lcd.setCursor(2,0);
   lcd.print("Pontuacao: "); 

   for (int i = 0; i < QntdAlvos; i++) {
      servos[i].attach(pinosServo[i]);
      servos[i].write(90); 
   }
}

void loop() {
   static int pontuacao = 0; 
   if(digitalRead(ResetBtn) == 1) pontuacao = 0; 
   for (int i = 0; i < QntdAlvos; i++) {
      leituraLdr[i] = analogRead(pinosLDR[i]);
     	Serial.print("Alvo ");   //construindo retorno no monitor serial para debug/explanação
    	Serial.print(i);
    	Serial.print(": ");
    	Serial.println(leituraLdr[i]);

      if (leituraLdr[i] > limite) {
         servos[i].write(0); 
         delay(500);
         servos[i].write(90); 
         pontuacao++; 
      }
   }

   lcd.setCursor(4, 1); 
   lcd.print(pontuacao); //atualizando pontuação
   delay(100);
}

