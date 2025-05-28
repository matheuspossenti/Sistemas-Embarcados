int brilho;

void setup(){
	pinMode(10,OUTPUT);
	pinMode(2,INPUT);
	pinMode(3,INPUT);
}
void loop(){
	if(digitalRead(2)==HIGH){
		brilho=brilho+20;
		if(brilho>255) brilho=255;
		while(digitalRead(2)==HIGH) delay(10);
	}
	
	if(digitalRead(3)==HIGH){
		brilho=brilho-20;
		if(brilho<0) brilho=0;
		while(digitalRead(3)==HIGH) delay(10);
	}
	
	analogWrite(10,brilho);
}