#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Alumno
{
    char nombre[50];
    float promedio;
    char carrera[50];
};


int archivoExiste(const char* nombreArchivo)
{
    FILE* archivo = fopen(nombreArchivo, "rb");
    if (archivo)
    {
        fclose(archivo);
        return 1;
    }
    return 0;
}


void crearNuevoArchivo(const char* nombreArchivo)
{
    FILE* archivo = fopen(nombreArchivo, "wb");
    if (archivo)
    {
        cout << "Archivo creado exitosamente.\n";
        fclose(archivo);
    }
    else
    {
        cout << "Error al crear el archivo.\n";
    }
}


void guardarRegistro(const char* nombreArchivo, Alumno alumno)
{
    FILE* archivo = fopen(nombreArchivo, "ab");
    if (archivo)
    {
        fwrite(&alumno, sizeof(Alumno), 1, archivo);
        cout << "Registro guardado exitosamente.\n";
        fclose(archivo);
    }
    else
    {
        cout << "Error al guardar el registro.\n";
    }
}


void buscarRegistro(const char* nombreArchivo, const char* nombreBuscado)
{
    FILE* archivo = fopen(nombreArchivo, "rb");
    if (archivo)
    {
        Alumno alumno;
        int encontrado = 0;
        while (fread(&alumno, sizeof(Alumno), 1, archivo))
        {
            if (strcmp(alumno.nombre, nombreBuscado) == 0)
            {
                cout << "Alumno encontrado:\n";
                cout << "Nombre: " << alumno.nombre << "\n";
                cout << "Promedio: " << alumno.promedio << "\n";
                cout << "Carrera: " << alumno.carrera << "\n";
                encontrado = 1;
                break;
            }
        }
        if (!encontrado)
        {
            cout << "Alumno no encontrado.\n";
        }
        fclose(archivo);
    }
    else
    {
        cout << "Error al abrir el archivo.\n";
    }
}


void buscarPorCaracter(const char* nombreArchivo, char inicial)
{
    FILE* archivo = fopen(nombreArchivo, "rb");
    if (archivo)
    {
        Alumno alumno;
        int encontrado = 0;
        while (fread(&alumno, sizeof(Alumno), 1, archivo))
        {
            if (alumno.nombre[0] == inicial)
            {
                cout << "Alumno encontrado:\n";
                cout << "Nombre: " << alumno.nombre << "\n";
                cout << "Promedio: " << alumno.promedio << "\n";
                cout << "Carrera: " << alumno.carrera << "\n";
                encontrado = 1;
            }
        }
        if (!encontrado)
        {
            cout << "No se encontraron alumnos que comiencen con el caracter '" << inicial << "'.\n";
        }
        fclose(archivo);
    }
    else
    {
        cout << "Error al abrir el archivo.\n";
    }
}

int main()
{
    int opcion;
    char nombreArchivo[50];
    Alumno alumno;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Nuevo Archivo\n";
        cout << "2. Abrir Archivo\n";
        cout << "3. Guardar Registro\n";
        cout << "4. Buscar Registro por Nombre\n";
        cout << "5. Buscar Registros por Caracter Inicial\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el nombre del nuevo archivo: ";
            cin.getline(nombreArchivo, 50);
            crearNuevoArchivo(nombreArchivo);
            break;
        case 2:
            cout << "Ingrese el nombre del archivo a abrir: ";
            cin.getline(nombreArchivo, 50);
            if (archivoExiste(nombreArchivo))
            {
                cout << "Archivo abierto exitosamente.\n";
            }
            else
            {
                cout << "El archivo no existe.\n";
            }
            break;
        case 3:
            cout << "Ingrese el nombre del archivo donde guardar: ";
            cin.getline(nombreArchivo, 50);
            cout << "Ingrese el nombre del alumno: ";
            cin.getline(alumno.nombre, 50);
            cout << "Ingrese el promedio del alumno: ";
            cin >> alumno.promedio;
            cin.ignore();
            cout << "Ingrese la carrera del alumno: ";
            cin.getline(alumno.carrera, 50);
            guardarRegistro(nombreArchivo, alumno);
            break;
        case 4:
            cout << "Ingrese el nombre del archivo donde buscar: ";
            cin.getline(nombreArchivo, 50);
            cout << "Ingrese el nombre exacto del alumno a buscar: ";
            char nombreBuscado[50];
            cin.getline(nombreBuscado, 50);
            buscarRegistro(nombreArchivo, nombreBuscado);
            break;
        case 5:
            cout << "Ingrese el nombre del archivo donde buscar: ";
            cin.getline(nombreArchivo, 50);
            cout << "Ingrese el caracter inicial para buscar: ";
            char inicial;
            cin >> inicial;
            buscarPorCaracter(nombreArchivo, inicial);
            break;
        case 6:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida.\n";
        }
    }
    while (opcion != 6);

    return 0;
}
