# Actividad 2 – Cálculo del Impuesto Sobre la Renta (ISR)

**Asignatura:** Lógica de Programación
**Profesor:** Gamalier Reyes del Carmen
**Estudiante:** _(tu nombre y matrícula)_

## Resumen

Programa en C++ que lee el sueldo mensual de un empleado, calcula el ISR que se le debe descontar y muestra en pantalla el sueldo y el descuento. El cálculo sigue la escala de retención para asalariados de la DGII (República Dominicana) vigente para el año 2026. Si el sueldo no aplica para descuento, el programa muestra `0.00 (N/A - Exento)`.

### Cómo funciona

1. Se pide el sueldo mensual y se valida que sea mayor que cero.
2. Se convierte a sueldo anual (sueldo mensual × 12).
3. Se ubica el sueldo anual en la escala y se calcula el ISR anual.
4. Se divide entre 12 para obtener el ISR mensual a descontar.
5. Se muestra el sueldo, el ISR y el sueldo neto, y se pregunta si se desea calcular otro sueldo.

### Escala utilizada (DGII, 2026)

| Renta anual (RD$) | ISR |
|---|---|
| Hasta 416,220.00 | Exento |
| 416,220.01 a 624,329.00 | 15% del excedente de 416,220.00 |
| 624,329.01 a 867,123.00 | 31,216.00 + 20% del excedente de 624,329.00 |
| Más de 867,123.00 | 79,776.00 + 25% del excedente de 867,123.00 |

Fuente: Guía de ISR de personas físicas, DGII (https://dgii.gov.do).

> Nota: el programa no considera deducciones adicionales (por ejemplo, TSS). Se calcula el ISR directamente sobre el sueldo ingresado.

## Archivos

- `calculo_isr.cpp`: código fuente del programa.
- `README.md`: este documento.

## Cómo ejecutarlo

1. Abrir Visual Studio y crear un proyecto de **Aplicación de consola C++**.
2. Reemplazar el contenido del archivo principal por el de `calculo_isr.cpp`.
3. Ejecutar con `Ctrl + F5`.

## Capturas de pantalla (programa en ejecución)

### Escenario 1: sueldo exento (RD$ 30,000.00)
Resultado esperado: ISR de 0.00 (N/A - Exento).

![Escenario 1](capturas/escenario1.png)

### Escenario 2: tramo de 15% (RD$ 45,000.00)
Resultado esperado: ISR mensual de RD$ 1,547.25.

![Escenario 2](capturas/escenario2.png)

### Escenario 3: tramo de 20% (RD$ 65,000.00)
Resultado esperado: ISR mensual de RD$ 5,195.85.

![Escenario 3](capturas/escenario3.png)

### Escenario 4: tramo de 25% (RD$ 100,000.00)
Resultado esperado: ISR mensual de RD$ 13,582.94.

![Escenario 4](capturas/escenario4.png)

### Escenario 5: dato inválido (sueldo 0 o negativo)
Resultado esperado: mensaje de error.

![Escenario 5](capturas/escenario5.png)
