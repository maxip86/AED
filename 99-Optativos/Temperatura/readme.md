# 0x Funciones y Comparación de Valores en Punto Flotante

### Usuario github: maxip86
### Legajo: 1562824
### Apellido: Peña
### Nombre: Maximiliano Ezequiel
### Compilador utilizado: MinGW

### Análisis del Problema y el Diseño de la Solución:
1. #### Análisis del problema:
  - ##### Transcripción del problema. 
    ##### *Desarrollar una función que, dada una magnitud en Fahrenheit, calcule la equivalente en Celsius.*
    ##### *RESTRICCIONES:*
    - ##### *Las pruebas deben realizarse con assert.*
    - ##### *Los prototipos deben ser:*
      ###### *double Celsius(double);*
      ###### *bool AreNear(double, double, double = 0.001);*


  - ##### Refinamiento del problema e Hipótesis de trabajo. 
      ##### *Dado un valor, ingresado por el usuario mediante teclado, que representa una cierta temperatura en grados Fahrenheit se calculará su equivalente en Celsius.*
      

  - ##### Modelo IPO. 
    ##### *R --> Función*

2. #### Diseño de la Solución:
  - ##### Léxico del Algoritmo. 
    ##### *"a" y "b" perteneciente a reales*

  
  - ##### Representación del Algoritmo:
    
    - ##### Representación textual. 
      ##### *1) Declarar función.*
      ##### *2) Almacenar en "a" el número ingresado por el usuario.*
      ##### *3) Se invoca la función.*
      ##### *4) Se define la funcíon como ( a - 32 ) x 5 / 9 = b*
