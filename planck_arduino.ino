const int vermelho = 11;
const int verde = 10;
const int azul = 9;

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
}

void loop() {
    
  if (Serial.available()) { // Verifica se há dados disponíveis para leitura
    String data = Serial.readStringUntil('\n'); // Lê a linha CSV da porta serial

    // Extrai os valores RGB da linha CSV
    int r = data.substring(0, data.indexOf(',')).toInt();
    data = data.substring(data.indexOf(',') + 1);
    int g = data.substring(0, data.indexOf(',')).toInt();
    int b = data.substring(data.lastIndexOf(',') + 1).toInt();

    analogWrite(vermelho,r);
    analogWrite(verde,g);
    analogWrite(azul,b);
  }
}
