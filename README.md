# Tiro ao Alvo usando LDR e Laser
Um pequeno projeto de arduino para exemplificar o funcionamento de certos elementos.
<a href = "https://www.tinkercad.com/things/iFwGGKmPWx6/editel?returnTo=%2Fdashboard">Link no tinkercad</a>

<h1>Código Explicado</h1>

<h2>Importações e Definições</h2>

```
#include <Servo.h>
#include <LiquidCrystal_I2C.h>

#define QntdAlvos 3
#define ResetBtn 4

LiquidCrystal_I2C lcd(0x27,16,2);
```
Nessa primeira parte, foram importadas bibliotecas necessárias para o projeto para controlar os Servo Motores e também para exibir o texto em nossa tela LCD.
O `#define` foi usado para registrar a quantidade de alvos e a porta do botão de reset. Lembrando que, ao usar o `#define`, o compilador fará a substituição da palavra definida pelo valor designado a ela, quase como um tradutor. 
`LiquidCrystal_I2C lcd(0x27,16,2)` é a função usada para conectar o LCD ao arduino, informando a sua porta e sua grid. 


<style> 
h1{
  text-aling = 'center'; 
}
</style>
