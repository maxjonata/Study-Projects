
void setup()
{
    //Programa a conexão com o servidor
    
}

void loop()
{
    //Programa o setup

    //executa os comandos

}

int toggleDigital(digitalPort)
{
    if(digitalRead(digitalPort) == LOW)
    {
        if(digitalWrite(digitalPort, HIGH)) return digitalPort;
    }
    else
    {
        if(digitalWrite(digitalPort, LOW)) return digitalPort;
    }
    return -1;
}

int toggleAnalog(analogPort, value)
{
    if(value >= 0)analogWrite(analogPort, value);
    return analogRead(analogPort);
}