/***************************************************************
*   Fecha: Noviembre 2023
*   Autor: J. Avendaño, S. Franco
*   Materia: Computación de Alto Rendimiento
*   Maestría de Inteligencia Artificial
*   Pontificia Universidad Javeriana
*   Objetivo: Headers para llamado de funciones de ejecución del programa
****************************************************************/

extern void Sample_Init (int argc, char *argv[]);
extern void Sample_Start(int THR);
void Sample_Stop (int THR);
int  Sample_PAR_install (void);
void Sample_End  (void);
