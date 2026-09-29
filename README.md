# Práctica 3: Área y perímetro de un rectángulo
## 1. Descripción del problema (Fase 1)
Este programa calcula el área y el perímetro de un rectángulo a partir de su base y altura. Sirve para conocer rápidamente las medidas de una figura y puede utilizarse en situaciones de construcción, diseño o medición.

_____

## 2. Entradas y salidas (Fase 1)
<!-- Define cada entrada y cada salida, con su tipo de dato, sus unidades y su objetivo. -->

**Entradas:**
1. dos datos: lado x lado
2. Dos lados: lado+ lado + lado+ lado

**Salidas:**
1.area 
2.perimetro

**Fórmulas** (área y perímetro):
Base por altura entre 2 es la del area y la del perimetro sumar todos lados 
_____

## 3. Restricciones e invariante (Fase 1 y 2)

**Restricciones** (¿qué debe cumplirse?):
- que este codigo te de el resultado de area del rectangulo 
- que este codigo te de el resultado del perimetro del rectangulo
que no de ningun resultado negativo 

**¿Qué hace mi programa con una medida de 0 o negativa? ¿Por qué?**
No la acepta ya que ningun rectangulo tiene medida negativa y con el cero como es una variable si la podria sumar 

**¿Quién detecta cada error?** (¿qué revisa `leerDecimal` y qué reviso yo?)
leer decimal convierte los decimales a variantes que si se piueden utilizar 

**Invariante** (al salir del ciclo que pide el ancho, ¿qué es seguro sobre `ancho`?): solo es una base y una altura 
_____

## 4. Casos resueltos a mano (Fase 1)

| Caso | Ancho | Alto | Área calculada a mano | Perímetro calculado a mano |
|---|---|---|---|---|
| 1 | _____ | _____ | _____ | _____ |
| 2 (cuadrado) | 20 | 20 | 400| 80 |
| 3 (con decimales) | 10.8 | 10.8 | 116.64 | 43.2 |

## 5. Receta en pseudocódigo (Fase 2)
<!-- Tu receta va en el archivo RECETA.md. Aquí solo responde las preguntas. -->

**¿Probé mi receta a mano con un caso válido y uno inválido?** Sí 
**¿Tuve que corregirla?** solo una vez ya que no puse la base
**¿Cuántas versiones de mi receta escribí hasta la final? 2

## 6. Cómo compilar y ejecutar (Fase 3)

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o rectangulo
./rectangulo
```

## 7. Ejemplo de ejecución (Fase 3)
<!-- Pega aquí lo que muestra tu programa en pantalla con un caso normal. -->
nathalyvaldes@NVALDES2A ulsa_ime_1_dp_rectangulo % g++ -Wall -Wextra -std=c++17 main.cpp -o rect
angulo && printf '5\n3\n' | ./rectangulo 10 10
Area y perimetro de un rectangulo
Ancho en cm (mayor que 0): Alto en cm (mayor que 0): Area: 15.00 cm^2
Perimetro: 16.00 cm
```
_____
```

## 8. Experimentos (Fase 3)

**Experimento A: ¿qué resultado dio `2 * ancho + alto` con 5 × 3? ¿Por qué?**
me dio area de 15cm y un perimetro 16 cm

**Experimento B: sin validación, ¿qué mostró el programa con ancho -4 y alto 3? ¿Tiene sentido?**
nooo ya que los numeros negativos no son validos en este codigo a y me saliocommand not found

**Experimento C (opcional): con `int`, ¿qué pasó con 2.5 y con 100000 × 100000?**
me salio area de 250000.00 y un perimetro de 200005.00 pero me sale que si o si el area y el perimetro tiene que ser mayor que 0

## 9. Tabla de pruebas (Fase 4)

| Caso | Ancho | Alto | Esperado | Obtenido | ¿Pasó? |
|---|---|---|---|---|---|
| Normal | 5 | 3 | Área 15, perímetro 16 | _____ | _____ |
| Cuadrado | 4 | 4 | Área 16, perímetro 16 | _____ | _____ |
| Decimales | 2.5 | 4 | Área 10, perímetro 13 | _____ | _____ |
| Muy pequeño | 0.1 | 0.1 | Área 0.01, perímetro 0.4 | _____ | _____ |
| Ancho cero | 0 | 3 | vuelve a pedir el ancho | _____ | _____ |
| Alto negativo | 5 | -2 | vuelve a pedir el alto | _____ | _____ |
| Texto | `abc` | 3 | `leerDecimal` vuelve a pedir | _____ | _____ |
| Caso propio 1 | 10 | 10 | Area 15| perimetro 16 | _____ |
| Caso propio 2 | _____ | _____ | _____ | _____ | _____ |

## 10. Bitácora de mejoras (Fase 4)

| # | ¿Qué falló o qué quise mejorar? | ¿Qué cambié? | ¿Funcionó? |
a mi me fallo el codigo, de que al redactar los numeros no me daba el area y el perimetro 
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

**Reto elegido (opcional):** _____

## 11. Dudas para el profesor (Fase 3)
ninguna
| Duda | Lo que ya intenté |
|---|---|
| _____ | _____ |

## 12. Reflexión final

**¿Qué aprendí con esta práctica?**
a que tengo que checar mejor mis codigos 

**Ahora que terminé, ¿qué cambiaría de mi proceso?**
hubiera resumido muchos pasos

**¿Qué fue lo más difícil y cómo lo resolví?**
en realidad no fue muy dificil hacerlo 

**¿Qué pregunta me quedó sin responder?**
todos las recetas que empiezas desde cero son iguales?

**Diseñar la receta desde cero, ¿fue más fácil o más difícil de lo que esperaba? ¿Qué haría distinto la próxima vez?**
estuvo dificil porq no sabia como empezar 

## 13. Lista de verificación antes de entregar (Fase 5)

- [ ] Llené todas las secciones (no quedan `_____`)
- [ ] Escribí mi receta completa en `RECETA.md` antes de programar
- [ ] Mi programa compila sin advertencias
- [ ] Probé todos los casos de la tabla
- [ ] Hice los Experimentos A y B y dejé el código correcto al terminar
- [ ] No modifiqué `utilerias.h`
- [ ] Hice al menos 3 commits con mensajes claros
- [ ] Hice `git push` y verifiqué mi fork en GitHub
- [ ] Entregué el enlace de mi fork en Classroom