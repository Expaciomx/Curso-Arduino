/*Programa: Semáforo.
Curso: Arduino UNO
Autor: Expacio STEAM
*/

// Definición de los pines de los LED
const int leds[] = {2, 3, 4, 5, 6}; // Definimos un arreglo para los pines de los LEDs
const int numLeds = sizeof(leds) / sizeof(leds[0]); // Calculamos la cantidad de LEDs en el arreglo

void setup() {
// Configurar los pines como salidas
for (int i = 0; i < numLeds; i++) { // Iteramos sobre todos los LEDs
 pinMode(leds[i], OUTPUT); // Configuramos cada pin como salida
}

// Iniciar la generación de números aleatorios
randomSeed(analogRead(0)); // Inicializamos la generación de números aleatorios con una entrada analógica
}

void loop() {
// Encender un LED aleatorio
int randomLed = random(0, numLeds); // Seleccionamos un LED aleatorio
digitalWrite(leds[randomLed], HIGH); // Encendemos el LED seleccionado

// Esperar un tiempo
delay(100); // Esperamos 1 segundo

// Apagar todos los LEDs
for (int i = 0; i < numLeds; i++) { // Iteramos sobre todos los LEDs
digitalWrite(leds[i], LOW); // Apagamos cada LED
}
// Esperar un tiempo
delay(100); // Esperamos medio segundo antes de comenzar el siguiente ciclo
}
