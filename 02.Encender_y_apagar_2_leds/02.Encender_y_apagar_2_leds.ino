/*
Programa:2.Encender y apagar 2 leds en Arduino uno.
Curso: Arduino
Autor: Expacio Science Group™
Version: 1.0.0
*/
void setup()                    //Función escencial para la configuración inicial del programa.
{
  pinMode(13, OUTPUT);          //Configura el pin especificado para que se comporte como una entrada o una salida, en este caso es el pin 13.
  pinMode(12, OUTPUT);          //Configuración del pin 12 de salida.
}

void loop()                     //Esta función se ejecuta de forma repetitiva una vez que la función void setup() ha finalizado su ejecución inicial
{
  digitalWrite(13, HIGH);       //Escriba un valor HIGH (Encendido) en el pin  13.
  delay(100);                  //Pausa el programa por la cantidad de tiempo (en milisegundos) especificado como parámetro. 1000 milisegundos = 1 segundo.
  digitalWrite(13, LOW);        //Escriba un valor LOW (Apagado) en el pin  13.
  delay(100);                  //Pausa el programa por la cantidad de tiempo (en milisegundos) especificado como parámetro. 1000 milisegundos = 1 segundo.
  //Led 2
  digitalWrite(12, HIGH);       //Escriba un valor HIGH (Encendido) en el pin  12.
  delay(100);                  //Pausa el programa por la cantidad de tiempo (en milisegundos) especificado como parámetro. 1000 milisegundos = 1 segundo.
  digitalWrite(12, LOW);        //Escriba un valor LOW (Apagado) en el pin  12.
  delay(100);     
}
//Fin del programa 
