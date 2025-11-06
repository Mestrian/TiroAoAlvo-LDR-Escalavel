# Tiro ao Alvo 

Um pequeno projeto de arduino para exemplificar o funcionamento de certos atuadores e sensores. 
<a href = "https://www.tinkercad.com/things/iFwGGKmPWx6/editel?returnTo=%2Fdashboard">Link no tinkercad</a>

<center><h2>Como Adicionar/Retirar Alvos</h2></center>

Primeiro, mude o número de alvos em `#define QntdAlvos X`, sendo X a quantidade de alvos desejada. </br> 
```c++
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

#define QntdAlvos X
#define ResetBtn 4
```
Depois disso, altere as portas dos servos e dos fotorresistores nas devidas váriaveis:

```c++
int pinosLDR[QntdAlvos] = {A1, A2, A3}; //insira aqui as portas dos alvos. 
int pinosServo[QntdAlvos] = {3, 5, 6}; //insira aqui as portas dos servo motores.
```

Prontinho! Agora é só botar pra funcionar. Lembrando que qualquer dúvida quanto a fiação, existe um sistema modelo montado por mim no <a href = "https://www.tinkercad.com/things/iFwGGKmPWx6/editel?returnTo=%2Fdashboard">Tinkercad</a>. 


