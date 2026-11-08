// Actividad 2 - Calculo del Impuesto Sobre la Renta (ISR)
// Logica de Programacion
// Escala de asalariados DGII (Republica Dominicana) - ano 2026

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Limites anuales de la escala (RD$)
    const double LIMITE_EXENTO = 416220.00;
    const double LIMITE_15 = 624329.00;
    const double LIMITE_20 = 867123.00;

    // Montos fijos acumulados de los tramos anteriores (RD$)
    const double FIJO_20 = 31216.00;
    const double FIJO_25 = 79776.00;

    double sueldoMensual, sueldoAnual, isrAnual, isrMensual;
    char continuar;

    cout << fixed << setprecision(2);

    do
    {
        cout << "==========================================" << endl;
        cout << "   CALCULO DEL ISR - ASALARIADOS (2026)   " << endl;
        cout << "==========================================" << endl;

        cout << "Ingrese el sueldo mensual (RD$): ";
        cin >> sueldoMensual;

        if (sueldoMensual <= 0)
        {
            cout << "Error: el sueldo debe ser mayor que cero." << endl;
        }
        else
        {
            sueldoAnual = sueldoMensual * 12;

            if (sueldoAnual <= LIMITE_EXENTO)
            {
                // Tramo exento
                isrAnual = 0;
            }
            else if (sueldoAnual <= LIMITE_15)
            {
                // 15% del excedente de 416,220.00
                isrAnual = (sueldoAnual - LIMITE_EXENTO) * 0.15;
            }
            else if (sueldoAnual <= LIMITE_20)
            {
                // RD$31,216.00 + 20% del excedente de 624,329.00
                isrAnual = FIJO_20 + (sueldoAnual - LIMITE_15) * 0.20;
            }
            else
            {
                // RD$79,776.00 + 25% del excedente de 867,123.00
                isrAnual = FIJO_25 + (sueldoAnual - LIMITE_20) * 0.25;
            }

            isrMensual = isrAnual / 12;

            cout << endl;
            cout << "------------- RESULTADO -------------" << endl;
            cout << "Sueldo mensual:      RD$ " << sueldoMensual << endl;
            cout << "Sueldo anual:        RD$ " << sueldoAnual << endl;

            if (isrAnual == 0)
            {
                cout << "ISR a descontar:     RD$ 0.00 (N/A - Exento)" << endl;
            }
            else
            {
                cout << "ISR anual:           RD$ " << isrAnual << endl;
                cout << "ISR mensual a descontar: RD$ " << isrMensual << endl;
                cout << "Sueldo neto (sin ISR):   RD$ " << sueldoMensual - isrMensual << endl;
            }
            cout << "-------------------------------------" << endl;
        }

        cout << endl << "Desea calcular otro sueldo? (s/n): ";
        cin >> continuar;
        cout << endl;

    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado." << endl;
    return 0;
}
