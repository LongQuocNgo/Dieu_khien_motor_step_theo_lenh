String D;
String chieu;
long MT;
int TD;
String TT;
int V = 0;
String MT1;
String TD1;
String V1;
int xung1 = 7;
int xung2 = 5;
int xung3 = 3;
int chieu1 = 6;
int chieu2 = 4;
int chieu3 = 2;
unsigned int DL =1000;


String splitString(String str, String delim, uint16_t pos){
  String tmp = str;


 
  for(int i=0; i<pos; i++){
    tmp = tmp.substring(tmp.indexOf(delim)+1);

    
    if(tmp.indexOf(delim)== -1 
    && i != pos -1 )
      return "";
  }
  return tmp.substring(0,tmp.indexOf(delim));
}
void setup() {
 pinMode(xung1,OUTPUT);
 pinMode(xung2,OUTPUT);
 pinMode(xung3,OUTPUT);
 pinMode(chieu1,OUTPUT);
 pinMode(chieu2,OUTPUT);
 pinMode(chieu3,OUTPUT);
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()!=0){
  D = Serial.readString();
  MT1 = splitString(D," ",0);
  MT = MT1.toInt();
  chieu = splitString(D," ",1); 
  V1 = splitString(D," ",2);
  V = V1.toInt();
  TD1 = splitString(D," ",3);  
  TD = TD1.toInt();



    
}
 if ((MT == 1)&&(chieu == "n")){
  for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu1,LOW);
  digitalWrite(xung1,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung1,LOW);
  delayMicroseconds(TD);}
  Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
  if ((MT == 1)&&(chieu == "x")){
    for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu1,HIGH);
  digitalWrite(xung1,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung1,LOW);
  delayMicroseconds(TD);
 }
 Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
  if ((MT == 2)&&(chieu == "n")){
    for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu2,LOW);
  digitalWrite(xung2,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung2,LOW);
  delayMicroseconds(TD);}
  Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
  if ((MT == 2)&&(chieu == "x")){
    for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu2,HIGH);
  digitalWrite(xung2,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung2,LOW);
  delayMicroseconds(TD);}
  Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
 if ((MT == 3)&&(chieu == "n")){
  for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu3,LOW);
  digitalWrite(xung3,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung3,LOW);
  delayMicroseconds(TD);
  }
  Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
  if ((MT == 3)&&(chieu == "x")){
    for(int i = 0;i<=1600*V;i++){
  digitalWrite(chieu3,HIGH);
  digitalWrite(xung3,HIGH);
  delayMicroseconds(TD);
  digitalWrite(xung3,LOW);
  delayMicroseconds(TD);}
  Serial.println("(☞ﾟヮﾟ)☞|| ĐÃ XONG ||☜(ﾟヮﾟ☜)");
 }
 MT = 0;
 chieu = "0";
}
