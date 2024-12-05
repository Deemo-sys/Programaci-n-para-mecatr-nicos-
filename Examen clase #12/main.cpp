#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

// Estructura para representar un alumno
struct Alumno
{
    char nombre[50];
    float promedio;
    char carrera[50];
};

// Función para verificar si un archivo existe
int archivoExiste(const char* nombreArchivo)
{
    FILE* archivo = fopen(nombreArchivo, "rb");  // Abre el archivo en modo lectura binaria osea que lo manda tal cual los noombres.
    if (archivo)
    {
        fclose(archivo);  // Si el archivo se abre correctamente, lo cierra y retorna 1 indica que el archivo existe.
        return 1;
    }
    return 0;  // Si no se puede abrir el archivo, retorna 0 no existe el archivo en dado caso.
}

// Función para crear un nuevo archivo
void crearNuevoArchivo(const char* nombreArchivo)
{
    FILE* archivo = fopen(nombreArchivo, "wb");  // Crea un archivo nuevo en modo escritura binaria
    if (archivo)
    {
        cout << "Archivo creado exitosamente.\n";  // Si se crea el archivo correctamente
        fclose(archivo);  // Cierra el archivo
    }
    else
    {
        cout << "Error al crear el archivo.\n";  // Si hay un error al crear el archivo
    }
}

// Función para guardar un registro de un alumno en el archivo
void guardarRegistro(const char* nombreArchivo, Alumno alumno)
{
    FILE* archivo = fopen(nombreArchivo, "ab");  // Abre el archivo en modo "append" binario
    if (archivo)
    {
        fwrite(&alumno, sizeof(Alumno), 1, archivo);  // Escribe un registro de tipo Alumno en el archivo
        cout << "Registro guardado exitosamente.\n";  // Confirmación de guardado
        fclose(archivo);  // Cierra el archivo
    }
    else
    {
        cout << "Error al guardar el registro.\n";  // Si no se puede abrir el archivo
    }
}

// Función para buscar un alumno por nombre exacto
void buscarRegistro(const char* nombreArchivo, const char* nombreBuscado)
{
    FILE* archivo = fopen(nombreArchivo, "rb");  // Abre el archivo en modo lectura binaria
    if (archivo)
    {
        Alumno alumno;
        int encontrado = 0;
        while (fread(&alumno, sizeof(Alumno), 1, archivo))  // Lee registros de tipo Alumno
        {
            if (strcmp(alumno.nombre, nombreBuscado) == 0)  // Compara el nombre con el buscado
            {
                cout << "Alumno encontrado:\n";
                cout << "Nombre: " << alumno.nombre << "\n";
                cout << "Promedio: " << alumno.promedio << "\n";
                cout << "Carrera: " << alumno.carrera << "\n";
                encontrado = 1;  // Marca que el alumno fue encontrado
                break;
            }
        }
        if (!encontrado)
        {
            cout << "Alumno no encontrado.\n";  // Si no se encuentra el alumno
        }
        fclose(archivo);  // Cierra el archivo
    }
    else
    {
        cout << "Error al abrir el archivo.\n";  // Si no se puede abrir el archivo
    }
}

// Función para buscar alumnos cuyo nombre comienza con un carácter específico
void buscarPorCaracter(const char* nombreArchivo, char inicial)
{
    FILE* archivo = fopen(nombreArchivo, "rb");  // Abre el archivo en modo lectura binaria
    if (archivo)
    {
        Alumno alumno;
        int encontrado = 0;
        while (fread(&alumno, sizeof(Alumno), 1, archivo))  // Lee registros de tipo Alumno
        {
            if (alumno.nombre[0] == inicial)  // Verifica si el nombre comienza con el carácter dado
            {
                cout << "Alumno encontrado:\n";
                cout << "Nombre: " << alumno.nombre << "\n";
                cout << "Promedio: " << alumno.promedio << "\n";
                cout << "Carrera: " << alumno.carrera << "\n";
                encontrado = 1;  // Marca que se encontró un alumno
            }
        }
        if (!encontrado)
        {
            cout << "No se encontraron alumnos que comiencen con el caracter '" << inicial << "'.\n";  // Si no se encuentra ningún alumno
        }
        fclose(archivo);  // Cierra el archivo
    }
    else
    {
        cout << "Error al abrir el archivo.\n";  // Si no se puede abrir el archivo
    }
}

// Función principal
int main()
{
    int opcion;
    char nombreArchivo[50];
    Alumno alumno;

    do
    {
        // Menú de opciones
        cout << "\nMenu:\n";
        cout << "1. Nuevo Archivo\n";
        cout << "2. Abrir Archivo\n";
        cout << "3. Guardar Registro\n";
        cout << "4. Buscar Registro por Nombre\n";
        cout << "5. Buscar Registros por Caracter Inicial\n";
        cout << "6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;  // Lee la opción seleccionada
        cin.ignore();   // Limpiar el buffer de entrada. Lo que le explique le puse ese en vez del floatch

        switch (opcion)
        {
        case 1:
            cout << "Ingrese el nombre del nuevo archivo: ";
            cin.getline(nombreArchivo, 50);  // Lee el nombre del archivo para crear
            crearNuevoArchivo(nombreArchivo);  // Llama a la función para crear el archivo
            break;
        case 2:
            cout << "Ingrese el nombre del archivo a abrir: ";
            cin.getline(nombreArchivo, 50);  // Lee el nombre del archivo a abrir
            if (archivoExiste(nombreArchivo))  // Verifica si el archivo existe
            {
                cout << "Archivo abierto exitosamente.\n";
            }
            else
            {
                cout << "El archivo no existe.\n";  // Si no existe el archivo
            }
            break;
        case 3:
            cout << "Ingrese el nombre del archivo donde guardar: ";
            cin.getline(nombreArchivo, 50);  // Lee el nombre del archivo donde se guardará el registro
            cout << "Ingrese el nombre del alumno: ";
            cin.getline(alumno.nombre, 50);  // Lee el nombre del alumno
            cout << "Ingrese el promedio del alumno: ";
            cin >> alumno.promedio;  // Lee el promedio del alumno
            cin.ignore();  // Limpiar el buffer para evitar problemas con cin.getline
            cout << "Ingrese la carrera del alumno: ";
            cin.getline(alumno.carrera, 50);  // Lee la carrera del alumno
            guardarRegistro(nombreArchivo, alumno);  // Llama a la función para guardar el registro
            break;
        case 4:
            cout << "Ingrese el nombre del archivo donde buscar: ";
            cin.getline(nombreArchivo, 50);  // Lee el nombre del archivo donde buscar
            cout << "Ingrese el nombre exacto del alumno a buscar: ";
            char nombreBuscado[50];
            cin.getline(nombreBuscado, 50);  // Lee el nombre del alumno a buscar
            buscarRegistro(nombreArchivo, nombreBuscado);  // Llama a la función para buscar el registro
            break;
        case 5:
            cout << "Ingrese el nombre del archivo donde buscar: ";
            cin.getline(nombreArchivo, 50);  // Lee el nombre del archivo donde buscar
            cout << "Ingrese el caracter inicial para buscar: ";
            char inicial;
            cin >> inicial;  // Lee el carácter inicial
            buscarPorCaracter(nombreArchivo, inicial);  // Llama a la función para buscar por carácter inicial
            break;
        case 6:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida.\n";  // Si la opción seleccionada no es válida
        }
    }
    while (opcion != 6);  // Repite el menú hasta que el usuario elija salir

    return 0;
}
