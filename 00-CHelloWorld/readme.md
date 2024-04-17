# TP0 - Hello, Sergio!
## Compilador y Estándar de C
- **Compilador**: Clang
- **Estándar de C**: C11

## Descripción
Este proyecto creado en lenguaje C imprime un mensaje en consola y redirige la salida a un archivo `output.txt`.

## Requisitos previos
- Tener un compilador de C instalado en tu sistema. Puedes utilizar Clang o GCC.

## Pasos para ejecutar el proyecto
### Clonar el repositorio
`````
git clone https://github.com/sergio2213/SSL.git
`````
### Compilación
1. Mueve al directorio `00-CHelloWorld`
````
cd 00-CHelloWorld
````

2. Compilar el archivo fuente utilizando el compilador de C que tengas instalado (Clang o GCC).
#### Clang
````
clang hello.c -std=c11 -o hello
````
#### GCC
````
gcc hello.c -std=c11 -o hello
````
### Ejecución
1. Ejecutar el programa compilado desde la terminal:
#### Linux/macOS
````
./hello
````
#### Windows
````
hello
````
2. Verificar que la salida en consola sea la siguiente:
````
Hello, Sergio!
`````
### Redireccionar la salida
1. Puedes ejecutar el programa compilado de la siguiente manera para redireccionar la salida al archivo `output.txt`.

#### Linux/macOS
````
./hello > output.txt
````
#### Windows
````
hello > output.txt
````

6. Verifica que el archivo `output.txt` contenga la siguiente salida del programa:
````
Hello, Sergio!

````

## Adicional
Si deseas modificar el mensaje que se imprime, puedes editar el contenido del arreglo `hello[]` en el archivo fuente `hello.c` y luego recompilar el programa con los pasos anteriores.