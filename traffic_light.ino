// Jeda waktu dari lampu ke lampu
int delays = 1000;

// Waktu tunggu untuk lampu merah
int puluh_merah = 2; // dihitung puluhan detik

// Waktu tunggu untuk lampu hijau
// Puluhan
int puluh_hijau = 1; // dihitung puluhan detik

// Digit pertama
int d1a = 22;
int d1b = 23;
int d1c = 24;
int d1d = 25;
int d1e = 26;
int d1f = 27;
int d1g = 28;

// Digit kedua
int d2a = 31;
int d2b = 32;
int d2c = 33;
int d2d = 34;
int d2e = 35;
int d2f = 36;
int d2g = 37;

// lampu
int merah = 1;
int kuning = 2;
int hijau = 3;

// sakelar
int sakelar = 13;

// indikator
int indR = 12;
int indG = 11;
int indB = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(sakelar, INPUT);
  
  // indicator
  pinMode(indR, OUTPUT);
  pinMode(indG, OUTPUT);
  pinMode(indB, OUTPUT);
  digitalWrite(indR, HIGH);
  digitalWrite(indG, LOW);
  digitalWrite(indB, LOW);
  
  // traffic light
  pinMode(merah, OUTPUT);
  pinMode(kuning, OUTPUT);
  pinMode(hijau, OUTPUT);

  // digit pertama
  pinMode(d1a, OUTPUT);
  pinMode(d1b, OUTPUT);
  pinMode(d1c, OUTPUT);
  pinMode(d1d, OUTPUT);
  pinMode(d1e, OUTPUT);
  pinMode(d1f, OUTPUT);
  pinMode(d1g, OUTPUT);

  // digit kedua
  pinMode(d2a, OUTPUT);
  pinMode(d2b, OUTPUT);
  pinMode(d2c, OUTPUT);
  pinMode(d2d, OUTPUT);
  pinMode(d2e, OUTPUT);
  pinMode(d2f, OUTPUT);
  pinMode(d2g, OUTPUT);
/*
  delay(500);

  // Digit 1 = O
  digitalWrite(d1a, HIGH);
  digitalWrite(d1b, HIGH);
  digitalWrite(d1c, HIGH);
  digitalWrite(d1d, HIGH);
  digitalWrite(d1e, HIGH);
  digitalWrite(d1f, HIGH);
  digitalWrite(d1g, LOW);

  // Digit 2 = n
  digitalWrite(d2a, HIGH);
  digitalWrite(d2b, HIGH);
  digitalWrite(d2c, HIGH);
  digitalWrite(d2d, LOW);
  digitalWrite(d2e, HIGH);
  digitalWrite(d2f, HIGH);
  digitalWrite(d2g, LOW);
  */
  digitalWrite(indR, LOW);
  digitalWrite(indG, HIGH);
  digitalWrite(indB, LOW);
  /*
  delay(500);
  // Digit 1 = O
  digitalWrite(d1a, LOW);
  digitalWrite(d1b, LOW);
  digitalWrite(d1c, LOW);
  digitalWrite(d1d, LOW);
  digitalWrite(d1e, LOW);
  digitalWrite(d1f, LOW);
  digitalWrite(d1g, LOW);

  // Digit 2 = n
  digitalWrite(d2a, LOW);
  digitalWrite(d2b, LOW);
  digitalWrite(d2c, LOW);
  digitalWrite(d2d, LOW);
  digitalWrite(d2e, LOW);
  digitalWrite(d2f, LOW);
  digitalWrite(d2g, LOW);

  delay(500);
  //writeAngkaDigit1(2);
  */
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sakelar) == LOW) {
    digitalWrite(hijau, LOW);
    digitalWrite(kuning, LOW);
    digitalWrite(merah, HIGH);
    for (int i = puluh_merah - 1; i > -1; i--) {
      writeAngkaDigit1(i);
      for (int j = 9; j > -1; j--) {
        writeAngkaDigit2(j);
        delay(delays);
      }
    }
    
    digitalWrite(hijau, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(merah, HIGH);
    delay(delays);
    
    digitalWrite(hijau, HIGH);
    digitalWrite(kuning, LOW);
    digitalWrite(merah, LOW);
    for (int i = puluh_hijau - 1; i > -1; i--) {
      writeAngkaDigit1(i);
      for (int j = 9; j > -1; j--) {
        writeAngkaDigit2(j);
        delay(delays);
      }
    }
    digitalWrite(hijau, LOW);
    digitalWrite(kuning, HIGH);
    digitalWrite(merah, LOW);
    clearDigits();
    delay(delays);
  } else {
    while (true) {
      digitalWrite(hijau, LOW);
      digitalWrite(kuning, HIGH);
      digitalWrite(merah, LOW);
      delay(delays);
      digitalWrite(hijau, LOW);
      digitalWrite(kuning, LOW);
      digitalWrite(merah, LOW);
      delay(delays);
    }
  }
}

