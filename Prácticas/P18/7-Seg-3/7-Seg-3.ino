int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;
int retardo=10;
int valor=0;
int unidad=0;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(izquierdo,OUTPUT);
  pinMode(derecho,OUTPUT);
}

void loop() {
  delay(retardo);
  contador++;
  if(contador==100){
    contador=0;
    unidad++;
    if(unidad>=10){
      unidad=0
      decena++
      if(decena>=10){
        decena=0;
      }
    }
  }
  if(conmutador==0){
    digitalWrite(izquierdo,HIGH);
    digitalWrite(derecho,LOW);
    valor=unidad;
    conmutador=1;
  }
  if(conmutador==1){
    digitalWrite(izquierdo,LOW);
    digitalWrite(derecho,HIGH);
    valor=decena;
    conmutador=0;
  }
  switch (valor){
    case 0:
      cero();
    break;
    case 1:
      uno();
    break;
    case 2:
      dos();
    break;
    case 3:
      tres();
    break;
    case 4:
      cuatro();
    break;
    case 5:
      cinco();
    break;
    case 6:
      seis();
    break;
    case 7:
      siete();
    break;
    case 8:
      ocho();
    break;
    case 9:
      nueve();
    break;
  }
  }
  else{
    x=-1;
  }
}

void cero(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(500);
}
void uno(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(500);
}
void dos(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(500);
}
void tres(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(500);
}
void cuatro(){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);
}
void cinco(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);
}
void seis(){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);
}
void siete(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(500);
}
void ocho(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);
}
void nueve(){
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(500);
}
