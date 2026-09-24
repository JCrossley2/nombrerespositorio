#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona
{
public:
    Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
    ~Persona();
private:
    bool genero;
    int edad;
    char [10] DNI;

};

#endif // PERSONA_HPP
