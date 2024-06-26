/**
 * Universidad de La Laguna
 * Escuela Superior de Ingniería y tecnología
 * Grado en Ingeniería Informática
 * Fundamentos de Ingeniería del Software
 * 
 * @date 15 Abr 2024
 * @brief Fichero con la definición de los métodos de la clase Libro
*/

#include "libro.h"

void Libro::PonerEnPrestamo() {
  en_prestamo_ = true;
  dias_para_devolucion_ = 30;

}

void Libro::MostrarInformacion() {
  std::cout << "Título: " << nombre_ << std::endl;
  std::cout << "Autor: " << nombre_autor_ << std::endl;
  std::cout << "En préstamo: " << (en_prestamo_ ? "Sí" : "No") << std::endl;
  if (dias_para_devolucion_ != -1) std::cout << "Días para devolución: " << dias_para_devolucion_ << std::endl;
}