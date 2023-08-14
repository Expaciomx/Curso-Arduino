/*
Programa:1.Encender y apagar un led en Arduino uno. (Blink)
Curso: Arduino
Autor: Expacio Science Group™
Version: 1.0.0
*/
void setup()                    //Función escencial para la configuración inicial del programa.
{
  pinMode(13, OUTPUT);          //Configura el pin especificado para que se comporte como una entrada o una salida, en este caso es el pin 13.
}

void loop()                     //Esta función se ejecuta de forma repetitiva una vez que la función void setup() ha finalizado su ejecución inicial
{
  digitalWrite(13, HIGH);       //Escriba un valor HIGH (Encendido) en el pin  13.
  delay(1000);                  //Pausa el programa por la cantidad de tiempo (en milisegundos) especificado como parámetro. 1000 milisegundos = 1 segundo.
  digitalWrite(13, LOW);        //Escriba un valor LOW (Apagado) en el pin  13.
  delay(1000);                  //Pausa el programa por la cantidad de tiempo (en milisegundos) especificado como parámetro. 1000 milisegundos = 1 segundo.
}
//Fin del programa 