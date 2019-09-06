# Tarea 4: Aplicación Gráfica para Semáforos de Intersección en C++ y Qt

Este repositorio contiene codigo fuente que simula el comportamiento de los semaforos presentes en una intersección vial, incluyendo su interfaz gráfica. Se separa en 4 etapas incrementales, donde la primera etapa corresponde a una intersección de dos semáforos vehiculares y un semáforo peatonal; la segunda etapa representa añade un botón de cruce para el semáforo peatonal; la tercera etapa incluye una luz de giro y su respectivo botón para activarla; la cuarta etapa es la integracion de todos los semaforos en la interseccion vial, agregando otro semaforo vehicular, una segunda luz de giro y otro semáforo peatonal.<p>

### Prerequisitos

El código está diseñado para ser compilado y ejecutado en sistemas operativos Windows y Linux.
El código fue desarrado y probado en windows, con QTCreator 4.9.2.<p>
Se recomienda utilizar el código en el mismo entorno que fue diseñado, el cual tiene las siguientes características:<p>

- Windows 10 64Bits<br>
- Qt 5.13.0 MinGW 64-bit<br>

## Compilación y Ejecución

Para compilar cada stage, se recomienda en abrir cada Stage desde QtCreator para configurarlo correctamente al sistema operativo en el cual será ejecutado. Se recomienda deseleccionar la opción "Shadow Build" en las configuraciones de cada proyecto (Stage).<p>

La ejecución en linux de cada etapa se adjunta a continuación, tomando como ejemplo el Stage 1:<p>

qmake Stage1.pro<br>
make<br>
./Stage1<br>

## Autores

* **Paula Amigo** - *201504013-3* - paula.amigo@sansano.usm.cl
* **Luis Bahamondes** - *201421077-9* - luis.bahamondes.14@sansano.usm.cl
* **Jairo Gonzáez** - *201304502-2* - jairo.gonzalez.13@sansano.usm.cl


## Ayudante Corrector
* **Gonzalo Rojas** - gonzalo.rojass@alumnos.usm.cl

## Profesor a Cargo
* **Cristobal Nettle** - cristobal.nettle@gmail.com