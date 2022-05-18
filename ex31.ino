// C++ code
//
int led_Azul = 11;
int led_Vermelho = 10;
int led_Verde = 9;
int led_Amarelo = 8;
int botao = 2;
int statBotao = 0;



void setup()
{
  Serial.begin(9600);
  pinMode(led_Azul, OUTPUT);
  pinMode(led_Vermelho, OUTPUT);
  pinMode(led_Verde, OUTPUT);
  pinMode(led_Amarelo, OUTPUT);
  pinMode(botao, INPUT);
  }



void loop()
{
    statBotao = digitalRead(botao);
    if (statBotao == HIGH)
    {
    digitalWrite(led_Amarelo, HIGH);
    delay(1000);
    digitalWrite(led_Verde, HIGH);
    delay(1000);
    digitalWrite(led_Vermelho, HIGH);
    delay(1000);
    digitalWrite(led_Azul, HIGH);
    delay(1000);
    digitalWrite(led_Amarelo, LOW);
    digitalWrite(led_Verde, LOW);
    digitalWrite(led_Vermelho, LOW);
    digitalWrite(led_Azul, LOW);




}
else
{
  digitalWrite(led_Amarelo, LOW);
  digitalWrite(led_Verde, LOW);
  digitalWrite(led_Vermelho, LOW);
  digitalWrite(led_Azul, LOW);
}

}
  