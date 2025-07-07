# Encender y apagar 1 led.  
![image](https://github.com/user-attachments/assets/53230c97-38f8-4e86-bdcb-85604764f53c)

Hola, bienvenido.
Si estás aqui porque inicias tu aventura en la programación y la electrónica felicidaes, ¡Estás dando un gran paso¡
Todo tiene un inicio simple y este es el primer programa que haremos, espero un día regreses y veas lo lejos que hemos llegado.
Recuerada que la paciencia es una gran virtud.
Bienvenido.


```cpp
/*
Programa: Encender y apagar un led en Arduino uno. (Blink)
Curso: Arduino UNO
Autor: Expacio Science Group
*/

void setup()             // Función principal	
{
  pinMode(13, OUTPUT);   // Definición del pin de salida (Pin 13)
}

void loop()       // Esta función repetirá indefinidamente el programa.
{
  digitalWrite(13, HIGH); // Instrucción para encender el led conectado al pin 13.
  delay(1000); // Encendera por 1000 millisegundos(s) (1 segundo).
  digitalWrite(13, LOW);  // Instrucción para apagar el led conectado al pin 13.
  delay(1000); // se apagará por 1000 millisegundos(s) (1 segundo).
}
```


