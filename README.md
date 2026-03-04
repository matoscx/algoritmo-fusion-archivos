# algoritmo-fusion-archivos
Algoritmo de Fusión de Archivos en C++

Este proyecto implementa un algoritmo de mezcla (merge) diseñado para combinar el contenido de dos archivos de texto ordenados en un tercer archivo de salida, manteniendo el orden ascendente de los registros. Es un ejemplo fundamental de manejo de punteros a archivos (FILE) y lógica de ordenamiento externo en C++.

El Proyecto

El programa lee secuencias de números enteros de dos fuentes distintas (entrada1.txt y entrada2.txt) y los compara uno a uno. El menor de los valores se escribe en salida.txt, asegurando que el archivo resultante esté perfectamente ordenado sin necesidad de cargar todos los datos en la memoria RAM simultáneamente.

Características Técnicas

Manejo de Archivos: Uso de fopen, fscanf, fprintf y fclose para la persistencia de datos.

Lógica de Mezcla: Implementación de un ciclo while condicional que procesa los archivos hasta que uno de ellos se agota, seguido de un vaciado de los registros restantes del otro archivo.

Eficiencia: El algoritmo tiene una complejidad lineal, procesando cada registro una sola vez.

Estructura del Algoritmo

Apertura: Se establecen conexiones con los archivos de entrada (lectura) y salida (escritura).

Lectura Inicial: Se capturan los primeros elementos de ambos archivos.

Comparación: Se decide qué elemento es menor y se escribe en el destino.

Vaciado: Se transfieren los elementos sobrantes del archivo que aún tenga datos.

Cierre: Se liberan los recursos del sistema.

Requisitos

Compilador de C++ (GCC, Clang o MSVC).

Archivos de texto llamados entrada1.txt y entrada2.txt en la ruta especificada por el código.
