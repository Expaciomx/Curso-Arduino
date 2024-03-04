Programa: Semáforo.
Curso: Arduino UNO
Autor: Expacio STEAM

// Definición de pines
const int pinVerde = 8;         // Definimos el pin para el LED verde
const int pinAmarillo = 9;      // Definimos el pin para el LED amarillo
const int pinRojo = 10;         // Definimos el pin para el LED rojo

// Definición de tiempos en milisegundos
const unsigned long tiempoVerde = 10000;    // Tiempo que el LED verde permanece encendido (10 segundos)
const unsigned long tiempoAmarillo = 3000;  // Tiempo que el LED amarillo permanece encendido (3 segundos)
const unsigned long tiempoRojo = 10000;     // Tiempo que el LED rojo permanece encendido (10 segundos)

// Cantidad de parpadeos del LED amarillo
const int parpadeosAmarillo = 5;  // Número de parpadeos que el LED amarillo realizará antes de cambiar al rojo
const unsigned long tiempoParpadeoAmarillo = 500;  // Tiempo de duración de cada parpadeo del LED amarillo (0.5 segundos)

void setup() {
  // Inicialización de pines como salida
  pinMode(pinVerde, OUTPUT);    // Configuramos el pin del LED verde como salida
  pinMode(pinAmarillo, OUTPUT); // Configuramos el pin del LED amarillo como salida
  pinMode(pinRojo, OUTPUT);     // Configuramos el pin del LED rojo como salida
}

void loop() {
  // Estado Verde
  digitalWrite(pinVerde, HIGH);    // Encendemos el LED verde
  digitalWrite(pinAmarillo, LOW);  // Apagamos el LED amarillo
  digitalWrite(pinRojo, LOW);      // Apagamos el LED rojo
  delay(tiempoVerde);              // Esperamos el tiempo del estado verde

  // Parpadeo del LED Amarillo
  for (int i = 0; i < parpadeosAmarillo; i++) {  // Iniciamos un bucle que ejecutará el parpadeo del LED amarillo 5 veces
    digitalWrite(pinVerde, LOW);                  // Apagamos el LED verde
    digitalWrite(pinAmarillo, HIGH);              // Encendemos el LED amarillo
    digitalWrite(pinRojo, LOW);                   // Apagamos el LED rojo
    delay(tiempoParpadeoAmarillo);               // Esperamos el tiempo de parpadeo del LED amarillo
    digitalWrite(pinAmarillo, LOW);               // Apagamos el LED amarillo
    delay(tiempoParpadeoAmarillo);               // Esperamos el tiempo de parpadeo del LED amarillo
  }

  // Estado Rojo
  digitalWrite(pinVerde, LOW);    // Apagamos el LED verde
  digitalWrite(pinAmarillo, LOW); // Apagamos el LED amarillo
  digitalWrite(pinRojo, HIGH);    // Encendemos el LED rojo
  delay(tiempoRojo);              // Esperamos el tiempo del estado rojo
}