void clearDigits() {
  digitalWrite(d1a, LOW);
  digitalWrite(d1b, LOW);
  digitalWrite(d1c, LOW);
  digitalWrite(d1d, LOW);
  digitalWrite(d1e, LOW);
  digitalWrite(d1f, LOW);
  digitalWrite(d1g, LOW);

  digitalWrite(d2a, LOW);
  digitalWrite(d2b, LOW);
  digitalWrite(d2c, LOW);
  digitalWrite(d2d, LOW);
  digitalWrite(d2e, LOW);
  digitalWrite(d2f, LOW);
  digitalWrite(d2g, LOW);
}

void writeAngkaDigit1(int a) {
  switch (a) {
    case 0:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, HIGH);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, LOW);
      break;
    case 1:
      digitalWrite(d1a, LOW);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, LOW);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, LOW);
      digitalWrite(d1g, LOW);
      break;
    case 2:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, LOW);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, HIGH);
      digitalWrite(d1f, LOW);
      digitalWrite(d1g, HIGH);
      break;
    case 3:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, LOW);
      digitalWrite(d1g, HIGH);
      break;
    case 4:
      digitalWrite(d1a, LOW);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, LOW);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, HIGH);
      break;
    case 5:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, LOW);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, HIGH);
      break;
    case 6:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, LOW);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, HIGH);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, HIGH);
      break;
    case 7:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, LOW);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, LOW);
      digitalWrite(d1g, LOW);
      break;
    case 8:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, HIGH);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, HIGH);
      break;
    case 9:
      digitalWrite(d1a, HIGH);
      digitalWrite(d1b, HIGH);
      digitalWrite(d1c, HIGH);
      digitalWrite(d1d, HIGH);
      digitalWrite(d1e, LOW);
      digitalWrite(d1f, HIGH);
      digitalWrite(d1g, HIGH);
      break;
  }
}

void writeAngkaDigit2(int a) {
  switch (a) {
    case 0:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, HIGH);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, LOW);
      break;
    case 1:
      digitalWrite(d2a, LOW);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, LOW);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, LOW);
      digitalWrite(d2g, LOW);
      break;
    case 2:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, LOW);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, HIGH);
      digitalWrite(d2f, LOW);
      digitalWrite(d2g, HIGH);
      break;
    case 3:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, LOW);
      digitalWrite(d2g, HIGH);
      break;
    case 4:
      digitalWrite(d2a, LOW);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, LOW);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, HIGH);
      break;
    case 5:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, LOW);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, HIGH);
      break;
    case 6:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, LOW);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, HIGH);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, HIGH);
      break;
    case 7:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, LOW);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, LOW);
      digitalWrite(d2g, LOW);
      break;
    case 8:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, HIGH);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, HIGH);
      break;
    case 9:
      digitalWrite(d2a, HIGH);
      digitalWrite(d2b, HIGH);
      digitalWrite(d2c, HIGH);
      digitalWrite(d2d, HIGH);
      digitalWrite(d2e, LOW);
      digitalWrite(d2f, HIGH);
      digitalWrite(d2g, HIGH);
      break;
  }
}
