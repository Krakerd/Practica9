void setup(){
    Serial.begin(115200);
    delay(10);
}

void loop(){
    bool recibido = false;
    float radio = 0;
    float altura = 0;
    float pi = 3.1415926;
    Serial.println("Introduzca radio de cono: ");
    while(true){
        if(Serial.available()){
            radio = Serial.parseFloat();
            delay(10);
            break;
        }
    }
    
    Serial.println("Introduzca altura del cono: ");
    while(true){
        if(Serial.available()){
            altura = Serial.parseFloat();
            delay(10);
            break;
        }
    }
    if(radio != 0 || altura != 0){
        float volumen = (pi * radio * radio) * altura/3;
        Serial.print("El volumen es: ");
        Serial.println(volumen);
    }
}
