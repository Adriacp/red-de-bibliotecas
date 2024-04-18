/**
 * Universidad de La Laguna
 * Escuela Superior de Ingniería y tecnología
 * Grado en Ingeniería Informática
 * Fundamentos de Ingeniería del Software
 * 
 * @date 15 Abr 2024
 * @brief Fichero con la declaración de diferentes funciones de utilidad para el programa
*/

#ifndef TOOLS_H
#define TOOLS_H

#include <iostream>
#include <sstream>
#include <optional>
#include <fstream>
#include "usuarios.h"


std::optional<Persona*> IniciarSesion(std::string nombre_usuario, std::string contraseña);
bool AbrirInventario(std::ifstream&, std::string);
bool CerarInventario(std::ifstream&);

#endif