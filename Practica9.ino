void setup(){
    Serial.begin(115200);
    delay(10);
}

void flushBuffer(){
    while(Serial.available()){
        Serial.read();
    }
}

void loop(){
    bool recibido = false;
    float radio = 0;
    float altura = 0;
    float pi = 3.1415926;
    Serial.print("Introduzca radio de cono: ");
    while(true){
        if(Serial.available()){
            radio = Serial.parseFloat();
            delay(10);
            flushBuffer();
            Serial.println(radio);
            break;
        }
    }
    
    Serial.print("Introduzca altura del cono: ");
    while(true){
        if(Serial.available()){
            altura = Serial.parseFloat();
            delay(10);
            flushBuffer();
            Serial.println(altura);
            break;
        }
    }
    if(radio != 0 || altura != 0){
        float volumen = (pi * radio * radio) * altura/3;
        Serial.print("El volumen es: ");
        Serial.println(volumen);
    }
}
